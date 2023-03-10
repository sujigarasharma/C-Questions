#include <stdio.h>
#include <string.h>
int main()
{
    printf("C String function-strlen\n");
     char str1[20] = "C Beginners";
     printf("Length of string str1: %d\n",strlen(str1));
    // String function-strcmp
     char s1[20] = " Awesome";
     char s2[20] = "Awesome";
     if (strcmp(s1, s2) ==0)
             printf("\nstring 1 and string 2 are equal\n");
     else
         printf("\nstring 1 and 2 are different\n");
     //String function-strcat
     char s3[10] = "Hello";
     char s4[10] = "Vit";
     strcat(s3,s4);
     printf("\nOutput string after concatenation: %s\n", s3);
  	 printf("String s4 is: %s\n", s4);
     //String function-strcpy
     char s5[10] = "Bavan";
     char s6[10] = "Sharma";
     strcpy(s5,s6);
     printf("\nString s5 is: %s\n", s5);
     printf("String s6 is: %s\n", s6);
}

