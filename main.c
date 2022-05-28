#include "type.h"


int main() {


    print_sizeof_type("char", sizeof(char), true);
    print_sizeof_type("signed char",  sizeof(signed char), true);
    print_sizeof_type("unsigned char",  sizeof(unsigned char), false);
    print_sizeof_type("signed short int",  sizeof(signed short int), true);
    print_sizeof_type("unsigned short int",  sizeof(unsigned short int), false);
    print_sizeof_type("signed int",  sizeof(signed int), true);
    print_sizeof_type("unsigned int",  sizeof(unsigned int), false);
    print_sizeof_type("signed long int",  sizeof(signed long int), true);
    print_sizeof_type("unsigned long int",  sizeof(unsigned long int), false);
    print_sizeof_type("signed long long int",  sizeof(signed long long int), true);
    print_sizeof_type("unsigned long long int", sizeof(unsigned long long int) , false);
    print_sizeof_type("float", sizeof(float), true);
    print_sizeof_type("double", sizeof(double), true);
    print_sizeof_type("long double", sizeof(long double), true);

    return 0;
}
