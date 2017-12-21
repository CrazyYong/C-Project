#include<stdio.h>    
#include<stdlib.h>    
/**
scanf("占位符",内存地址) 
*/
main(){    
      printf("请输入班级的人数:");
      
      int count;
      scanf("%d", &count); //&取地址符 
      printf("班级的人数是%d\n",count);
      char cArray[20];//c的数组不检测下标越界 
      printf("请输入班级的名字:");
      scanf("%s",&cArray);
      printf("班级的人数是%d,班级的名字%s\n",count,cArray);
      printf("count的地址%d\n",&count);
      printf("cArray的地址%d\n",&cArray);
       system("pause"); 
       } 
