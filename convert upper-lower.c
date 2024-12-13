#include<stdio.h>
int main()
{
    char ch ;
    printf("enter an alphabet:\n");
    scanf("%c",&ch);
   if(ch>= 'A'&& ch<='Z' ){
      printf("upper case\n");
       ch=ch+32;
           printf("the lower case is :%c",ch);
       }
       else if (ch>= 'a'&& ch<='z' ){
              printf("lower case\n");
                     ch=ch-32;
                           printf("the upper case is :%c",ch);
        }

                else {
                    printf ("invalid alphabet");
                }


}
