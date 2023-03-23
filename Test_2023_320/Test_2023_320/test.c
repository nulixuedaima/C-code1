#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/* 一、各种类型输出实例
int main()
{
	char ch = 'A';
	int age = 20;
	float y = 0.1;
	double x = 0.2;
	long num = 100;
	printf("%c %d %f %lf %ld\n", ch, age, y, x,num);
	printf("hehe\n");
	return 0;
}
  %p 以地址形式输出 /  %x 打印十六进制数字
*/
//-------------------------------------------------------------
/* 二、各种类型的大小
int main()
{
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	return 0;
}*/
//------------------------------------------------------------
/* 三、计算机中单位（小到大）
bit比特位
byte字节   //byte=8bit
kb         //kb=1024byte
mb         //mb=1024kb
gb         //gb=1024mb
tb         //tb=1024gb
pb         //pb=1024tb
*/
//------------------------------------------------------------
/* 四、变量
1.变量：数据类型+变量名
int main()
{
	short age = 20; //向内存申请 2个字节=16bit的空间，用来存放20
	float num = 96.5f;//向内存申请4个字节的空间，用来存放96.5
	return 0;
}
2.局部变量和全局变量
（1）
int a = 100;
int main()
{
	int a = 10;
	printf("%d\n", a);
	return 0;
}
输出：10
局部变量和全局变量的名字建议不要相同，容易误会，产生bug
局部变量和全局变量的名字相同时，局部变量优先（输出局部变量的值）

（2）
int main()
{
	{
		int a = 10;
	}
	printf("%d\n",a);
	return 0;
}
此时运行会报错，a在大括号内，是这个大括号内的局部变量。
printf在大括号外，无法输出a的值。
*********************************
int main()
{
	int a = 10;
	{
		printf("%d\n",a);
	}
}
此时可以正常输出。
3.计算两个数字的和
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d %d", &num1, &num2);//输入数据使用scanf，&是取地址符
	sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}
输出：10 20
      30
*/
//--------------------------------------------------------------
/* 五、变量作用域和生命周期
1.作用域（scope）：程序设计概念，通常来说，一段程序代码中所用到的名字并不总是有效/用的
                 而限定这个名字的可用性的代码范围就是它的作用域。
(1).局部变量的作用域是变量所在的局部范围
(2).全局变量的作用域是整个工程

int global = 2021;
void test()
{
	printf("test()=%d",global);
}
int main()
{
	test();
	printf("%d\n",global);
	return 0;
}
输出：test()=2021
      2021
*********************************
int main()
{
	//extern声明外部符号
	extern int global;
	printf("%d\n",global);
	return 0;
}
输出：2021

2.生命周期
(1).局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
(2).全局变量的生命周期是：整个程序的生命周期

int main()
{
	{  变量a的生命周期开始
		int a = 10;
		printf("%d\n",a);//这里可以输出a的值
	}  变量a的生命周期结束
	printf("%d\n",a); //这里不能输出a的值
	return 0;
}

-------全局变量的生命周期就相当于整个main函数的生命周期
*/
//-------------------------------------------------------
