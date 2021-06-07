#include<stdio.h>
int main()
{
    printf("Write down the line below:\n");
    char str[100];
    gets(str);
    printf("\nThe string is ");

    int i,j,flag=0;

    if(str[0]=='a')
    {
        printf("under the rule 'a'");
        flag=1;
        for(j=1; j<sizeof(str); j++)
        {
            if(str[j]=='b'&& str[j+1]>='a' && str[j+1]<='z')
            {
                printf(", 'a*b+'");
            }
        }
    }

   if(strcmp(str,"abb")==0){
    printf(", 'abb' ");
   }


    if(flag==0)
    {
        printf("not under any rule");
    }
    printf(".\n");

    return 0;
}
