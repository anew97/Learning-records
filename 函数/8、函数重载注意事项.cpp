#include"1.h"




//��������ע������


//1��������Ϊ��������
void func(int &a)   //int &a = 10 ; ���Ϸ�
{
	cout << "func(int &a)����" << endl;
}

void func(const int& a)   //const int &a = 10; �Ϸ�
{
	cout << "func(const int &a)����" << endl;
}


//2������������������Ĭ�ϲ���
void func2(int a, int b=10)
{
	cout << "func2(int a,int b)�ĵ���" << endl;
}

void func2(int a) 
{
	cout << "func2(int a)�ĵ���" << endl;
}


int main() 
{
	int a = 10;
	func(a);   //������const

	func(10);   //������const

	//func2(10);   //��������������Ĭ�ϲ���ʱ�����ֶ����ԣ�������������

	system("pause");
	return 0;
}