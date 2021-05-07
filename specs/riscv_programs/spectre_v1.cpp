#include <stdlib.h>
#include <stdint.h>
size_t array1_size, array2_size, array_size_mask;
uint8_t array1[10], array2[10], temp;


void victim_function_v01(size_t x) {
    if (x < array1_size) {
          temp &= array2[array1[x] * 512];
     }
}

int main() {
    victim_function_v01(10);
    return 0;
}
