//编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月
/*
如下所示：
Enter your age: 29
*/

#include<iostream>
using namespace std;

void age_to_month(int);

int main()
{
    int age;
    cout << "请输入你的年龄：" << endl;
    cin >> age;
    age_to_month(age);

    return 0;
}

void age_to_month(int age)
{
    int month = age * 12;
    cout << "包含的月数为：" << month << endl;
}
