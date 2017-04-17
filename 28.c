#include<stdio.h>
int main()
{
          int n,t;
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
                    int s=1;
                    for(i=1;i<g;i++)
                    {
                              if(a[i]<a[i-1])
                              {
                                        s=0;
                                        break;
                              }
                    }
                    if(s==1)
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
