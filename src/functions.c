#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void callme(char s[])
{
    printf("%s", s);
}

int main()
{
    // char *st = "aeragt";
    char sst[] = "aeragt";
    // callme(st);
    callme(sst);
    return 0;
}