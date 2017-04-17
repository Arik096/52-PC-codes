#include<stdio.h>
int main()
{
          int t,n;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    long int a,b,r=0;
                    scanf("%ld%ld",&a,&b);
                    if(a>b)
                    {
                              printf("Invalid!\n");
                    }
                    else
                    {
                    long int i;
                    for(i=a;i<=b;i=i+a)
                    {
                              printf("%d\n",i);
                    }
                    }
          }
          return 0;
}
