#include<stdio.h>
int main()
{
          int n,t;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    int a,b,c;
                    scanf("%d%d%d",&a,&b,&c);
                    int i;
                    for(i=a;i<=b;i++)
                    {
                              if(i%c==0)
                              {
                                        printf("%d\n",i);
                              }
                    }
          }
          return 0;
}
