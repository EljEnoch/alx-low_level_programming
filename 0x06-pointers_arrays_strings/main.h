#ifndef MAIN_H
#define MAIN_N
#include <stdio.h>

/**
 * void prototypes()
 * int prototypes()
 * char prototypes()
 */

void print_number(int n);
void print_buffer(char *b, int size);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *add_string(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif /*MAIN_H*/
