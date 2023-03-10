#include <stdio.h>
#include <string.h>
int main()
{
       printf("C String function-strlen\n");
     char str1[20] = "C Beginners";
     printf("Length of string str1: %d\n",          strlen(str1));
     printf("C String function-strcmp\n");
     char s1[20] = " C Beginners";
     char s2[20] = "Awesome";
     if (strcmp(s1, s2) ==0)
             printf("string 1 and string 2 are equal\n");
     else
         printf("string 1 and 2 are different\n");
     printf("C String function-strcat\n"); 
     char s3[10] = "Hello";
     char s4[10] = "vit";
     strcat(s3,s4);
     printf("Output string after concatenation: %s\n", s3);
     printf("C String function-strcpy\n");
     char s5[] = "string 5";
     char s6[] = "string 6: copied into s6";
     strcpy(s5,s6);
     printf("String s5 is: %s\n", s5);
}

