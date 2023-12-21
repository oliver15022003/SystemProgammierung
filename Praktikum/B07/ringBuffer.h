#include <iostream>

/**
 * Template class to represent a ring buffer
 *
 * @param T is the type of elements to be stored (via pointer of type `T*`)
 * @param size is the max. number of elements that can be stored
 * @param alloc_t is the type of the allocator used to allocate the pointers to the elements (optional)
 */
template <typename T, size_t size, typename alloc_t = std::allocator<T>>
class RingBuffer {
public:
    /**
     * Constructor that creates a new ring buffer for max. `size` elements
     *
     * Initialises the attributes and allocates memory for `size` elements of type `T*` and let the
     * pointer `elems` point to this new array
     */
    RingBuffer();

    /**
     * Destructor
     *
     * 1. Frees all elements using an allocator of type `alloc_t`
     * 2. Frees the dynamically allocated array `elems`
     */
    ~RingBuffer();

    /**
     * Reading the first (oldest) element
     *
     * If an element has been read, the `head` points to the next element and `count` is decremented.
     * The read element is **not** released.
     *
     * @return Returns a pointer to the first (i.e. oldest) element of the buffer, but does not (yet)
     * delete it; returns `nullptr` if buffer is empty
     */
    T* readBuffer();

    /**
     * Adding a new element
     *
     * Appends the new element to the end of the queue. If the buffer is full, the oldest element will be
     * deleted with an allocator of type `alloc_t` and the pointer to the new element will be inserted in
     * this location.
     *
     * @param data is a pointer to the element to be added (allocated with an allocator of type `alloc_t`)
     */
    void writeBuffer(T *data);

    /**
     * Indicates the number of elements in the ring buffer relative to its size on the LED display
     */
    void displayStatus() const;

private:
    alloc_t m_allocator;    ///< allocator to free element pointers

    size_t count;           ///< number of elements currently stored in the buffer
    size_t head;            ///< points to the beginning of the buffer (oldest element)
    T **elems;              ///< array with `size` places of type `T*`, dynamically allocated
};