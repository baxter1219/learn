#include <iostream>
#include <string>
using namespace std;
int *func()
{
    // new的基本语法,和malloc,calloc不同的是，new是一个运算符，malloc,calloc是函数
    int *p = new int(10);
    return p;
}
int main()
{
    int *p = func();
    cout << *p << endl;

    // new的删除
    delete p;
    cout << *p << endl; // 输出了一串长数字，内存已经被释放，但是指针p还是指向那块内存，应该就是野指针
    system("pause");
    return 0;
}
