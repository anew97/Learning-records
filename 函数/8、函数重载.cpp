#include"1.h"


//函数重载
//可以让函数名相同，提高复用性
//函数重载的满足条件
//1、同一作用域下
//2、函数名称相同
//3、函数参数类型不同 或者 个数不同 或者 顺序不同

void func() 
{
	cout << "func的调用"<<endl;
}

void func(int a) 
{
	cout << "func(int a)的调用!" << endl;
}

void func(double a)
{
	cout << "func(double a)的调用!" << endl;
}

void func(int a,double b)
{
	cout << "func(int a,double b)的调用" << endl;
}

void func(double a, int b)
{
	cout << "func(double a,int b)的调用" << endl;
}
//注意：函数的返回值不能作为函数重载的条件


int main() {

	cout << "func()\t" ;
	func();
	cout << "func(10)\t" ;
	func(10);
	cout << "func(3.14)\t" ;
	func(3.14);
	cout << "func(10, 3.14)\t";
	func(10, 3.14);
	cout << "func(3.14, 10)\t";
	func(3.14, 10);

	system("pause");
	return 0;
}