#include<stdio.h>    
#include<stdlib.h>    
/**
printf("要输出的内容", 变量); 
%d  -  int
%ld – long int
%lld - long long
%hd – 短整型
%c  - char
%f -  float
%lf – double
%u – 无符号数
%x – 十六进制输出 int 或者long int 或者short int
%o -  八进制输出
%s – 字符串
24910               1100001 01001110
12345678  10111100 01100001 01001110
占位符的使用注意不要乱用 
*/
main(){    
      char c='a';
      short s = 123;
      int i = 12345678;
      long l = 1234567890;
      float f = 3.1415;
      double d = 3.1415926;
      printf("c = %c\n", c);
      printf("s = %hd\n", s);
      printf("i = %hd\n",i);
      printf("l = %ld\n",l);
      printf("f = %.4f\n",f);  //默认输出的是6位有效数字的小数 想手动指定 加上.X 
      printf("d = %.7lf\n",d);
      printf("%#x\n",i); 
      printf("%#o\n",i); 
      char cArray[]={'a','b','c','d','\0'};
      char cArray[]="你好";
      printf("cArray = %s",cArray);
       system("pause"); 
       } 
