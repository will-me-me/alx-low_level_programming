C - Variadic functions

File Descriptions:

    sum_them_all.c:
        Description: This file contains a function that returns the sum of all its parameters.
        Function: int sum_them_all(const unsigned int n, ...)
        Parameters: n - number of parameters (varargs).
        Return: The sum of all the integer parameters.

    print_strings.c:
        Description: This file contains a function that prints strings, followed by a new line.
        Function: void print_strings(const char *separator, const unsigned int n, ...)
        Parameters:
            separator - string to be printed between strings.
            n - number of strings passed to the function (varargs).

    print_numbers.c:
        Description: This file contains a function that prints numbers, followed by a new line.
        Function: void print_numbers(const char *separator, const unsigned int n, ...)
        Parameters:
            separator - string to be printed between numbers.
            n - number of integers passed to the function (varargs).

    print_all.c:
        Description: This file contains a function that prints anything based on a given format string.
        Function: void print_all(const char * const format, ...)
        Parameters:
            format - list of types of arguments passed to the function (varargs).

    variadic_functions.h:
        Description: This header file contains function prototypes and necessary includes for the variadic functions.
        Functions:
            int sum_them_all(const unsigned int n, ...)
            void print_numbers(const char *separator, const unsigned int n, ...)
            void print_strings(const char *separator, const unsigned int n, ...)
            void print_all(const char * const format, ...)


