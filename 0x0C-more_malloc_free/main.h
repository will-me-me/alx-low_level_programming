#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errorExit(void);
int multiplyNumbers(int num1, int num2);
int isNumber(const char *str);
int main(int argc, char *argv[]);

#endif
