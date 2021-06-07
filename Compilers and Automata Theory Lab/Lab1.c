/*
Write a C program to identify whether a given line is a comment or not.
*/
#include<stdio.h>
int main()
{
    printf("Write down the line below:\n");
    char str[100];
    gets(str);
    if(str[0]=='/'&& str[1]=='/'){
        printf("This line is a comment\n");
        return 0;
    }
   int i;
   if(str[0]=='/'&& str[1]=='*'){
        for(i=2;i<99;i++){
            if(str[i]=='*' && str[i+1]=='/'){
                printf("This line is a comment\n");
        return 0;
            }
        }
    }

    printf("This line is not a comment\n");
    return 0;

}
