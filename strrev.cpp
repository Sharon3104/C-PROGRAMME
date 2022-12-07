#include<stdio.h>  
#include <string.h>    
int main()
{    
  char str[]="sharon";    
 printf("Enter string: ");    
  gets(str);//reads string from console    
 // printf("String is: %s",str);    
  printf("%s",strrev(str));    
 return 0;    
} 