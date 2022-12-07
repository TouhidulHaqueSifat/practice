#include<stdio.h>
#include<string.h>
char sss(char s[])
{int i;
    int len =strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            if(s[i]%2==0)
            {
                s[i]-=32;
            }
        }
    }
    puts(s);


}

int main()
{
    char s[50];
    fgets(s,sizeof(s),stdin);
    sss(s);
    return 0;

}
