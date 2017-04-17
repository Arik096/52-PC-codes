#include<stdio.h>
int main()
{
          int n,t=0;
          for(n=1000;n>t;n--)
          {
                  if(n==1000)
                  {
                            printf("%d",n);
                  }
                   else if(n%5==0)
                    {
                              printf("\n%d",n);
                    }
                    else
                    {
                              printf("\t%d",n);
                    }
          }
          return 0;
}
