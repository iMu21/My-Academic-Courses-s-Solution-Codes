/*
Write a C program to simulate lexical analyzer for validating operators.
*/
#include<stdio.h>
int main(){

char operatorsName[29][30]={
      "Addition", "Subtraction", "Multiplication", "Division",
      "Modulus", "Incremental", "Decremental", "Is Equals to",
      "Is Not Equals to", "Greater Than", "Less Than",
      "Greater Than or Equals To", "Less Than or Equals To",
      "Logical And" , "Logical Or", "Logical Not",
      "Binary And", "Binary Or", "Binary XOR",
      "Binary One's Compliment", "Binary Left Shift",
      "Binary Right Shift", "Assignment", "Add & Assignment",
      "Subtract & Assignment", "Multiply & Assignment",
      "Division & Assignment", "Left Shift & Assignment",
      "Right Shift & Assignment"
      } ;

char operatorsSign[29][10]={
   "+","-","*","/",
   "%","++","--","==",
   "!=",">","<",
   ">=","<=",
   "&&","||","!",
   "&","|","^",
   "`","<<",
   ">>","=","+=",
   "-=","*=",
   "/=","<<=",
   ">>="
};

 char str[10];
 gets(str);
 int i;
 for(i=0;i<29;i++) {
      if(strcmp(str,operatorsSign[i])==0) {
         printf("%s\n",operatorsName[i]);
         return 0;
      }
   }

   printf("Not founded.\n");
   return 0;
}

