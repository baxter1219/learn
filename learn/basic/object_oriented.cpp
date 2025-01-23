#include <iostream>
#include <string>
using namespace std;

// ֵ����
void swap_1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// ��ַ����
void swap_2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// ���ô���
void swap_3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    // ���õĺô���1.��ָ��Ĳ��� 2.���ñ�ָ�����ȫ
    // ���ñ���û�ж������ڴ�ռ䣬��ֻ���������õı�����һ����������ˣ�����ȡ���õĵ�ַʱ����ʵ����ȡ�������������õı����ĵ�ַ��

    int a = 10;
    int b = 20;
    cout << "ԭ��ֵa = " << a << endl; // 10
    cout << "ԭ��ֵb = " << b << endl; // 20

    int &c = a;
    cout << "����c = " << c << endl;     // 10
    cout << "a�ĵ�ַa = " << &a << endl; // 0x61fe0c
    cout << "c�ĵ�ַc = " << &c << endl; // 0x61fe0c

    // ֵ����
    swap_1(a, b);
    cout << "ֵ����" << endl;
    cout << "a = " << a << endl; // 10
    cout << "b = " << b << endl; // 20

    // ��ַ����
    swap_2(&a, &b);
    cout << "��ַ����" << endl;
    cout << "a = " << a << endl; // 20
    cout << "b = " << b << endl; // 10
    /*��ʱa,b��ֵ���ı���
    �����ҽ�a,b��ֵ����ȥ
    */
    a = 10;
    b = 20;
    // ���ô���
    swap_3(a, b);
    cout << "���ô���" << endl;
    cout << "a = " << a << endl; // 20
    cout << "b = " << b << endl; // 10
    system("pause");
    return 0;
}

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
