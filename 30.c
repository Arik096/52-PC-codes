#include<stdio.h>
int main()
{
          int a,b;
          scanf("%d",&a);
          for(b=1;b<=a;b++)
          {
  long long int n,i,s=0;
  scanf("%lld",&n);
  for(i=1;i<n;i++)
          {
      if(n%i==0)
           s=s+i;
          }
  if(s==n)
      printf("YES, %lld is a perfect number!\n",i);
  else
      printf("NO, %lld is not a perfect number!\n",i);
          }
  return 0;
}
