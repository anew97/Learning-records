#include"1.h"

//����Ĭ�ϲ���

//��������Լ��������ݣ������Լ������ݣ�û������Ĭ��ֵ
//�﷨������ֵ���� ���������β� = Ĭ��ֵ��

int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}



//ע������
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//int func2(int a, int b = 20, int c = 30, int d)
//{
//	return a + b + c + d;
//}

//2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a, int b);

int func2(int a = 10, int b = 20)
{
	return a + b;
}

int main()
{
	
	
	cout <<"func(10):\t"<< func(10) << endl;
	cout <<"func(10,10):\t"<< func(10, 10) << endl;
	cout << "func2(1,2)\t" << func2(1,2) << endl;



	system("pause");
	return 0;
}
