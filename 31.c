#include<stdio.h>
int main()
{
          int a,b;
          scanf("%d",&a);
          for(b=1;b<=a;b++)
          {
int f,n,s;
scanf("%d",&f);
for(n=1;n<=f;n++)
{
int i=1;
s=0;
while(i<n)
{
if(n%i==0)
s=s+i;
i++;
}
if(s==n)
printf("%d\n",n);
}
          }
return 0;
}

