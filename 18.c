#include<stdio.h>
int main()
{
          int n,t;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    char s[10001];
                    scanf(" %[^\n]",s);
                    int i;
                    for(i=0;s[i]!='\0';i++)
                    {
                               if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
                               {
                                         printf("%c",s[i]);
                               }
                    }
                    printf("\n");
                    for(i=0;s[i]!='\0';i++)
                    {
                        if(s[i]!='A'&&s[i]!='a'&&s[i]!='E'&&s[i]!='e'&&s[i]!='I'&&s[i]!='i'&&s[i]!='O'&&s[i]!='o'&&s[i]!='U'&&s[i]!='u'&&s[i]!=' ')
                        {
                                  printf("%c",s[i]);
                        }
                    }
                    printf("\n");
          }
          return 0;
}
