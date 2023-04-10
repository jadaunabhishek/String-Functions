#include<stdio.h>
#include<string.h>
int main(){
    char str1[10]="Hello ";
    char str2[10]="World";
    char str3[10];
    int length;
    
    // copy the string
    strcpy(str3, str1);
    printf("strcpy(str3, str1) : %s\n",str3);
    
    // add strings
    strcat(str1, str2);
    printf("strcat(str1, str2) : %s\n",str1);
    
    // length of string
    length=strlen(str1);
    printf("strlen(str1) : %d\n",length);
    
    // compare the string
    int a=strcmp(str1, str2);
    printf("strcmp(str1, str2) : %d\n",a);
    
    return 0;
}
