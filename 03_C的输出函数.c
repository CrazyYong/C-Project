#include<stdio.h>    
#include<stdlib.h>    
/**
printf("Ҫ���������", ����); 
%d  -  int
%ld �C long int
%lld - long long
%hd �C ������
%c  - char
%f -  float
%lf �C double
%u �C �޷�����
%x �C ʮ��������� int ����long int ����short int
%o -  �˽������
%s �C �ַ���
24910               1100001 01001110
12345678  10111100 01100001 01001110
ռλ����ʹ��ע�ⲻҪ���� 
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
      printf("f = %.4f\n",f);  //Ĭ���������6λ��Ч���ֵ�С�� ���ֶ�ָ�� ����.X 
      printf("d = %.7lf\n",d);
      printf("%#x\n",i); 
      printf("%#o\n",i); 
      char cArray[]={'a','b','c','d','\0'};
      char cArray[]="���";
      printf("cArray = %s",cArray);
       system("pause"); 
       } 
