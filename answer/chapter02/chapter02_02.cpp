// 编写一个C++程序，它要求用户输入一个以 long 为单位的距离，然后将它转化为码(一 long 等于 220 码)
#include<iostream>
using namespace std;
//函数原型
int long_to_ma(int);

int main()
{
    cout << "请输入要转换long的数目：" << endl;
    int long_num ;
    cin >> long_num ;
    int ma_num = long_to_ma(long_num);
    cout << "转换后的码数为：" << ma_num;

    return 0;
}

int long_to_ma(int longnum)
{
    int manum = longnum * 220;

    return manum;

}
