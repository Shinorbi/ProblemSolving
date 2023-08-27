#include<stdio.h>
int main()
{int i,k,n,w,s=0;
scanf("%d %d %d",&k,&n,&w);
for (i=1;i<=w;i++)
{s+=i*k;}
if(s>n)
{s=s-n;
printf ("%d\n",s);}
else printf ("0");
return 0;}