#include<stdio.h>


int main() {
    int a;
    scanf("%o", &a);
    printf("Hexademical of a = %x\n", a);

    printf("Hexademical of a = %x\n", a);
    printf("Hexademical of a 4 bites left = %x\n", a << 4);

    printf("Hexademical of a = %x\n", a);
    printf("Hexademical of a denial = %x\n", ~a);
    int b;
    scanf("%x", &b);
    printf("Operation & between a and b = %x\n", b & a);

    return 0;
}
