#include<stdio.h>
int main()
{
          int t,n;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    int q,p;
                    scanf("%d",&p);
                    q=sqrt(p);
                    if(q*q==p)
                    {
                              printf("YES\n");
                    }
                    else
                    {
                              printf("NO\n");
                    }
          }
          return 0;
}
