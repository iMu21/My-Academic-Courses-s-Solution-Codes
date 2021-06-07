#include<stdio.h>
int main(){

char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   printf("Write down the word below:\n");
   char str[100];
   gets(str);
   int flag=0,i;
   for(i = 0; i < 32; i++) {
      if(strcmp(str,keyword[i])==0) {
         flag=1;
      }
   }
  if(flag==1){
    printf("This is not an identifier.\n");
    return 0;
  }

  if((str[0]<='z'&&str[0]>='a')||(str[0]<='Z'&&str[0]>='A')){
    for(i=1;i<strlen(str);i++){
        if(str[i]==','||str[i]==' '){
            printf("This is not an identifier.\n");
            return 0;
        }
    }
  }
  else{
    printf("This is not an identifier.\n");
    return 0;
  }

  printf("This is an identifier.\n");
  return 0;
}
