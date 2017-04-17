#include<stdio.h>
int main()
{
          int t,n;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    long long int s=1;
                    int x,k,i;
                    scanf("%d%d",&x,&k);
                    for(i=1;i<=k;i++)
                    {
                             s=s+pow(x,i);
                    }
                    printf("Result = %lld\n",s);
          }
          return 0;
}
