// ��дһ��C++������ʹ��3���û�����ĺ���(���� main())������������������
/*
Three blind mice
Three blind mice
See how they run
See how they run
*/

#include<iostream>
using namespace std;

void out01(void);
void out02(void);

int main()
{
    out01();
    out01();
    out02();
    out02();

    return 0;
}

void out01(void)
{
    cout << "Three blind mice" << endl;
}

void out02(void)
{
    cout << "See how they run" << endl;
}
