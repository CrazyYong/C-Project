#android下JNI开发
##what 什么是JNI
* JNI java native interface native本地  java本地接口
* 通过JNI可以实现java和本地代码之间相互调用
* jni可以看做是翻译 实际上就是一套协议
## why 为什么要用JNI
* Java 一处编译到处运行 
	* ①java运行在虚拟机上 JNI可以扩展java虚拟机的能力 让java代码可以调用驱动
	* ②java是解释型语言 运行效率相对较低 C/C++的效率要高很多 通过jni把耗时操作方法C/C++可以提高java运行效率
	* ③ java代码编译成的.class 文件安全性较差, 可以通过jni 把重要的业务逻辑放到c/c++去实现,c/c++反编译比较困难 安全性较高
* C历史悠久 1972年C 通过JNI可以调用优秀的C开源类库 

##How 怎么用JNI
* java
* c/c++ 能看懂 会调用
* JNI开发流程 NDK native develop kit  

##C基本语法

### CHelloWorld
	#include<stdio.h>    // 相当于 java的import .h c的头文件 stdio.h standard io 标准输入输出 
	#include<stdlib.h>   // stdlib standard library 标准函数库    java.lang 
	/**
	*/
	main(){    // public static void main(String[] args)
	       printf("helloworld!\n");  //System.out.println();   "\n"换行符 
	       system("javac Hello.java");
	       system("java Hello");
	       system("notepad");
	       system("pause"); //system执行windows的系统命令 
	       } 

### C的基本数据类型 
* java基本数据类型
boolean  1   
byte     1
char     2         char    1个字节
short    2         short   2 
int      4         int     4
long     8         long    4
float    4        float    4
double   8        double   8

char, int, float, double, long, short, signed, unsigned, void
* signed 有符号数 最高位是符号位 可以表示负数 但是表示的最大值相对要小 
* unsigned 无符号数 最高位是数值位 不可以表示负数  表示的最大值相对要大
* signed unsigned 只能用来修饰整形变量 char short int long
* C没有 boolean  byte C用0和非0表示false true
### C的输出函数
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
	
* 占位符不要乱用 要选择正确的对应类型 否则可能会损失精度
* C字符串
	* C没有String类型 C的字符串实际就是字符数组
	* C数组定义 [ ]只能再变量名之后
	* C字符串两种定义方式
	
			char str[] = {'h','e','l','l','o','\0'};//注意'\0'字符串结束符
			char str[] = "你好"; //这种定义方式不用写结束符 可以表示汉字

### C的输入函数
* scanf("占位符", &地址);
* & 取地址符
* C字符串不检查下标越界 使用时要注意
### 内存地址的概念
* 声明一个变量,就会立即为这个变量申请内存,一定会有一个对应的内存地址
* 没有地址的内存是无法使用的
* 内存的每一个字节都有一个对应的地址
* 内存地址用一个16进制数来表示
* 32位操作系统最大可以支持4G内存
	* 32位系统的地址总线为32位,也就是说系统有2^32个数字可以分配给内存作为地址使用
### 指针入门    ******
	 int i = 123;
	       //一般计算机中用16进制数来表示一个内存地址 
	       printf("%#x\n",&i); 
	       //int* int类型的指针变量  pointer指针  指针变量只能用来保存内存地址
	       //用取地址符&i 把变量i的地址取出来 用指针变量pointer 保存了起来
	       //此时我们可以说 指针pointer指向了 i的地址 
	       int* pointer = &i;   
	       printf("pointer的值 = %#x\n",pointer);
	       printf("*pointer的值%d\n",*pointer);
	       *pointer = 456;
	       printf("i的值是%d\n",i);
	       system("pause"); 
* 指针常见错误
	* 声明了指针变量后 未初始化直接通过*p 进行赋值操作 运行时会报错
		* * 未赋值的指针称为野指针
	* 指针类型错误 如int* p 指向了double类型的地址, 通过指针进行读取操作时,读取值会出错

### 指针的练习
* 值传递和引用传递(交换两个数的值)
	* 引用传递本质是把地址传递过去
	* 所有传递其实本质都是值传递，引用传递其实也是传递一个值，但是这个值是一个内存地址
	
			void swap(int* p, int* p2){
				int temp = *p;
				*p = *p2;
				*p2 = temp;	
			}
			main(){
				int i = 123;
				int j = 456;
				//将i, j的地址传递过去
				swap(&i,&j);
				printf("i = %d, j = %d", i, j);
			}
* 返回多个值
	* 把地址作为参数传入函数中，当函数执行完毕时，参数的值就已经被修改了
### 多级指针
* int* p; int 类型的一级指针 int** p2; int 类型的二级指针 
* 二级指针变量只能保存一级指针变量的地址
* 有几个* 就是几级指针 int*** 三级指针
* 通过int类型三级指针 操作int类型变量的值 ***p

			int i = 123;
			//int类型一级指针 
			int* p = &i;
			//int 类型 二级指针 二级指针只能保存一级指针的地址 
			int** p2 = &p;
			//int 类型 三级指针  三级指针只能保存二级指针的地址 
			int*** p3 = &p2;
			//通过p3 取出 i的值
			printf("***p3 = %d\n", ***p3);
		
* 多级指针案例 取出子函数中临时变量的地址
### 数组和指针的关系
* 数组占用的内存空间是连续的
* 数组变量保存的是第0个元素地址，也就是首地址
* *(p + 1):指针位移一个单位，一个单位是多少个字节，取决于指针的类型
###指针的长度
* 不管变量的类型是什么，它的内存地址的长度一定是相同的
* 类型不同只决定变量占用的内存空间不同
* 32位环境下，内存地址长度都是4个字节，所以指针变量长度只需4个字节即可
* 区分指针类型是为了指针位移运算方便
##堆栈概念 静态内存分配 动态内存分配
* 栈内存
	* 系统自动分配
	* 系统自动销毁
	* 连续的内存区域
	* 向低地址扩展
	* 大小固定
	* 栈上分配的内存称为静态内存 
* 静态内存分配
 * 子函数执行完，子函数中的所有局部变量都会被销毁，内存释放，但内存地址不可能被销毁，只是地址上的值没了
* 堆内存
	* 程序员手动分配
		* java：new
		* c：malloc
	* 空间不连续
	* 大小取决于系统的虚拟内存
	* C：程序员手动回收free
	* java：自动回收
	* 堆上分配的内存称为动态内存
### 结构体
* 结构体中的属性长度会被自动补齐，这是为了方便指针位移运算
* 结构体中不能定义函数，可以定义函数指针 
* 程序运行时，函数也是保存在内存中的，也有一个地址
* 结构体中只能定义变量
* 函数指针其实也是变量，它是指针变量
* 函数指针的定义 返回值类型(*变量名)(接收的参数);
* 函数指针的赋值: 函数指针只能指向跟它返回值和接收的参数相同的函数
### 联合体
* 长度等于联合体中定义的变量当中最长的那个
* 联合体只能保存一个变量的值
* 联合体共用同一块内存