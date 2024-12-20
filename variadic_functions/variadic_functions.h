#include <stdio.h>
#include <stdlib.h>


#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif 
