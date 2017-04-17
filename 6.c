#include<stdio.h>
int main()
{
          int t,n;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    int a,b,c;
                    scanf("%d",&a);
                    if(a<=9&&a>=0)
                    {
                              printf("Sum = %d\n",a);
                    }
                    else
                    {
                    b=a%10;
                    c=a/10;
                    int d;
                    while(c!=0)
                    {
                              d=c%10;
                              c=c/10;

                    }
                    int e;
                    e=b+d;
                    printf("Sum = %d\n",e);
                    }
          }
          return 0;
}
