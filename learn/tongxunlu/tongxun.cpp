#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string address;
};

struct tongxunlu
{
    struct Person personArray[MAX];
    int size;
};

void addPerson(struct tongxunlu *txl)
{
    if (txl->size == MAX)
    {
        cout << "ͨѶ¼�������޷����" << endl;
        return;
    }
    string name;
    cout << "����������" << endl;
    cin >> name;
    txl->personArray[txl->size].name = name;
    cout << "�������Ա�" << endl;
    cout << "1.��" << endl;
    cout << "2.Ů" << endl;
    int sex = 0;
    while (true)
    {
        cin >> sex;
        if (sex == 1 || sex == 2)
        {
            txl->personArray[txl->size].sex = sex;
            break;
        }
        else
        {
            cout << "������������������" << endl;
        }
    }
    cout << "����������" << endl;
    int age = 0;
    cin >> age;
    txl->personArray[txl->size].age = age;
    cout << "������绰" << endl;
    string phone;
    cin >> phone;
    txl->personArray[txl->size].phone = phone;
    cout << "�������ַ" << endl;
    string address;
    cin >> address;
    txl->personArray[txl->size].address = address;
    txl->size++;
    cout << "��ӳɹ�" << endl;
    system("pause");
    system("cls");
}

void showPerson(struct tongxunlu *txl)
{
    if (txl->size == 0)
    {
        cout << "ͨѶ¼Ϊ��" << endl;
    }
    else
    {
        for (int i = 0; i < txl->size; i++)
        {
            cout << "������" << txl->personArray[i].name << "\t";
            cout << "�Ա�" << (txl->personArray[i].sex == 1 ? "��" : "Ů") << "\t";
            cout << "���䣺" << txl->personArray[i].age << "\t";
            cout << "�绰��" << txl->personArray[i].phone << "\t";
            cout << "��ַ��" << txl->personArray[i].address << endl;
        }
        system("pause");
        system("cls");
    }
}

void showmenu()
{
    cout << "*************" << endl;
    cout << "1.�����ϵ��" << endl;
    cout << "2.��ʾ��ϵ��" << endl;
    cout << "3.ɾ����ϵ��" << endl;
    cout << "4.������ϵ��" << endl;
    cout << "5.�޸���ϵ��" << endl;
    cout << "6.�����ϵ��" << endl;
    cout << "0.�˳�ͨѶ¼" << endl;
    cout << "*************" << endl;
    cout << "  ѡ���ܣ�" << endl;
}

int main()
{
    struct tongxunlu txl;
    txl.size = 0;
    int choose = 0;
    while (true)
    {
        showmenu();
        cin >> choose;
        switch (choose)
        {
        case 1:
            addPerson(&txl);
            break;
        case 2:
            showPerson(&txl);
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 0:
            cout << "��ӭ�´�ʹ��" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }
    system("pause");
    return 0;
}