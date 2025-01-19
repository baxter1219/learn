#include <iostream>
#include <string> //使用string需要包含的头文件
using namespace std;
#define week 7
int main()
{
    cout << "输入的数字是 " << endl;
    cout << "输入的数字是 " << endl;

    return 0;
}
// int main()
// {
//     int a = 0;
//     cout << "请输入一个整形的数字 " << endl;
//     cin >> a;
//     cout << "输入的数字是 " << a << endl;
//     return 0;
// }
// int main()
// {
//     bool a = 1, b = true;//bool只占一个字节大小
//     if (a == b)
//         cout << "对" << endl;//true和1 都是同等的，都代表真值
//     else
//         cout << "错" << endl;
//     return 0;
// }
// int main()
// {
//     bool flag = false;
//     int a = 11;
//     if (a == 10)
//         flag = ~flag;
//     cout << "数字是否等于10   " << flag << endl;
//     return 0;
// }bool值只存在0或者1，表示真假

// int main()
// {
//     char str1[] = "hello world";
//     string str2 = "hello world";
//     cout << "数组型的字符串" << str1 << "字符串形式的字符串" << str2 << endl;

//     return 0;
// }
/**/
/**/
/**/
/*
sizeof：统计所占内存空间
浮点型：
float:4字节，7位有效数字
doubl:8字节，15——16位有效数字
*/

/*
整型
unsigned:无符号
shout；2字节，16位
int :4
long :4(windows),linux(4/8)
long long :8
*/

/*
命名标准：见名知意
    不可以是关键字：
    由数字，英文字母，下划线_；
    要区分大小写；
    第一个字母必须是字母
*/
// int main()
// {
//     int a = 100;
//     cout << "a = " << a << endl;
//     //system("pause");
//     return 0;
// }

// int main()
// {
//     //week=8//报错
//     const int a = 8;
//     //a = 0;//报错
//     cout << week << endl;
//     return 0;
// }
