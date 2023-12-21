/* ====== RINGBUFFER_C ====== */

#include <stdio.h>
#include <stdlib.h>
#include "ringbuffer.h"

/*
 Fuegt Elemente nach dem FIFO-Prinzip am Ende der Schlange ein
 Datentyp void beim Pointer data, da der datentyp unbestimmt ist
*/
int write(ring_buffer *buffer, void *data){
    // Wenn noch Platz im Puffer ist
    if(buffer == NULL){
        return 0;
    }

    if(data == NULL){
        return 0;
    }

    if (buffer->count < buffer->size) 
    {
        //Fuegt das neue Element am Ende des Buffers ein
        //head + count ist der index des naechsten freien slots
        //durch das modulo bleibt der index immer in den richtigen Grenzen
        buffer->elems[(buffer->head + buffer->count) % buffer->size] = data;
        buffer->count++; // Erhöht die Anzahl der Elemente im Puffer
    } 
    else 
    {
        // Der Puffer ist voll, ersetzt das älteste Element
        void *old_data = buffer->elems[buffer->head];
        buffer->elems[buffer->head] = data; // Ersetzt das aelteste Element durch das neue
        buffer->head = (buffer->head + 1) % buffer->size; // Verschiebt head auf das naechste Element
        if (buffer->free_callback != NULL) 
        {
            // Freigabe des ersetzten Elements
            buffer->free_callback(old_data);
        }
    }
    return 1;
}

/* Entnimmt Elemente vom Anfang der Queue */
void *read(ring_buffer *buffer){
    if(buffer == NULL){
        return NULL;
    }
    if (buffer->count == 0) {
        return NULL; // Puffer ist leer
    }

    // Liest das erste aelteste Element aus dem Puffer
    void *oldest = buffer->elems[buffer->head];
    buffer->head = (buffer->head + 1) % buffer->size; // Verschiebt den Kopf auf das nächste Element
    buffer->count--; // Reduziert die Anzahl der Elemente im Puffer

    return oldest; // Gibt das gelesene Element zurück
}

/* Legt ein dynamisches Array auf dem Heap an */
ring_buffer *init_buffer(const size_t n, void (*f)(void *p)){
    // Allokiert Speicherplatz fuer die Ringbufferstruktur
    ring_buffer *buffer = (ring_buffer *)malloc(sizeof(ring_buffer));
    if (buffer == NULL) {
        return NULL; // Fehler bei der Speicherreservierung
    }
    // Setzt die Eigenschaften des Buffers
    buffer->size = n; // Setzt die Kapazität des Puffers
    buffer->count = 0; // Initialisiert die Anzahl der Elemente im Puffer mit 0
    buffer->head = 0; // Setzt den Kopf auf den Anfang des Puffers
    
    // Allokiert Speicherplatz fuer das Array von Elementen
    buffer->elems = (void **)malloc(n * sizeof(void *)); 
    
    if (buffer->elems == NULL) {
        free(buffer); // Speicherfreigabe, falls die Reservierung fehlschlägt
        return NULL;
    }

    buffer->free_callback = f; // Setzt free callback für Elemente im Puffer

    return buffer; // Gibt den initialisierten Puffer zurück
}

// Freigabe des Puffers und der Daten
int free_buffer(ring_buffer *buffer) {
    if (buffer == NULL) {
        return 0; // Puffer ist bereits leer oder ungültig
    }

    int original_count = buffer->count;

    // Durchläuft den Puffer und gibt die Elemente frei
    for (size_t i = 0; i < buffer->count; i++) {
        if (buffer->free_callback != NULL) {
            // Freigabe der Elemente unter Verwendung der Freigabefunktion
            buffer->free_callback(buffer->elems[i]);
        }
    }

    free(buffer->elems); // Gibt den Speicher des Arrays frei
    free(buffer); // Gibt den Speicher des Buffers frei

    return original_count; // Gibt die Anzahl der ursprünglich gespeicherten Elemente zurück
}

//Freigabefunktion
void free_function(void *p) {
    free(p); 
}
