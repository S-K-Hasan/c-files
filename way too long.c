#include<stdio.h>
int main()
 { int a,i=1;
 scanf("%d",&a);
 while (i<=a)
 {
    char s[100];
    int l;
    gets(s);
    l=strlen(s);

    if(l>10)
    {
        printf("%c%d%c\n",s[0],l-2,s[l-1]);
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            printf("%c",s[i]);
        }
    }
  i++;
 }
}
