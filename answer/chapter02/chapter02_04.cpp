//��дһ���������û����������䣬Ȼ����ʾ������������ٸ���
/*
������ʾ��
Enter your age: 29
*/

#include<iostream>
using namespace std;

void age_to_month(int);

int main()
{
    int age;
    cout << "������������䣺" << endl;
    cin >> age;
    age_to_month(age);

    return 0;
}

void age_to_month(int age)
{
    int month = age * 12;
    cout << "����������Ϊ��" << month << endl;
}
