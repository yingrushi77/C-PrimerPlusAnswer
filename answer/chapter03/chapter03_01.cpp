//
// Created by yingrushi on 2020/12/10.
//

/*
 * ��дһ��С����Ҫ���û�ʹ��һ������ָ���Լ�����ߣ���λΪӢ�磩��Ȼ�����ת��ΪӢ�ߺ�Ӣ�硣
 * �ĳ���ʹ���»����ַ���֪ʶ����λ�á����⣬ʹ��һ��const���ų�������ʾת�����ӡ�
 */

#include <iostream>
#include <cstdlib>

using namespace std;

const int factor = 12;

void heightTransfer(int height);

int main()
{
    int Height;//��ʾ�˵����
    cout << "���������_" << endl;
    cin >> Height;
    heightTransfer(Height);
}

void heightTransfer(int height)
{
    int foot;//Ӣ��
    int inch;//Ӣ��

    foot = height / factor;
    inch = height % factor;

    cout << foot << "Ӣ��" << inch << "Ӣ��" << endl;
}