#include<stdio.h>
int main()
{
        int t,n;
        scanf("%d",&t);
        for(n=1;n<=t;n++)
        {
                  int a,b,c,temp1;
                  scanf("%d%d%d",&a,&b,&c);
              X:if(a>b)
                  {
                            temp1=a;
                            a=b;
                            b=temp1;
                  }
                  if(b>c)
                  {
                            temp1=b;
                            b=c;
                            c=temp1;
                  }

                  if(a>c)
                  {
                            temp1=c;
                            c=a;
                            a=temp1;
                  }
                  if(a<b&&b<c)
                  {
               printf("Case %d: %d %d %d\n",n,a,b,c);
        }
        else
        {
                  goto X;
        }
        }
          return 0;
}
