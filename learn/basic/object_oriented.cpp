#include <iostream>
#include <string>
using namespace std;
int *func()
{
    // new�Ļ����﷨,��malloc,calloc��ͬ���ǣ�new��һ���������malloc,calloc�Ǻ���
    int *p = new int(10);
    return p;
}
int main()
{
    int *p = func();
    cout << *p << endl;

    // new��ɾ��
    delete p;
    cout << *p << endl; // �����һ�������֣��ڴ��Ѿ����ͷţ�����ָ��p����ָ���ǿ��ڴ棬Ӧ�þ���Ұָ��
    system("pause");
    return 0;
}
