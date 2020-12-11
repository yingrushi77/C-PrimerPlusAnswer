//
// Created by yingrushi on 2020/12/11.
//

/*
 * ��дһ������Ҫ���û���������ʽ����������ʹ��long��long long�����洢����
 * Ȼ�����졢Сʱ�����Ӻ���ķ�ʽ��ʾ���ʱ�䡣ʹ�÷��ų�������ʾÿ���ж���Сʱ��ÿСʱ�ж��ٷ���
 * �Լ�ÿ�����ж����롣�ó�������Ӧ���������ƣ�
 * Enter the number of seconds:31600000
 * 31600000 seconds = 365 days,17 hours,46 minutes,40 seconds
 */

#include <iostream>
#include <cstdlib>

using namespace std;

const int minuteToSecond = 60;
const int hourToMinute = 60;
const int dayToHour = 24;
const int yearToDay = 365;

void timeTransfer(long seconds);//������ת��Ϊ�졢Сʱ�����ӡ���

int main()
{
    long seconds;
    cout << "Enter the number of seconds:" << endl;
    cin >> seconds;
    timeTransfer(seconds);

    return 0;
}

void timeTransfer(long seconds)
{
    int day = seconds / (minuteToSecond * hourToMinute * dayToHour);
    int hour = (seconds % (minuteToSecond * hourToMinute * dayToHour)) / (minuteToSecond * hourToMinute);
    int minute = (seconds % (minuteToSecond * hourToMinute)) / minuteToSecond;
    int second = seconds % minuteToSecond;

    cout << seconds << " seconds = " << day << " days," << hour << " hours," << minute << " minutes," << second << " seconds" << endl;
}