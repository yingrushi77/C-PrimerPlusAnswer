/*
��дһ���������е� main() ����һ���û��Զ���ĺ������������¶�ֵΪ��������������Ӧ��
�����¶�ֵ�����ó�������ĸ�ʽҪ���û����������¶�ֵ������ʾ�����
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
������ת����ʽ��
�����¶� = 1.8 * �����¶� + 32.0
*/

#include<iostream>
using namespace std;

double celsius_to_pahrenheit(double);

int main()
{
    cout << "������Ҫת���������¶�ֵ��" << endl;
    double celsius_value;
    cin >> celsius_value;
    double pahrenheit_value = celsius_to_pahrenheit(celsius_value);
    cout << celsius_value << "���϶���" << pahrenheit_value << "���϶�" << endl;

    return 0;
}

double celsius_to_pahrenheit(double celsius)
{
    int pahrenheit = 1.8 * celsius + 32.0;
    return pahrenheit;
}
