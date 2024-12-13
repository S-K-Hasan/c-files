#include <stdio.h>

int main()
{
    char s1[] = "Mey hu john,the don";
    char s2[] = "john ko pakadhna na munkin hain";
    int i, f = 0;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
        {
        if (s1[i] != s2[i])
          {
            f = 1;
            break;
          }
     }

    if (f == 0 )
        {
        printf("The strings are equal.\n");
        }
    else
        {
        printf("The strings are not equal.\n");
        }
 getch();
    return 0;
}
