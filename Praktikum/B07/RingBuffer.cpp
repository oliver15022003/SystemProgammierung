#include "ringBuffer.h" // Header-Datei, in der die Klasse deklariert wird
#include <iostream>

// Konstruktor
template <typename T, size_t size, typename alloc_t>
RingBuffer<T, size, alloc_t>::RingBuffer() : count(0), head(0) {
    elems = new T*[size](); // Dynamische Allokation des Speichers für die Elemente (initialisiert mit nullptr)
}

// Destruktor
template <typename T, size_t size, typename alloc_t>
RingBuffer<T, size, alloc_t>::~RingBuffer() {
    if (elems) {
        for (size_t i = 0; i < size; ++i) {
            if (elems[i]) {
                m_allocator.deallocate(elems[i], 1); // Deallokation des Elements mit dem Allocator
            }
        }
        delete[] elems; // Freigabe des Speichers für die Array-Zeiger
    }
}

// readBuffer-Methode
template <typename T, size_t size, typename alloc_t>
T* RingBuffer<T, size, alloc_t>::readBuffer() {
    if (count == 0) {
        return nullptr; // Buffer ist leer
    }
    T* element = elems[head];
    head = (head + 1) % size;
    --count;
    return element;
}

// writeBuffer-Methode
template <typename T, size_t size, typename alloc_t>
void RingBuffer<T, size, alloc_t>::writeBuffer(T *data) {
    if (count == size) {
        m_allocator.deallocate(elems[head], 1); // Freigabe des aeltesten Elements mit dem Allocator
        head = (head + 1) % size;
    } else {
        ++count;
    }
    elems[(head + count - 1) % size] = data; // Hinzufuegen des neuen Elements an das Ende
}

// displayStatus-Methode
template <typename T, size_t size, typename alloc_t>
void RingBuffer<T, size, alloc_t>::displayStatus() const {
    std::cout << "Number of elements: " << count << "/" << size << std::endl;
}
