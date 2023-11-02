#include "main.h"

/**
 * strtow - function that splits a string into two words
 * @str: string to split
 * Return: pointer to an array of words
 */

char **strtow(char *str)
{
    if (str == NULL || *str == '\0') {
        return (NULL);
    }

    int word_count = 0;
    int in_word = 0;
    int word_length = 0;

    // Count the number of words and their lengths
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && !in_word) {
            in_word = 1;
            word_count++;
        }
        if (str[i] == ' ' && in_word) {
            in_word = 0;
        }
        if (in_word) {
            word_length++;
        }
    }

    char **words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL) {
        return (NULL);
    }

    int word_index = 0;
    in_word = 0;
    word_length = 0;

    // Allocate memory for each word and copy them
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && !in_word) {
            in_word = 1;
            word_length = 0;
            words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
            if (words[word_index] == NULL) {
                for (int j = 0; j < word_index; j++) {
                    free(words[j]);
                }
                free(words);
                return (NULL);
            }
        }
        if (str[i] == ' ' && in_word) {
            in_word = 0;
            word_length = 0;
            word_index++;
        }
        if (in_word) {
            words[word_index][word_length] = str[i];
            word_length++;
            words[word_index][word_length] = '\0';
        }
    }

    words[word_count] = NULL;
    return (words);
}
