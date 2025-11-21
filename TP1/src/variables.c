#include <stdio.h>

int main() {

    // Variables de type char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // Variables de type short
    short s = 1000;
    signed short ss = -1000;
    unsigned short us = 50000;

    // Variables de type int
    int i = 12345;
    signed int si = -12345;
    unsigned int ui = 40000;

    // Variables de type long int
    long int li = 123456789L;
    signed long int sli = -123456789L;
    unsigned long int uli = 4000000000UL;

    // Variables de type long long int
    long long int lli = 123456789012345LL;
    signed long long int slli = -123456789012345LL;
    unsigned long long int ulli = 123456789012345ULL;

    // Variables à virgule flottante
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238L;

    // Affichage
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
