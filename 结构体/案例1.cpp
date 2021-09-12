//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//
//学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
//
//最终打印出老师数据以及老师所带的学生数据。


#include"head.h"

struct Student {
	string sname;
	int score;
};
struct Teacher {
	string tname;
	Student sArray[5];
};
//给老师和学生赋值的函数
void allocateSpace(Teacher tArray[], int len) {
	
	
	string nameSeed = "ABCD";
	for (int i = 0; i < len; i++) {
		tArray[i].tname = "教师_";
		tArray[i].tname += nameSeed[i];

		for (int j = 0; j < 4; j++) {
			tArray[i].sArray[j].sname = "学生_";
		    tArray[i].sArray[j].sname += nameSeed[i];

			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}
//打印信息的函数
void printInfo(Teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "教师姓名" << tArray[i].tname << endl;
		for (int j = 0; j < 4; j++) {
			cout  << "\t学生姓名" << tArray[i].sArray[j].sname ;
			cout  << "\t学生成绩" << tArray[i].sArray[j].score << endl;

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