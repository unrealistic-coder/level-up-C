#include <stdio.h>
#include <string.h>

int main()
{
    char *str[] = {"Frogs", "Do", "Not", "Die", "They", "Croak!"};
    printf("%s, %d", *(str + 1), strlen(str[0]));
    int a = NULL;
    if (a == NULL)
        perror("inside error");

    return 0;
}