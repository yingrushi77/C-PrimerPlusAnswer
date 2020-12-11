//
// Created by yingrushi on 2020/12/11.
//

/*
 * 编写一个程序，要求用户以整数方式输入秒数（使用long或long long变量存储），
 * 然后以天、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、每小时有多少分钟
 * 以及每分钟有多少秒。该程序的输出应与下面类似：
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

void timeTransfer(long seconds);//将秒数转换为天、小时、分钟、秒

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