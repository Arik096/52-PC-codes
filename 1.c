#include<stdio.h>
int main()
{
          int t,i;
          long long int n;
          scanf("%d",&t);
          for(i=1;i<=t;i++)
          {
                    scanf("%lld",&n);
                    if(n%2==0)
                    {
                              printf("even\n");
                    }
                    else
                    {
                              printf("odd\n");
                    }
          }
return 0;
}


