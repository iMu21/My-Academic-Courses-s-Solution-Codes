#include<stdio.h>
int main()
{
    printf("Write down the line below:\n");
    char str[100];
    gets(str);
    printf("\nThe string is ");

    int i,j,flag=0;
    for(i=0;i<sizeof(str);i++){
        if(str[i]=='a'){
            printf("under the rule 'a'");
            flag=1;
        for(j=i+1;j<sizeof(str);j++){
            if(str[j]=='b'&& str[j+1]>='a' && str[j+1]<='z'){
                printf(", 'a*b+'");
            }
        }
        break;
        }
    }
    for(i=0;i<sizeof(str)-2;i++){
        if(str[i]=='a'&&str[i+1]=='b'&&str[i+2]=='b'){
            printf(", 'abb'");
        }
    }

    if(flag==0){
        printf("not under any rule");
    }
    printf(".\n");

    return 0;
}
