#include"1.h"


//��������
//�����ú�������ͬ����߸�����
//�������ص���������
//1��ͬһ��������
//2������������ͬ
//3�������������Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ

void func() 
{
	cout << "func�ĵ���"<<endl;
}

void func(int a) 
{
	cout << "func(int a)�ĵ���!" << endl;
}

void func(double a)
{
	cout << "func(double a)�ĵ���!" << endl;
}

void func(int a,double b)
{
	cout << "func(int a,double b)�ĵ���" << endl;
}

void func(double a, int b)
{
	cout << "func(double a,int b)�ĵ���" << endl;
}
//ע�⣺�����ķ���ֵ������Ϊ�������ص�����


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