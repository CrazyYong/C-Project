#include<stdio.h>    
#include<stdlib.h>    
/**
ֵ���� �����ô���  ֵ���ݺ����ô��ݴ��ݵ�ʵ���� ������ֵ  ֻ�������ô��ݴ��ݵ��ǵ�ֵַ 
�����ͨ��һ���Ӻ������޸�main�����б�����ֵ һ��Ҫ�����ô��� 
*/
swap(int i, int j){
         int temp = i;
       i = j;
       j = temp;
         
         }
         
swap2(int* pointer, int* pointer2 ){
         int temp = *pointer;
         *pointer = *pointer2;
         *pointer2 = temp;   
           }
main(){    
       int i = 123;
       int j = 456;
      // swap(i,j);
       int temp = i;
       i = j;
       j = temp;
       //swap2(&i,&j);
       printf("i��ֵ%d,j��ֵ%d\n",i,j);
       system("pause"); 
       } 
