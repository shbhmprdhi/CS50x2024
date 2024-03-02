#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    // get string
    char * s = get_string("s: ");

    // allocate memory
    char *t = malloc(strlen(s) + 1);

    // copy string to memory
    for (int i = 0; i <= strlen(s); i++)
    {
        t[i] = s[i];
    }

    // Capitalise copy
    t[0] = toupper(t[0]);

    // print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
