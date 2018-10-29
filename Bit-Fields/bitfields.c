///
/// bitfields.c
/// learn bit operations and bitfields
///

#include <stdio.h>

/// 1 byte = 2 nibbles = 8 bits
/// all data is made up of bits!

struct Bit_field {
    unsigned char bit : 1;
    unsigned char nibble: 4;
    unsigned char byte: 8;
};

int main() {

    /* ********Bit Operations********** */
    
    // | OR 0010110 | 0110100 = 0110110
    // & AND 100110 | 100000 = 100000
    // ^ XOR 0011011 ^ 101100 = 100011
    // ~ Compliment 10011 = 01100
    // x << 20 shifts x over 20 bits left
    // x >> 20 shifts x over 20 bits right
    //
    // if u shift 1 over 20 it now is 2^20 :D
    
    int x = 1;
    x = x << 20;
    printf("%i\n", x);
    struct Bit_field bit = {1, 12, 15};
    struct Bit_field bitter = {1023};
    printf("%i\n", bitter.bit);
}

