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

// �����ϵ���Ƿ���ڣ����ڵĻ�����ʾ��ţ�����������ʾ-1
int isExist(struct tongxunlu *txl, string name)
{
    for (int i = 0; i < txl->size; i++)
    {
        if (txl->personArray[i].name == name)
            return i;
    }
    return -1;
}
// ɾ����ϵ��
void deletePerson(struct tongxunlu *txl)
{
    if (txl->size == 0)
    {
        cout << "ͨѶ¼��û����Ա��Ϣ" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "������Ҫɾ������ϵ�˵�����" << endl;
    string name;
    cin >> name;
    int ret = isExist(txl, name);
    if (ret != -1)
    {
        // ����ɾ������
        // ѭ��������һλ�����ݸ���ǰһλ��������������1
        for (int i = ret; i < txl->size; i++)
        {
            txl->personArray[i] = txl->personArray[i + 1];
        }
        txl->size--;
        cout << "ɾ���ɹ�" << endl;
    }
    else
    {
        cout << "ͨѶ¼��û�д���" << endl;
    }
    system("pause");
    system("cls");
}

// ����
void findPerson(struct tongxunlu *txl)
{
    cout << "������Ҫ���ҵ���ϵ��" << endl;
    string name;
    cin >> name;
    int ret = isExist(txl, name);
    if (ret != -1)
    {
        cout << "���� " << txl->personArray[ret].name << "\t";
        cout << "�Ա� " << (txl->personArray[ret].sex == 1 ? "��" : "Ů") << "\t";
        cout << "���� " << txl->personArray[ret].age << "\t";
        cout << "�绰 " << txl->personArray[ret].phone << "\t";
        cout << "��ַ " << txl->personArray[ret].address << endl;
    }
    else
        cout << "���޴���" << endl;
    system("pause");
    system("cls");
}

// �޸�
void changePerson(struct tongxunlu *txl)
{
    cout << "������Ҫ�޸ĵ���ϵ��" << endl;
    string name;
    cin >> name;
    int ret = isExist(txl, name);
    if (ret == -1)
    {
        cout << "���޴���" << endl;
    }
    else
    {
        cout << "��������Ҫ�޸ĵ�ѡ��" << endl;
        cout << "1.�޸�����" << endl;
        cout << "2.�޸��Ա�" << endl;
        cout << "3.�޸�����" << endl;
        cout << "4.�޸ĵ绰" << endl;
        cout << "5.�޸ĵ�ַ" << endl;
        cout << "6.�޸Ķ����ȫ��" << endl;
        int swi = 0;
        cin >> swi;
        switch (swi)
        {
        case 1:
        {
            cout << "������ĺ������" << endl;
            string name;
            cin >> name;
            txl->personArray[ret].name = name;
            break;
        }
        case 2:
        {
            cout << "������ĺ���Ա�" << endl;
            cout << "1-----��" << endl;
            cout << "2-----Ů" << endl;
            int sex;
            cin >> sex;
            txl->personArray[ret].sex = sex;
            break;
        }
        case 3:
        {
            cout << "������ĺ������" << endl;
            int age;
            cin >> age;
            txl->personArray[ret].age = age;
            break;
        }
        case 4:
        {
            cout << "������ĺ�ĵ绰" << endl;
            string phone;
            cin >> phone;
            txl->personArray[ret].phone = phone;
            break;
        }
        case 5:
        {
            cout << "������ĺ�ĵ�ַ" << endl;
            string addres;
            cin >> addres;
            txl->personArray[ret].address = addres;
            break;
        }
        case 6:
        {
            cout << "������ĺ������" << endl;
            string name;
            cin >> name;
            txl->personArray[ret].name = name;

            cout << "������ĺ���Ա�" << endl;
            cout << "1-----��" << endl;
            cout << "2-----Ů" << endl;
            int sex;
            cin >> sex;
            txl->personArray[ret].sex = sex;

            cout << "������ĺ������" << endl;
            int age;
            cin >> age;
            txl->personArray[ret].age = age;

            cout << "������ĺ�ĵ绰" << endl;
            string phone;
            cin >> phone;
            txl->personArray[ret].phone = phone;

            cout << "������ĺ�ĵ�ַ" << endl;
            string addres;
            cin >> addres;
            txl->personArray[ret].address = addres;
            break;
        }
        }
        system("pause");
        system("cls");
    }
}

// ���,ֱ�������鳤��Ϊ0
void cleanPerson(struct tongxunlu *txl)
{
    cout << "��ȷ��Ҫ���ͨѶ¼��" << endl;
    string pan;
    cout << "���롰Yes����ȷ�����" << endl;
    cin >> pan;
    if (pan == "Yes")
    {
        txl->size = 0;
        cout << "ͨѶ¼�����" << endl;
    }
    else
    {
        cout << "ȡ�����" << endl;
    }
    system("pause");
    system("cls");
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
            deletePerson(&txl);
            break;
        case 4:
            findPerson(&txl);
            break;
        case 5:
            changePerson(&txl);
            break;
        case 6:
            cleanPerson(&txl);
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