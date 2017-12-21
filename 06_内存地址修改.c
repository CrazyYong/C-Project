#include<stdio.h>    
#include<stdlib.h>    
/**

*/
main(){    
      int exp=0;//保存经验
      printf("开始打怪升级\n");
      while(1){
               printf("砍一刀,没砍死!\n");
               sleep(2000);
               printf("再砍一刀,砍死了 获得经验!\n");
                sleep(2000);
               exp += 20;
               if(exp>2000){
                          printf("恭喜您升级啦!\n");
                          break;
                          } 
               else{
                    printf("当前经验值%d,继续砍怪\n",exp);
                     sleep(2000);
                    }
               } 
       system("pause"); 
       } 
