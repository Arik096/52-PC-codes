#include<stdio.h>
int main()
{
          int t,n;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    int count=0;
                    char s[1001];
                    scanf(" %[^\n]",s);
                    int i;
                    for(i=0;s[i]!='\0';i++)
                    {
                              if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
                              {
                                        count++;
                              }
                    }
                    printf("Number of vowels = %d\n",count);
          }
          return 0;
}
