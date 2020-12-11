//
// Created by yingrushi on 2020/12/11.
//

/*
 * ��дһ������Ҫ���û��Զȡ��֡���ķ�ʽ����һ��γ�ȣ�Ȼ���Զ�Ϊ��λ��ʾ��Ϊ�ȡ�
 * 1��Ϊ60�֣�1�ֵ���60�룬���Է��ų����ķ�ʽ��ʾ��Щֵ��
 * ����ÿ������ֵ��Ӧʹ��һ�������ı����洢����
 * �����Ǹó�������ʱ�������
 * Enter a latitude in degrees,minutes,and seconds:
 * First,enter the degrees:37
 * Next,enter the minutes of arc:51
 * Finally,enter the seconds of arc:19
 * 37 degrees,51 minutes,19 seconds  = 37.8553 degrees
 */

#include <iostream>
#include <cstdlib>

using namespace std;

const double transValue = 60;//ת��ֵ

void calculateLatitude(int degree,double minute,double second);//ά��ת������

int main()
{
    int degree;
    double minute;
    double second;
    cout << "Enter a latitude in degrees,minutes,and seconds:" << endl;
    cout << "First,enter the degrees:" << endl;
    cin >> degree;
    cout << "Next,enter the minutes of arc:" << endl;
    cin >> minute;
    cout << "Finally,enter the seconds of arc:" << endl;
    cin >> second;

    calculateLatitude(degree,minute,second);

    return 0;
}

void calculateLatitude(int degree,double minute,double second)
{
    double degrees = degree + minute / transValue + second / transValue / transValue;
    cout << degree << " degrees," << minute << " minutes," << second << " seconds = " << degrees << " degrees" << endl;
}
