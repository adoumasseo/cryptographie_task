#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *encode(unsigned int gap, char *_str, char *alphabet);
char *decode(unsigned int gap, char *_str, char *alphabet);
char *encode_alpha(unsigned int gap, char *alphabet);
char *encode_alpha_a(unsigned int gap, int a, char *alphabet);
int is_prime_number(int a);
char *affine(unsigned int gap, int a, char *_str, char *alphabet);
char *affine_decode(unsigned int gap, int a, char *_str, char *alphabet);
#endif
