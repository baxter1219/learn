#include <iostream>
#include <string>
using namespace std;

// ���õĻ����﷨
// �������� &���� = ԭ��
int main()
{
    // ���õ�ʹ����Ҫ��ʼ����������ԭ�����б���
    // ���õı�����C++�ڲ�ʵ����һ��ָ�볣������int *const ref = &a;
    // ���������Ͳ����ٸı䣬��������ָ����������
    // ���õĺô���1.��ָ��Ĳ��� 2.���ñ�ָ�����ȫ
    // ���õı�����ָ�볣���������������ڴ����Ǵ��ڵ�

    int a = 10;
    int &b = a;                  // b��a�ı������е���#define�ĺ궨��
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
