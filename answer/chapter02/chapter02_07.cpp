/*
编写一个程序，要求用户输入小时数和分钟数。
在main（）函数中，将这两个值传递给一个void函数，后者以下面这样的格式显示这两个值：
Enter the number of hours：9
Enter the number of minutes：28
Time：9：28
*/

#include<iostream>
using namespace std;

void view_time(int ,int );

int main()
{
    cout << "请输入小时数和分钟数：" << endl;
    int hours;
    int minutes;
    cin >> hours;
    cin >> minutes;
    view_time(hours,minutes);

    return 0;
}

void view_time(int hour,int minute)
{
    cout << "输入的小时数为：" << hour << endl;
    cout << "输入的分钟数为：" << minute << endl;
    cout << "Time: " << hour << ":" << minute << endl;
}
