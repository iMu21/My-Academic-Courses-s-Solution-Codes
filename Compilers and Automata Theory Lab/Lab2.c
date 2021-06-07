/*
Write a C program to recognize strings under 'a', 'a*b+', 'abb'.
*/
#include<stdio.h>
int main()
{
    printf("Write down the line below:\n");
    char str[100];
    gets(str);
    int flag=0,i;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]!='a')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The string is accepted under the rule 'a*'\n");
        return 0;
    }

    flag=0;
    if(strcmp("abb",str)==0)
    {
        printf("The string is accepted under the rule 'abb'\n");
        return 0;
    }
    if(str[strlen(str)-1]=='b')
    {
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='a'&&flag==0)
            {
                continue;
            }
            else if(str[i]=='b'&&flag==0)
            {
                flag=1;
            }
            else if(str[i]=='b'&&flag==1)
            {
                continue;
            }
            else
            {
                printf("The string is not accepted under any rule.\n");
                return 0;
            }
        }
        printf("The string is accepted under the rule 'a*b+'.\n");
        return 0;
    }
    else
    {
        printf("The string is not accepted under any rule.\n");
        return 0;
    }

    return 0;
}
