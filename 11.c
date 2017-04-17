#include<stdio.h>
int main()
{
          int t,n;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    int a;
                    long long int f=1,l;
                    scanf("%d",&a);
                    for(l=2;l<=a;l++)
                    {
                              f=f*l;
                    }
                    printf("%lld\n",f);
          }
          return 0;
}
