#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts the number of words in a string
 * @str: string to count words from
 *
 * Return: number of words
 */
static int count_words(char *str)
{
    int count = 0;
    int i;
    int len = strlen(str);

    if (len > 0 && str[0] != ' ')
        count++;

    for (i = 0; i < len - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    }

    return (count);
}

/**
 * allocate_words - allocates memory for words in an array of strings
 * @str: string to split into words
 * @word_count: number of words
 *
 * Return: pointer to an array of strings
 */
static char **allocate_words(char *str, int word_count)
{
    char **words;
    int i, j, k;
    int len;

    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    k = 0;
    for (i = 0; i < word_count; i++)
    {
        while (str[k] == ' ')
            k++;
        j = k;
        while (str[j] != ' ' && str[j] != '\0')
            j++;
        len = j - k;

        words[i] = malloc(sizeof(char) * (len + 1));
        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return (NULL);
        }

        strncpy(words[i], str + k, len);
        words[i][len] = '\0';
        k = j + 1;
    }

    words[word_count] = NULL;
    return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
    char **words;
    int word_count;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    words = allocate_words(str, word_count);

    return (words);
}

