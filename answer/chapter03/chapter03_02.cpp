//
// Created by yingrushi on 2020/12/10.
//

/*
 * ��дһ��С����Ҫ���Լ�Ӣ�߼�Ӣ��ķ�ʽ��������ߣ����԰�Ϊ��λ���������ء�
 * ��ʹ��3���������洢��Щ��Ϣ�����ó��򱨸���BMI��Body Mass Index������ָ������
 * Ϊ�˼���BMI���ó�����Ӣ��ķ�ʽָ���û�����ߣ�1Ӣ��Ϊ12Ӣ�磩��������Ӣ��Ϊ
 * ��λ�����ת��Ϊ����Ϊ��λ����ߣ�1Ӣ��=0.0254�ף���Ȼ�󣬽��԰�Ϊ��λ������
 * ת��Ϊ��ǧ��Ϊ��λ�����أ�1ǧ��=2.2������
 * ��󣬼�����Ӧ��BMI�������أ�ǧ�ˣ�������ߣ��ף���ƽ�����÷��ų�����ʾ����ת�����ӡ�
 */

#include <iostream>
#include <cstdlib>

using namespace std;

const int footToInch = 12;//Ӣ��ת��ΪӢ��
const double inchToMeter = 0.0254;//Ӣ��ת��Ϊ��
const double bangToKg = 1 / 2.2;//��ת��Ϊǧ��

void calculateBMI(int foot,int inch,int weight);//����BMI

int main()
{
    //���
    int foot;//Ӣ��
    int inch;//Ӣ��
    //����
    int weight;//����

    cout << "���������(�ֱ�����Ӣ�ߺ�Ӣ��)" << endl;
    cout << "Ӣ�ߣ�" << endl;
    cin >> foot;
    cout << "Ӣ�磺" << endl;
    cin >> inch;
    cout << "����������(��)��" << endl;
    cin >> weight;

    calculateBMI(foot,inch,weight);

    return 0;


}

void calculateBMI(int foot,int inch,int weight)
{
    int INCH = inch + foot * footToInch;//�����ܵ�Ӣ��
    double Meter = INCH * inchToMeter;//�����������
    double Weight = weight * bangToKg;//��������ǧ��
    //����BMI
    double BMI = Weight / Meter;

    cout << "BMI:" << BMI << endl;
}