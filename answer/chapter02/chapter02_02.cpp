// ��дһ��C++������Ҫ���û�����һ���� long Ϊ��λ�ľ��룬Ȼ����ת��Ϊ��(һ long ���� 220 ��)
#include<iostream>
using namespace std;
//����ԭ��
int long_to_ma(int);

int main()
{
    cout << "������Ҫת��long����Ŀ��" << endl;
    int long_num ;
    cin >> long_num ;
    int ma_num = long_to_ma(long_num);
    cout << "ת���������Ϊ��" << ma_num;

    return 0;
}

int long_to_ma(int longnum)
{
    int manum = longnum * 220;

    return manum;

}
