//
// Created by yingrushi on 2020/12/11.
//
/*
 * ��дһ������Ҫ���û�����������̣�Ӣ���ʹ�������������أ���Ȼ��ָ������������Ϊһ���ص���̡�
 * ���Ը�⣬Ҳ�����ó���Ҫ���û��Թ���Ϊ��λ������룬������Ϊ��λ������������Ȼ��ָ��ŷ�޷���Ч����������
 * ��ÿ100����ĺ�������������
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//Ӣ����غ���������
void mileAndGallon(int mile,int gallon);

//����������������
void kilometerL(int km,int l);

int main()
{
    int mile;//Ӣ��
    int gallon;//����
    int km;//����
    int l;//��
    cout << "������Ӣ�" << endl;
    cin >> mile;
    cout << "��������أ�" << endl;
    cin >> gallon;
    mileAndGallon(mile,gallon);

    cout << "�����빫�" << endl;
    cin >> km;
    cout << "����������" << endl;
    cin >> l;
    kilometerL(km,l);

    return 0;

}

void mileAndGallon(int mile,int gallon)
{
    double Mile = mile * 1.0 / gallon;
    cout << "����������Ϊ1���ص���̣�" << Mile << " Ӣ��" << endl;
}

void kilometerL(int km,int l)
{
    double L = l * 1.0 / km * 100;
    cout << "ÿ100����ĺ�����Ϊ��" << L << " ��" << endl;
}