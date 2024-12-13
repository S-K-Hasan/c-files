#include &lt;stdio.h&gt;
int main() {
// Prime Number
int i,n,n1=0;
printf(&quot;Enter a number: &quot;);
scanf(&quot;%d&quot;,&amp;n);
for(i=2;i&lt;n/2;i++)
{
if(n%i==0)
{ n1 = 1;
break;
}
}
if(n1==0)
{
printf(&quot;Prime Number&quot;);
}
else
{
printf(&quot;Not Prime Number&quot;);
}
return 0;
}
