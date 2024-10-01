#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *left(char *s, int len)
{
	char *st = (char *)malloc(len + 1);
	memmove(st, s, len);
	st[len] = '\0';
	return st;
}

char *right(char *s, int len)
{
	char *st = (char *)malloc(len + 1);
	memmove(st, (s + strlen(s) - len), len);
	st[len] = '\0';
	return st;
}

char *mid(char *s, int offset, int len)
{
	char *st = (char *)malloc(len + 1);
	memmove(st, s + offset, len);
	st[len] = '\0';
	return st;
}

int main()
{
	char string[] = "Once upon a time, there was a string";

	printf("Original string: %s\n", string);
	printf("Left %d characters: %s\n", 16, left(string, 16));
	right(string, 8);
	printf("Right %d characters: %s\n", 18, right(string, 18));
	printf("Middle %d characters: %s\n", 11, mid(string, 13, 11));
	return (0);
}
