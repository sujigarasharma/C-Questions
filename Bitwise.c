#include <stdio.h>
 
int main()
{
   int a = 10,b = 20,AND_opr,OR_opr,XOR_opr,NOT_opr ;
   AND_opr = (a & b);
   OR_opr = (a | b);
   NOT_opr = (~ a);
   XOR_opr = (a ^ b);
   printf("AND_opr value = %d\n",AND_opr );
   printf("OR_opr value = %d\n",OR_opr );
   printf("NOT_opr value = %d\n",NOT_opr );
   printf("XOR_opr value = %d\n",XOR_opr );
   printf("left_shift value = %d\n", a << 1);
   printf("right_shift value = %d\n", a >> 1);
}
