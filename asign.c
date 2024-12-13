
#include <stdio.h>
#include <string.h>

char mirror(char c)
{
    if (c == 'A') {return 'A';}
    else if (c == 'E') {return '3';}
    else if (c == 'H') {return 'H';}
    else if (c == 'I') {return 'I';}
    else if (c == 'J') {return 'L';}
    else if (c == 'L') {return 'J';}
    else if (c == 'M') {return 'M';}
    else if (c == 'O') {return 'O';}
    else if (c == 'S') {return '2';}
    else if (c == 'T') {return 'T';}
    else if (c == 'U') {return 'U';}
    else if (c == 'V') {return 'V';}
    else if (c == 'W') {return 'W';}
    else if (c == 'X') {return 'X';}
    else if (c == 'Y') {return 'Y';}
    else if (c == 'Z') {return '5';}
    else if (c == '1') {return '1';}
    else if (c == '2') {return 'S';}
    else if (c == '3') {return 'E';}
    else if (c == '5') {return 'Z';}
    else if (c == '8') {return '8';}
    else {return '\0';}
}

int is_palindrome(char *s)
{
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int is_mirrored(char *s)
{
    int len = strlen(s);
    for (int i = 0; i < (len + 1) / 2; i++)
    {
        if (mirror(s[i]) != s[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[21];

    while (scanf("%s", s) != EOF)
    {
        int palindrome,mirrored;
          palindrome = is_palindrome(s);
          mirrored = is_mirrored(s);

        printf("%s", s);
        if (!palindrome && !mirrored)
        {
            printf(" -- is not a palindrome.\n\n");
        }
        else if (palindrome && !mirrored)
        {
            printf(" -- is a regular palindrome.\n\n");
        }
        else if (!palindrome && mirrored)
        {
            printf(" -- is a mirrored string.\n\n");
        }
        else
        {
            printf(" -- is a mirrored palindrome.\n\n");
        }
    }

    return 0;
}

