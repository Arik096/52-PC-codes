#include<stdio.h>
#include<stdlib.h>
int main()
{
          int n,t;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    char l[1000000];
                    char *p,*e;
                    long long int i;
                    int count=0;
                    scanf(" %[^\n]",l);
                    p=l;
                    for(p=l; ;p=e)
                    {
                              i=strtol(p,&e,10);
                              if(p==e)
                              {
                                        break;
                              }
                              count++;
                    }
                    printf("%d\n",count);
          }
          return 0;
}
