#include<stdio.h>    
#include<stdlib.h>    
/**
������ռ�ֽ���ȡ���� ���г�Ա ռ�ڴ�ռ�������һ�� 
*/
union u{
      int num; //4
      double d; //8
      }
main(){    
   union u u1;
   u1.num = 123;
   u1.d = 123.456;
   printf("unionռ%d���ֽ�\n",sizeof(u1));
   printf("u1.num = %d\n",u1.num);
       system("pause"); 
       } 
