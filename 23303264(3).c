#include <stdio.h>

int main()
{
  char c;
  L:
  printf("Enter the character:");
  scanf(" %c",&c);
   if(c>='A' && c<='Z'||c>='a' && c<='z')
   {
       printf ("Alphabet\n");
   }
   else if(c>='0' && c<='9')
   {
       printf("Digit\n");
   }
   else
   {
      printf("Special Character\n");
   }
     goto L;
    getch();

}
