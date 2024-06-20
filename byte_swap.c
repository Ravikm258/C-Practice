#include <stdio.h>
#include <stdint.h>

int main(){
    uint16_t num = 0xABCD;
    uint16_t swapped = 0;

    swapped = (num & 0x00f0) |(num & 0xf000) | ((num & 0x000f) << 8) | ((num & 0x0f00) >> 8);

    printf("Actual number : %X  odd byte swapped : %X\n",num,swapped);

    return 0;
}