/*
编写一个程序，其main（）调用一个用户定义的函数（以光年值为参数，并返回对应天文单位的值）。
该程序按下面的格式要求用户输入光年值，并显示结果：
Enter the number of light years：4.2
4.2 light years=265608 astronomical units.
天文单位是从地球到太阳的平均距离（约150000000公里或93000000英里），光年是
光一年走的距离（约10万亿公里或6万亿英里）（除太阳外，最近的恒星大约离地球4.2光年）。
请使用double类型（参见程序清单2.4），转换公式为：
1光年=63240天文单位
*/

#include<iostream>
using namespace std;

double light_year_transfer(double);

int main()
{
    cout << "请输入要转换的光年值：" << endl;
    double light_year ;
    cin >> light_year;
    double astro_unit = light_year_transfer(light_year);
    cout << light_year << "光年 = " << astro_unit << "天文单位" << endl;

    return 0;
}

double light_year_transfer(double light_year)
{
    double astr_unit = 63240 * light_year;

    return astr_unit;
}
