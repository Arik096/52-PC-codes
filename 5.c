#include<stdio.h>
int main()
{
       int t,i,c,r;
       long int n;
       scanf("%d",&t);
       for(i=1;i<=t;i++)
       {
              scanf("%ld",&n);
              for(r=1;r<=n;++r)
              {
                        for(c=1;c<=n;++c)
                        {
                                  printf("*");
                        }
                        printf("\n");
              }
       }
       return 0;
}
