#include<stdio.h>
int main()
{
          int t,n;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    int i;
                    scanf("%d",&i);
                    int g=i;
                    int a[i];
                    for(i=0;i<g;i++)
                    {
                              scanf("%d",&a[i]);
                    }
                    for(i=0;i<g;i=i+2)
                    {
                              printf("%d ",a[i]);
                    }
                    printf("\n");
          }
          return 0;
}
