#include<stdio.h>
int main()
{
          int n,t;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    int a,b,c;
                    scanf("%d%d%d",&a,&b,&c);
                    a=a*b;
                    int i;
                    for(i=1;i<=c;i++)
                    {
                              if(i%a==0)
                              {
                                        printf("%d\n",i);
                              }
                    }
          }
          return 0;
}
