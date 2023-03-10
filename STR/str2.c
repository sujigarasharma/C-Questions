#include <stdio.h>
int main()
{
  //Compare 2 Strings without built in function
   char str1[100], str2[100];
   int c;
   printf("\nEnter two strings :");
   scanf("%s",&str1);
   scanf("%s",&str2);
   //gets(str1);
   //gets(str2);
   c = 0;
   while (str1[c] == str2[c] && str1[c] != '\0')
      c++;
   if (str1[c] > str2[c])
      printf("str1 > str2\n");
   else if (str1[c] < str2[c])
      printf("str1 < str2\n");
   else
      printf("str1 = str2\n");
    //Calculate Length of String without Using strlen
    char s[1000];
    int j;
    printf("Enter a string: ");
    scanf("%s", s);
    for(j = 0; s[j] != '\0'; ++j);
    printf("Length of string: %d\n", j);
    printf("Copy String Manually Without Using strcpy()\n");
	char s1[100], s2[100], i;
    printf("Enter string s1: ");
    scanf("%s",s1);
    for(i = 0; s1[i] != '\0'; ++i)
	s2[i] = s1[i];
    s2[i] = '\0';
    printf("String s2: %s\n", s2);
    printf("Concatenate Two Strings Without Using strcat()\n");
    char s3[100], s4[100], k, l;
    printf("Enter first string: ");
    scanf("%s", s3);
    printf("Enter second string: ");
    scanf("%s", s4);
    for(k = 0; s3[k] != '\0'; ++k);
    for(l = 0; s4[l] != '\0'; ++l, ++k)
    {
        s3[k] = s4[l];
    }
    s3[k] = '\0';
    printf("After concatenation: %s\n", s3);
    getch();
}

