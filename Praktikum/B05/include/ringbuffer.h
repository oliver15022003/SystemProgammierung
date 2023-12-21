/* ====== RINGBUFFER_H ====== */

#ifndef RINGBUFFER_H
#define RINGBUFFER_H


/*
size = maximale groesse
count = anzahl der Elemente   
head = zeigt auf anfang der Queue bzw.
auf das aelteste Element 
*/
typedef struct ring_buffer 
{
    size_t size, count, head;
    void **elems;// Realisiert dynamisches array durch Funktionspointer
    // Funktion mit der freizugebende Elemente entfernt werden
    void (*free_callback)(void *p);

}ring_buffer;

int write(ring_buffer *buffer, void *data);
void *read(ring_buffer *buffer);
int free_buffer(ring_buffer *buffer);
void free_function(void *p);
ring_buffer *init_buffer(const size_t n, void (*f)(void *p));

#endif //RINGBUFFER_H