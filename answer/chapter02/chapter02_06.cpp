/*
��дһ��������main��������һ���û�����ĺ������Թ���ֵΪ�����������ض�Ӧ���ĵ�λ��ֵ����
�ó�������ĸ�ʽҪ���û��������ֵ������ʾ�����
Enter the number of light years��4.2
4.2 light years=265608 astronomical units.
���ĵ�λ�Ǵӵ���̫����ƽ�����루Լ150000000�����93000000Ӣ���������
��һ���ߵľ��루Լ10���ڹ����6����Ӣ�����̫���⣬����ĺ��Ǵ�Լ�����4.2���꣩��
��ʹ��double���ͣ��μ������嵥2.4����ת����ʽΪ��
1����=63240���ĵ�λ
*/

#include<iostream>
using namespace std;

double light_year_transfer(double);

int main()
{
    cout << "������Ҫת���Ĺ���ֵ��" << endl;
    double light_year ;
    cin >> light_year;
    double astro_unit = light_year_transfer(light_year);
    cout << light_year << "���� = " << astro_unit << "���ĵ�λ" << endl;

    return 0;
}

double light_year_transfer(double light_year)
{
    double astr_unit = 63240 * light_year;

    return astr_unit;
}
