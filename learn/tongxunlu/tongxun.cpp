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

// 检测联系人是否存在，存在的话则显示序号，不存在则显示-1
int isExist(struct tongxunlu *txl, string name)
{
    for (int i = 0; i < txl->size; i++)
    {
        if (txl->personArray[i].name == name)
            return i;
    }
    return -1;
}
// 删除联系人
void deletePerson(struct tongxunlu *txl)
{
    if (txl->size == 0)
    {
        cout << "通讯录里没有人员信息" << endl;
        system("pause");
        system("cls");
        return;
    }
    cout << "请输入要删除的联系人的姓名" << endl;
    string name;
    cin >> name;
    int ret = isExist(txl, name);
    if (ret != -1)
    {
        // 进行删除操作
        // 循环将后面一位的内容覆盖前一位，并进行总数减1
        for (int i = ret; i < txl->size; i++)
        {
            txl->personArray[i] = txl->personArray[i + 1];
        }
        txl->size--;
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "通讯录里没有此人" << endl;
    }
    system("pause");
    system("cls");
}

// 查找
void findPerson(struct tongxunlu *txl)
{
    cout << "请输入要查找的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(txl, name);
    if (ret != -1)
    {
        cout << "姓名 " << txl->personArray[ret].name << "\t";
        cout << "性别 " << (txl->personArray[ret].sex == 1 ? "男" : "女") << "\t";
        cout << "年龄 " << txl->personArray[ret].age << "\t";
        cout << "电话 " << txl->personArray[ret].phone << "\t";
        cout << "地址 " << txl->personArray[ret].address << endl;
    }
    else
        cout << "查无此人" << endl;
    system("pause");
    system("cls");
}

// 修改
void changePerson(struct tongxunlu *txl)
{
    cout << "请输入要修改的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(txl, name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;
    }
    else
    {
        cout << "请输入想要修改的选项" << endl;
        cout << "1.修改姓名" << endl;
        cout << "2.修改性别" << endl;
        cout << "3.修改年龄" << endl;
        cout << "4.修改电话" << endl;
        cout << "5.修改地址" << endl;
        cout << "6.修改多项或全部" << endl;
        int swi = 0;
        cin >> swi;
        switch (swi)
        {
        case 1:
        {
            cout << "请输入改后的姓名" << endl;
            string name;
            cin >> name;
            txl->personArray[ret].name = name;
            break;
        }
        case 2:
        {
            cout << "请输入改后的性别" << endl;
            cout << "1-----男" << endl;
            cout << "2-----女" << endl;
            int sex;
            cin >> sex;
            txl->personArray[ret].sex = sex;
            break;
        }
        case 3:
        {
            cout << "请输入改后的年龄" << endl;
            int age;
            cin >> age;
            txl->personArray[ret].age = age;
            break;
        }
        case 4:
        {
            cout << "请输入改后的电话" << endl;
            string phone;
            cin >> phone;
            txl->personArray[ret].phone = phone;
            break;
        }
        case 5:
        {
            cout << "请输入改后的地址" << endl;
            string addres;
            cin >> addres;
            txl->personArray[ret].address = addres;
            break;
        }
        case 6:
        {
            cout << "请输入改后的姓名" << endl;
            string name;
            cin >> name;
            txl->personArray[ret].name = name;

            cout << "请输入改后的性别" << endl;
            cout << "1-----男" << endl;
            cout << "2-----女" << endl;
            int sex;
            cin >> sex;
            txl->personArray[ret].sex = sex;

            cout << "请输入改后的年龄" << endl;
            int age;
            cin >> age;
            txl->personArray[ret].age = age;

            cout << "请输入改后的电话" << endl;
            string phone;
            cin >> phone;
            txl->personArray[ret].phone = phone;

            cout << "请输入改后的地址" << endl;
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

// 清空,直接令数组长度为0
void cleanPerson(struct tongxunlu *txl)
{
    cout << "你确定要清空通讯录吗" << endl;
    string pan;
    cout << "输入“Yes”来确认清空" << endl;
    cin >> pan;
    if (pan == "Yes")
    {
        txl->size = 0;
        cout << "通讯录已清空" << endl;
    }
    else
    {
        cout << "取消清空" << endl;
    }
    system("pause");
    system("cls");
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