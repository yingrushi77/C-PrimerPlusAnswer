/*
编写一个程序，其中的 main() 调用一个用户自定义的函数（以摄氏温度值为参数，并返回相应的
华氏温度值）。该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
下面是转换公式：
华氏温度 = 1.8 * 摄氏温度 + 32.0
*/

#include<iostream>
using namespace std;

double celsius_to_pahrenheit(double);

int main()
{
    cout << "请输入要转化的摄氏温度值：" << endl;
    double celsius_value;
    cin >> celsius_value;
    double pahrenheit_value = celsius_to_pahrenheit(celsius_value);
    cout << celsius_value << "摄氏度是" << pahrenheit_value << "华氏度" << endl;

    return 0;
}

double celsius_to_pahrenheit(double celsius)
{
    int pahrenheit = 1.8 * celsius + 32.0;
    return pahrenheit;
}
