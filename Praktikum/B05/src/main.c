/* ====== MAIN_C ====== */

#include <stdio.h>
#include <stdlib.h>
#include "ringbuffer.h"

int main(void)
{
    ring_buffer *buffer = init_buffer(5, free_function);

    int *data1 = (int *)malloc(sizeof(int));
    *data1 = 10;

    int *data2 = (int *)malloc(sizeof(int));
    *data2 = 20;

    int *data3 = (int *)malloc(sizeof(int));
    *data3 = 4;

    int *data4 = (int *)malloc(sizeof(int));
    *data4 = 53;

    int *data5 = (int *)malloc(sizeof(int));
    *data5 = 61;

    int *data6 = (int *)malloc(sizeof(int));
    *data6 = 68;

    write(buffer, data1);
    write(buffer, data2);
    write(buffer, data3);
    write(buffer, data4);
    write(buffer, data5);
    write(buffer, data6);

    // Entnimmt und zeigt die Elemente aus dem Ringpuffer
    printf("\nReading elements from buffer:\n");
    for (int i = 0; i < 5; ++i) {
        int *data = read(buffer);
        if (data != NULL) {
            printf("Read: %d\n", *data);
        } else {
            printf("Buffer is empty.\n");
        }
    }

    free_buffer(buffer);

}