#include <iostream>
#include <string>
using namespace std;

class circle
{
public:
private:
    int m_r;
    int m_x;
    int m_y;
};

int main()
{

    return 0;
}

// /*
// 类的权限:分三种
// public:公共权限，类内可以访问，类外可以访问
// protected:保护权限，类内可以访问，类外不可以访问，子类可以访问
// private:私有权限，类内可以访问，类外不可以访问，子类不可以访问

// **********
// 通过公有的函数，私有的属性，来间接控制私有属性的权限
//

// */
// class person
// {
// public:
//     string name; // 姓名
//     int age;     // 年龄
//     int height;  // 身高
//     void ziwojieshao(string name, int age, int height)
//     {
//         this->name = name;
//         this->age = age;
//         this->height = height;
//         cout << "自我介绍" << "\t";
//         cout << "姓名：" << name << " 年龄：" << age << " 身高：" << height << endl;
//         jieshao();
//     }

// protected:
//     string girlfriend = "李四"; // 女朋友
//     void jieshao()
//     {
//         cout << "介绍" << "\t\t";
//         cout << "我叫" << name << ",我的女朋友叫" << girlfriend << endl;
//     }

// private:
//     int password = 234; // 密码
// };

// int main()
// {
//     person p1;
//     p1.name = "张三";
//     p1.age = 18;
//     p1.height = 180;
//     p1.ziwojieshao(p1.name, p1.age, p1.height); // 自我介绍函数中调佣了介绍函数，介绍函数是保护权限，类外不可以访问，但是内部可以访问
//     // p1.girlfriend = "小红"; // 保护权限，类外不可以访问
//     // p1.jieshao();     // 私有权限，类外不可以访问
//     system("pause");
//     return 0;
// }

// // 类模板
// class Person
// {
//     // 访问权限
// public:
//     // 属性
//     string name;
//     int age;

//     // 行为
//     void eat()
//     {
//         cout << "吃饭" << endl;
//     }
//     void sleep()
//     {
//         cout << "睡觉" << endl;
//     }
//     void play()
//     {
//         cout << "玩耍" << endl;
//     }
// };

// int main()
// {
//     //具体对象
//     Person p1;
//     p1.name = "张三";
//     p1.age = 18;
//     cout << "姓名：" << p1.name << " 年龄：" << p1.age << endl;
//     p1.eat();
//     p1.sleep();
//     p1.play();
//     system("pause");
//     return 0;
// }

// /*
// 函数的默认参数
// 函数的占位参数

// 函数重载：
// 相同的作用域下,函数名相同，参数列表不同（参数个数，参数类型，参数顺序）
// 返回值不能作为函数重载的条件

// 注意事项：
// 引用作为重载条件
// 函数重载碰到默认参数
// */

// void func(int &c)
// {
//     cout << "函数（int&c）" << endl;
// }

// void func(const int &c)
// {
//     cout << "函数（const int&c）" << endl;
// }

// int main()
// {
//     /*输出结果：
//     函数（int&c）
//     函数（const int &c）
//     */
//     int a = 10;
//     func(a);
//     func(10);
//     system("pause");
//     return 0;
// }

// void func()
// {
//     cout << "函数（无参）" << endl;
// }

// void func(int a)
// {
//     cout << "函数（有参）" << endl;
// }

// int main()
// {
//     func();
//     func(10);
//     system("pause");
//     return 0;
// }

// // 值传递
// void swap_1(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// // 地址传递
// void swap_2(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// // 引用传递
// void swap_3(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     // 引用的好处：1.简化指针的操作 2.引用比指针更安全
//     // 引用本身没有独立的内存空间，它只是它所引用的变量的一个别名。因此，当你取引用的地址时，你实际上取到的是它所引用的变量的地址。

//     int a = 10;
//     int b = 20;
//     cout << "原数值a = " << a << endl; // 10
//     cout << "原数值b = " << b << endl; // 20

//     int &c = a;
//     cout << "引用c = " << c << endl;     // 10
//     cout << "a的地址a = " << &a << endl; // 0x61fe0c
//     cout << "c的地址c = " << &c << endl; // 0x61fe0c

//     // 值传递
//     swap_1(a, b);
//     cout << "值传递" << endl;
//     cout << "a = " << a << endl; // 10
//     cout << "b = " << b << endl; // 20

//     // 地址传递
//     swap_2(&a, &b);
//     cout << "地址传递" << endl;
//     cout << "a = " << a << endl; // 20
//     cout << "b = " << b << endl; // 10
//     /*此时a,b的值被改变了
//     这里我将a,b的值换回去
//     */
//     a = 10;
//     b = 20;
//     // 引用传递
//     swap_3(a, b);
//     cout << "引用传递" << endl;
//     cout << "a = " << a << endl; // 20
//     cout << "b = " << b << endl; // 10
//     system("pause");
//     return 0;
// }

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
