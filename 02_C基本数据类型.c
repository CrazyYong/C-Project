#include<stdio.h>    
#include<stdlib.h>    
/**
char, int, float, double, long, short, signed, unsigned, void
signed unsigned 有符号 无符号  只能用来修饰整形变量  char int short long 默认有符号 
sizeof(int)
*/
main(){    
   printf("char占%d个字节\n", sizeof(char));
   printf("int占%d个字节\n", sizeof(int));
   printf("short占%d个字节\n", sizeof(short));
   printf("float占%d个字节\n", sizeof(float));
   printf("long占%d个字节\n", sizeof(long));
   printf("double占%d个字节\n", sizeof(double));
   unsigned char c = 128;
   printf("c = %d\n",c);
   
       system("pause"); 
       } 
