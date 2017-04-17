#include<stdio.h>
int main()
{
          char s[10000];
          int t,n;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    scanf(" %[^\n]",s);
                    int i,count=0;
                    for(i=0;s[i]!='\0';i++)
                    {
                          if(s[i]==' ')
                          {
                              count++;
                          }
                          else
                          {
                                    continue;
                          }
                    }
                    count=count+1;
                    printf("count = %d\n",count);
          }
          return 0;
}
