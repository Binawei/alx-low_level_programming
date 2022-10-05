#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * number - function that calculate the number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */
int number(char *str)
{
  int a, num = 0;

  for (a = 0; str[a] != '\0'; a++)
    {
      if (*str == ' ')
	str++;
      else
	{
	  for (; str[a] != ' ' && str[a] != '\0'; a++)
	    str++;
	  num++;
	}
    }
  return (num);
}
/**
 *free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_everything(char **string, int i)
{
  for (; i > 0;)
    free(string[--i]);
  free(string);
}

/**
 * strtow -  function that splits a string into words.
 * @str: string being passed
 *
 * Return: a pointer to an array of strings (words), NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
  char **word, *found_word;
  int total_words=0, i = 0, j = 0, len = 0;

  if (str == 0 || *str == 0)
    return (NULL);
  total_words = number(str);
  if (total_words == 0)
    return (NULL);

  word = malloc((total_words + 1) * sizeof(char *));
  if (word == 0)
    return (NULL);
  for (; *str != '\0' && i < total_words;)
    {
      if (*str == ' ')
	str++;
      else
	{
	  found_word = str;
	  for (; *str != ' ' && *str != '\0';)
	    {
	      len++;
	      str++;
	    }
	  word[i] = malloc((len + 1) * sizeof(char));
	  if (word[i] == 0)
	    {
	      free_everything(word, i);
	      return (NULL);
	    }
	  while (*found_word != ' ' && *found_word != '\0')
	    {
	      word[i][j] = *found_word;
	      found_word++;
	      j++;
	    }
	  word[i][j] = '\0';
	  i++; j = 0; len = 0; str++;
	}
    }
  return (word);
}

