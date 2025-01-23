#include <iostream>
#include <string>
using namespace std;

// 引用的基本语法
// 数据类型 &别名 = 原名
int main()
{
    // 引用的使用需要初始化，即先有原名在有别名
    // 引用的本质在C++内部实现是一个指针常量，即int *const ref = &a;
    // 别名定义后就不能再改变，即不能再指向其他变量
    // 引用的好处：1.简化指针的操作 2.引用比指针更安全
    // 引用的本质是指针常量，所以引用在内存中是存在的

    int a = 10;
    int &b = a;                  // b是a的别名，有点像#define的宏定义
    cout << "a = " << a << endl; // 10
    cout << "b = " << b << endl; // 10
    b = 100;
    cout << "a = " << a << endl; // 100
    cout << "b = " << b << endl; // 100
    system("pause");
    return 0;
}

// int *func()
// {
//     // new的基本语法,和malloc,calloc不同的是，new是一个运算符，malloc,calloc是函数
//     int *p = new int(10);
//     return p;
// }
// int main()
// {
//     int *p = func();
//     cout << *p << endl;

//     // new的删除
//     delete p;
//     cout << *p << endl; // 输出了一串长数字，内存已经被释放，但是指针p还是指向那块内存，应该就是野指针
//     system("pause");
//     return 0;
// }
