#include <stdio.h>

int main() {
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    unsigned char *p;

    p = (unsigned char*)&s;
    printf("Octets de short :\n");
    for(int j=0; j<sizeof(s); j++) printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&i;
    printf("Octets de int :\n");
    for(int j=0; j<sizeof(i); j++) printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&li;
    printf("Octets de long int :\n");
    for(int j=0; j<sizeof(li); j++) printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&f;
    printf("Octets de float :\n");
    for(int j=0; j<sizeof(f); j++) printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&d;
    printf("Octets de double :\n");
    for(int j=0; j<sizeof(d); j++) printf("%02x ", p[j]);
    printf("\n");

    p = (unsigned char*)&ld;
    printf("Octets de long double :\n");
    for(int j=0; j<sizeof(ld); j++) printf("%02x ", p[j]);
    printf("\n");

    return 0;
}
