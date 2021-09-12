#include "head.h"

int main() {

	//1、指针的定义
	int a = 10; //定义整型变量a

	//指针定义语法： 数据类型 * 变量名 ;
	int* p;

	//指针变量赋值
	p = &a; //指针指向变量a的地址
	cout << &a << endl; //打印数据a的地址
	cout << p << endl;  //打印指针变量p

	//2、指针的使用
	//通过*操作指针变量指向的内存
	cout << "*p = " << *p << endl;

	double b = 10.24;
	double* ptr_b = &b;
	//ptr_b = &b;
	cout << "b的值为：" << b << endl;
	cout << "b的地址为：" << &b << endl;
	cout << "ptr_b的值为：" << ptr_b << endl;
	cout << "ptr_b的地址为：" << &ptr_b << endl;
	cout << "ptr_b指向内存的值：" << *ptr_b << endl;


	system("pause");

	return 0;
}