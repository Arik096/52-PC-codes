#include <stdio.h>
int main()
{
          int n,t;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
    int n1,n2,i,g,l;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;++i)
    {
        if(n1%i==0&&n2%i==0)
            g=i;
    }
    l=(n1*n2)/g;
    printf("LCM = %d\n",l);
          }
    return 0;
}
