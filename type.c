//
// Created by Alessandro Giaquinto on 28/05/22.
//

#include <printf.h>
#include "type.h"

void print_sizeof_type(char* name, unsigned long size_of, bool signed_type) {
    unsigned long long int result = 0;

    result = pow_type(bitsizeof(size_of), signed_type);

    printf("Grandezza del tipo %s: %lu bit, ovvero %lu bytes\n", name,  bitsizeof(size_of), size_of );

    if (signed_type) {
        printf("Range dei valori per %s: [-%llu, %llu]\n", name, result + 1, result);
    } else {
        printf("Range dei valori per %s: [%d, %llu]\n", name, 0, result);
    }

    printf("\n");

}

unsigned long long int pow_type(int value, bool signed_type) {
    unsigned long long int result = 2;

    if (signed_type)
        value -= 1;

    for (; value>1; value--) {
        result *= 2;
    }

    return result-1;
}

