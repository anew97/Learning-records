// 内存四区.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//const修饰的全局常量，全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
    //全局区

    //全局变量、静态变量、常量

    //函数体内都是局部变量

    //创建普通局部变量
    int a = 10;
    int b = 10;

    cout << "局部变量a的地址为：" << (int)&a << endl;
    cout << "局部变量b的地址为：" << (int)&b << endl;

    cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
    cout << "全局变量g_b的地址为：" << (int)&g_b << endl;

    //静态变量  在普通变量前面加static，属于静态变量
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
    cout << "静态变量s_b的地址为：" << (int)&s_b << endl;

    //常量
    //字符串常量

    cout << "字符串的地址为" << (int)&"hello world" << endl;

    //const修饰的变量
    //const修饰的全局变量，const修饰的局部变量

    cout << "全局常量c_g_a的地址" << (int)&c_g_a << endl;
    cout << "全局常量c_g_b的地址" << (int)&c_g_b << endl;

    const int c_l_a = 10;   //c-const  g-global  l-local
    const int c_l_b = 10;

    cout << "局部常量c_l_a的地址" << (int)&c_l_a << endl;
    cout << "局部常量c_l_b的地址" << (int)&c_l_b << endl;

    system("pause");

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
