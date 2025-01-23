#include <iostream>
#include <string>
using namespace std;

// 值传递
void swap_1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// 地址传递
void swap_2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// 引用传递
void swap_3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    // 引用的好处：1.简化指针的操作 2.引用比指针更安全
    // 引用本身没有独立的内存空间，它只是它所引用的变量的一个别名。因此，当你取引用的地址时，你实际上取到的是它所引用的变量的地址。

    int a = 10;
    int b = 20;
    cout << "原数值a = " << a << endl; // 10
    cout << "原数值b = " << b << endl; // 20

    int &c = a;
    cout << "引用c = " << c << endl;     // 10
    cout << "a的地址a = " << &a << endl; // 0x61fe0c
    cout << "c的地址c = " << &c << endl; // 0x61fe0c

    // 值传递
    swap_1(a, b);
    cout << "值传递" << endl;
    cout << "a = " << a << endl; // 10
    cout << "b = " << b << endl; // 20

    // 地址传递
    swap_2(&a, &b);
    cout << "地址传递" << endl;
    cout << "a = " << a << endl; // 20
    cout << "b = " << b << endl; // 10
    /*此时a,b的值被改变了
    这里我将a,b的值换回去
    */
    a = 10;
    b = 20;
    // 引用传递
    swap_3(a, b);
    cout << "引用传递" << endl;
    cout << "a = " << a << endl; // 20
    cout << "b = " << b << endl; // 10
    system("pause");
    return 0;
}

// 引用的基本语法
// 数据类型 &别名 = 原名
// int main()
// {
//     // 引用的使用需要初始化，即先有原名在有别名
//     // 别名定义后就不能再改变，即不能再指向其他变量

//     int a = 10;
//     int &b = a;                  // b是a的别名，有点像#define的宏定义
//     cout << "a = " << a << endl; // 10
//     cout << "b = " << b << endl; // 10
//     b = 100;
//     cout << "a = " << a << endl; // 100
//     cout << "b = " << b << endl; // 100
//     system("pause");
//     return 0;
// }

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
