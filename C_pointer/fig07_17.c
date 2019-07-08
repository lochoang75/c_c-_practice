// Fig. 7.17: fig07_17.c
// Using operator sizeof to determine standard data type sizes.
#include <stdio.h>

int main(void)
{
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int array[ 20 ]; // create array of 20 int elements
    int *ptr = array; // create an pointer to array

    printf( " sizeof c = %u\t sizeof(char) = %u"
            "\n sizeof s = %u\t sizeof(short) = %u"
            "\n sizeof i = %u\t sizeof(int) = %u"
            "\n sizeof l = %u\t sizeof(long) = %u"
            "\n sizeof ll = %u\t sizeof(long long) = %u"
            "\n sizeof f = %u\t sizeof(float) = %u"
            "\n sizeof d = %u\t sizeof(double) = %u"
            "\n sizeof ld = %u\t sizeof(long double) = %u"
            "\n sizeof array = %u"
            "\n sizeof ptr = %u\n", 
            sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i,
            sizeof(int), sizeof l, sizeof(long), sizeof ll, sizeof(long long),
            sizeof f, sizeof(float), sizeof d, sizeof(double), sizeof ld, sizeof(long double),
            sizeof array, sizeof ptr);
}
