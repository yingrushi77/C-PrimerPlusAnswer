/*
��дһ������Ҫ���û�����Сʱ���ͷ�������
��main���������У���������ֵ���ݸ�һ��void���������������������ĸ�ʽ��ʾ������ֵ��
Enter the number of hours��9
Enter the number of minutes��28
Time��9��28
*/

#include<iostream>
using namespace std;

void view_time(int ,int );

int main()
{
    cout << "������Сʱ���ͷ�������" << endl;
    int hours;
    int minutes;
    cin >> hours;
    cin >> minutes;
    view_time(hours,minutes);

    return 0;
}

void view_time(int hour,int minute)
{
    cout << "�����Сʱ��Ϊ��" << hour << endl;
    cout << "����ķ�����Ϊ��" << minute << endl;
    cout << "Time: " << hour << ":" << minute << endl;
}
