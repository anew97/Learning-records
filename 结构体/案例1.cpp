//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//
//ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//
//���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�


#include"head.h"

struct Student {
	string sname;
	int score;
};
struct Teacher {
	string tname;
	Student sArray[5];
};
//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(Teacher tArray[], int len) {
	
	
	string nameSeed = "ABCD";
	for (int i = 0; i < len; i++) {
		tArray[i].tname = "��ʦ_";
		tArray[i].tname += nameSeed[i];

		for (int j = 0; j < 4; j++) {
			tArray[i].sArray[j].sname = "ѧ��_";
		    tArray[i].sArray[j].sname += nameSeed[i];

			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}
//��ӡ��Ϣ�ĺ���
void printInfo(Teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ����" << tArray[i].tname << endl;
		for (int j = 0; j < 4; j++) {
			cout  << "\tѧ������" << tArray[i].sArray[j].sname ;
			cout  << "\tѧ���ɼ�" << tArray[i].sArray[j].score << endl;

		}
	}
}

int main() {

	srand((unsigned int)time(NULL));

	struct Teacher tArray[3];

	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	printInfo(tArray, len);

	return 0;
}