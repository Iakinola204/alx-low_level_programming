#include "main.h"
/**
 * strtow - main
 * @str: main
 * Return: main
 */
char **strtow(char *str)
{
char **ptr;
int i, k, len, start, end, j = 0;
int words =  countWords(str);
if (!str || !countWords(str))
return (NULL);
ptr = malloc(sizeof(char *) * (words + 1));
if (!ptr)
return (NULL);
for (i = 0; i < words; i++)
{
start = startIndex(str, j);
end = endIndex(str, start);
len = end - start;
ptr[i] = malloc(sizeof(char) * (len + 1));
if (!ptr[i])
{
i -= 1;
while (i >= 0)
{
free(ptr[i]);
i--;
}
free(ptr);
return (NULL);
}
for (k = 0; k < len; k++)
ptr[i][k] = str[start++];
ptr[i][k++] = '\0';
j = end + 1;
}
ptr[i] = NULL;
return (ptr);
}
/**
 * isSpace - main
 * @c: main
 * Return: main
 */
int isSpace(char c)
{
return (c == ' ');
}
/**
 * startIndex - main
 * @s: main
 * @index: main
 * Return: main
 */
int startIndex(char *s, int index)
{
while (isSpace(*(s + index)))
index++;
return (index);
}
/**
 * endIndex - main
 * @s: main
 * @index: main
 * Return: main
 */
int endIndex(char *s, int index)
{
while (!isSpace(*(s + index)))
index++;
return (index);
}
/**
 * countWords - main
 * @s: main
 * Return: main
 */
int countWords(char *s)
{
int wordOn = 0;
int words = 0;
while (*s)
{
if (isSpace(*s) && wordOn)
wordOn = 0;
else if (!isSpace(*s) && !wordOn)
{
wordOn = 1;
words++;
}
s++;
}
return (words);
}
