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
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    string name;
    cout << "请输入姓名" << endl;
    cin >> name;
    txl->personArray[txl->size].name = name;
    cout << "请输入性别" << endl;
    cout << "1.男" << endl;
    cout << "2.女" << endl;
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
            cout << "输入有误，请重新输入" << endl;
        }
    }
    cout << "请输入年龄" << endl;
    int age = 0;
    cin >> age;
    txl->personArray[txl->size].age = age;
    cout << "请输入电话" << endl;
    string phone;
    cin >> phone;
    txl->personArray[txl->size].phone = phone;
    cout << "请输入地址" << endl;
    string address;
    cin >> address;
    txl->personArray[txl->size].address = address;
    txl->size++;
    cout << "添加成功" << endl;
    system("pause");
    system("cls");
}

void showPerson(struct tongxunlu *txl)
{
    if (txl->size == 0)
    {
        cout << "通讯录为空" << endl;
    }
    else
    {
        for (int i = 0; i < txl->size; i++)
        {
            cout << "姓名：" << txl->personArray[i].name << "\t";
            cout << "性别：" << (txl->personArray[i].sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << txl->personArray[i].age << "\t";
            cout << "电话：" << txl->personArray[i].phone << "\t";
            cout << "地址：" << txl->personArray[i].address << endl;
        }
        system("pause");
        system("cls");
    }
}

void showmenu()
{
    cout << "*************" << endl;
    cout << "1.添加联系人" << endl;
    cout << "2.显示联系人" << endl;
    cout << "3.删除联系人" << endl;
    cout << "4.查找联系人" << endl;
    cout << "5.修改联系人" << endl;
    cout << "6.清空联系人" << endl;
    cout << "0.退出通讯录" << endl;
    cout << "*************" << endl;
    cout << "  选择功能：" << endl;
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
            cout << "欢迎下次使用" << endl;
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