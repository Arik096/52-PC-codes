#include<stdio.h>
int main()
{
          int n,t;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    char s[1001];
                    scanf("%s",s);
                    int i;
                    for(i=0;s[i]!='\0';i++)
                    {
                              if(s[i]>='A'&&s[i]<='Z')
                              {
                                        printf("%d",s[i]-64);
                              }
                    }
                    printf("\n");
          }
          return 0;
}
