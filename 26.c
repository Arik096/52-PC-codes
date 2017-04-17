#include<stdio.h>
int main()
{
          int t,n;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    int count=0;
                    double f;
                    scanf("%lf",&f);
                    while(f>1)
                    {
                              f=f/2;
                              count++;
                    }
                    printf("%d days\n",count);
          }
          return 0;
}
