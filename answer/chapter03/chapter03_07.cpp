//
// Created by yingrushi on 2020/12/11.
//
/*
 * ��дһ������Ҫ���û���ŷ�޷�����������ĺ�������ÿ100�������ĵ�����������������Ȼ����ת��Ϊ�������ĺ�������������
 * ÿ���ض���Ӣ�ע�⣬����ʹ�ò�ͬ�ĵ�λ�����⣬��������������/ȼ�ϣ���ŷ�޷�����ȼ��/���룩�෴��
 * 100�������62.14Ӣ�1���ص���3.875����
 * ��ˣ�19mpg��Լ��12.41/100km,127mpg��Լ��8.71/100km��
 */

#include <iostream>
#include <cstdlib>

using namespace std;
const double kmToMile = 62.14;//100�������62.14Ӣ��
const double gallonToL = 3.875;//1���ص���3.875��

void lTransferMpg(double l);//ŷ�޺��������ת��Ϊ���������������

int main()
{
    double l;
    cout << "������ŷ�޷���������" << endl;
    cin >> l;
    lTransferMpg(l);

    return 0;
}

void lTransferMpg(double l)
{
    //l:ŷ�޵ĺ��������
    double gallon = l / gallonToL;//������
    double mile = 1 * kmToMile;
    double mpg = mile / gallon;

    cout << "ŷ�޷������� " << l << " Lת��Ϊ" << mpg << " mpg" << endl;

}