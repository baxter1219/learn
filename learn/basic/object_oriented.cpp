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
// ���Ȩ��:������
// public:����Ȩ�ޣ����ڿ��Է��ʣ�������Է���
// protected:����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ���Է��ʣ�������Է���
// private:˽��Ȩ�ޣ����ڿ��Է��ʣ����ⲻ���Է��ʣ����಻���Է���

// **********
// ͨ�����еĺ�����˽�е����ԣ�����ӿ���˽�����Ե�Ȩ��
//

// */
// class person
// {
// public:
//     string name; // ����
//     int age;     // ����
//     int height;  // ���
//     void ziwojieshao(string name, int age, int height)
//     {
//         this->name = name;
//         this->age = age;
//         this->height = height;
//         cout << "���ҽ���" << "\t";
//         cout << "������" << name << " ���䣺" << age << " ��ߣ�" << height << endl;
//         jieshao();
//     }

// protected:
//     string girlfriend = "����"; // Ů����
//     void jieshao()
//     {
//         cout << "����" << "\t\t";
//         cout << "�ҽ�" << name << ",�ҵ�Ů���ѽ�" << girlfriend << endl;
//     }

// private:
//     int password = 234; // ����
// };

// int main()
// {
//     person p1;
//     p1.name = "����";
//     p1.age = 18;
//     p1.height = 180;
//     p1.ziwojieshao(p1.name, p1.age, p1.height); // ���ҽ��ܺ����е�Ӷ�˽��ܺ��������ܺ����Ǳ���Ȩ�ޣ����ⲻ���Է��ʣ������ڲ����Է���
//     // p1.girlfriend = "С��"; // ����Ȩ�ޣ����ⲻ���Է���
//     // p1.jieshao();     // ˽��Ȩ�ޣ����ⲻ���Է���
//     system("pause");
//     return 0;
// }

// // ��ģ��
// class Person
// {
//     // ����Ȩ��
// public:
//     // ����
//     string name;
//     int age;

//     // ��Ϊ
//     void eat()
//     {
//         cout << "�Է�" << endl;
//     }
//     void sleep()
//     {
//         cout << "˯��" << endl;
//     }
//     void play()
//     {
//         cout << "��ˣ" << endl;
//     }
// };

// int main()
// {
//     //�������
//     Person p1;
//     p1.name = "����";
//     p1.age = 18;
//     cout << "������" << p1.name << " ���䣺" << p1.age << endl;
//     p1.eat();
//     p1.sleep();
//     p1.play();
//     system("pause");
//     return 0;
// }

// /*
// ������Ĭ�ϲ���
// ������ռλ����

// �������أ�
// ��ͬ����������,��������ͬ�������б�ͬ�������������������ͣ�����˳��
// ����ֵ������Ϊ�������ص�����

// ע�����
// ������Ϊ��������
// ������������Ĭ�ϲ���
// */

// void func(int &c)
// {
//     cout << "������int&c��" << endl;
// }

// void func(const int &c)
// {
//     cout << "������const int&c��" << endl;
// }

// int main()
// {
//     /*��������
//     ������int&c��
//     ������const int &c��
//     */
//     int a = 10;
//     func(a);
//     func(10);
//     system("pause");
//     return 0;
// }

// void func()
// {
//     cout << "�������޲Σ�" << endl;
// }

// void func(int a)
// {
//     cout << "�������вΣ�" << endl;
// }

// int main()
// {
//     func();
//     func(10);
//     system("pause");
//     return 0;
// }

// // ֵ����
// void swap_1(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// // ��ַ����
// void swap_2(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// // ���ô���
// void swap_3(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     // ���õĺô���1.��ָ��Ĳ��� 2.���ñ�ָ�����ȫ
//     // ���ñ���û�ж������ڴ�ռ䣬��ֻ���������õı�����һ����������ˣ�����ȡ���õĵ�ַʱ����ʵ����ȡ�������������õı����ĵ�ַ��

//     int a = 10;
//     int b = 20;
//     cout << "ԭ��ֵa = " << a << endl; // 10
//     cout << "ԭ��ֵb = " << b << endl; // 20

//     int &c = a;
//     cout << "����c = " << c << endl;     // 10
//     cout << "a�ĵ�ַa = " << &a << endl; // 0x61fe0c
//     cout << "c�ĵ�ַc = " << &c << endl; // 0x61fe0c

//     // ֵ����
//     swap_1(a, b);
//     cout << "ֵ����" << endl;
//     cout << "a = " << a << endl; // 10
//     cout << "b = " << b << endl; // 20

//     // ��ַ����
//     swap_2(&a, &b);
//     cout << "��ַ����" << endl;
//     cout << "a = " << a << endl; // 20
//     cout << "b = " << b << endl; // 10
//     /*��ʱa,b��ֵ���ı���
//     �����ҽ�a,b��ֵ����ȥ
//     */
//     a = 10;
//     b = 20;
//     // ���ô���
//     swap_3(a, b);
//     cout << "���ô���" << endl;
//     cout << "a = " << a << endl; // 20
//     cout << "b = " << b << endl; // 10
//     system("pause");
//     return 0;
// }

// ���õĻ����﷨
// �������� &���� = ԭ��
// int main()
// {
//     // ���õ�ʹ����Ҫ��ʼ����������ԭ�����б���
//     // ���������Ͳ����ٸı䣬��������ָ����������

//     int a = 10;
//     int &b = a;                  // b��a�ı������е���#define�ĺ궨��
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
//     // new�Ļ����﷨,��malloc,calloc��ͬ���ǣ�new��һ���������malloc,calloc�Ǻ���
//     int *p = new int(10);
//     return p;
// }
// int main()
// {
//     int *p = func();
//     cout << *p << endl;

//     // new��ɾ��
//     delete p;
//     cout << *p << endl; // �����һ�������֣��ڴ��Ѿ����ͷţ�����ָ��p����ָ���ǿ��ڴ棬Ӧ�þ���Ұָ��
//     system("pause");
//     return 0;
// }
