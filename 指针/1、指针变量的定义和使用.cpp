#include "head.h"

int main() {

	//1��ָ��Ķ���
	int a = 10; //�������ͱ���a

	//ָ�붨���﷨�� �������� * ������ ;
	int* p;

	//ָ�������ֵ
	p = &a; //ָ��ָ�����a�ĵ�ַ
	cout << &a << endl; //��ӡ����a�ĵ�ַ
	cout << p << endl;  //��ӡָ�����p

	//2��ָ���ʹ��
	//ͨ��*����ָ�����ָ����ڴ�
	cout << "*p = " << *p << endl;

	double b = 10.24;
	double* ptr_b = &b;
	//ptr_b = &b;
	cout << "b��ֵΪ��" << b << endl;
	cout << "b�ĵ�ַΪ��" << &b << endl;
	cout << "ptr_b��ֵΪ��" << ptr_b << endl;
	cout << "ptr_b�ĵ�ַΪ��" << &ptr_b << endl;
	cout << "ptr_bָ���ڴ��ֵ��" << *ptr_b << endl;


	system("pause");

	return 0;
}