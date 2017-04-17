#include<stdio.h>
#include<string.h>
int main()
{
          int t,n;
          char temp;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    char s[10001];
                    int i,j;
                    scanf(" %[^\n]",s);
                    i=0;
                    j=strlen(s)-1;
                    while(i<j)
                    {
                           temp=s[i];
                           s[i]=s[j];
                           s[j]=temp;
                           i++;
                           j--;
                    }
                    printf("%s\n",s);
          }
          return 0;
}
