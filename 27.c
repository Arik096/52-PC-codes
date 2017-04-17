#include <stdio.h>
int main()
{
          int t,y;
          scanf("%d",&t);
          for(y=1;y<=t;y++)
          {
                    int n,o,r,c=0;
    scanf("%d",&n);
    o=n;
    while(o!=0)
    {
        r=o%10;
        c=c+(r*r*r);
        o=o/10;
    }
    if(c==n)
        printf("%d is an Armstrong number!\n",n);
    else
        printf("%d is not an Armstrong number!\n",n);
          }
    return 0;
}
