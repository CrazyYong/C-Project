#include<stdio.h>    
#include<stdlib.h>    
/**
联合体占字节数取决于 其中成员 占内存空间最大的那一个 
*/
union u{
      int num; //4
      double d; //8
      }
main(){    
   union u u1;
   u1.num = 123;
   u1.d = 123.456;
   printf("union占%d个字节\n",sizeof(u1));
   printf("u1.num = %d\n",u1.num);
       system("pause"); 
       } 
