#include<stdio.h>    
#include<stdlib.h>    
/**

*/
main(){    
      int exp=0;//���澭��
      printf("��ʼ�������\n");
      while(1){
               printf("��һ��,û����!\n");
               sleep(2000);
               printf("�ٿ�һ��,������ ��þ���!\n");
                sleep(2000);
               exp += 20;
               if(exp>2000){
                          printf("��ϲ��������!\n");
                          break;
                          } 
               else{
                    printf("��ǰ����ֵ%d,��������\n",exp);
                     sleep(2000);
                    }
               } 
       system("pause"); 
       } 
