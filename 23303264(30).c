
#include <stdio.h>

int main()
{
    char s[] = "stop in the name of law,please stop :3";
    int a = 0, d = 0, b = 0, sp = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
         {
            a++;
         }
       else if (s[i] >= '0' && s[i] <= '9')
        {
            d++;
        }
       else if (s[i] == ' ')
        {
             b++;
        }
       else
        {
            sp++;
        }
    }

    printf("Number of alphabets: %d\n", a);
    printf("Number of numeric characters: %d\n", d);
    printf("Number of white spaces: %d\n", b);
    printf("Number of special characters: %d\n", sp);
    getch();
    return 0;
}
