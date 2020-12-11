//
// Created by yingrushi on 2020/12/11.
//
/*
 * 编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量为一加仑的里程。
 * 如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后指出欧洲风格的效果————
 * 即每100公里的耗油量（升）。
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//英里加仑耗油量函数
void mileAndGallon(int mile,int gallon);

//公里升耗油量函数
void kilometerL(int km,int l);

int main()
{
    int mile;//英里
    int gallon;//加仑
    int km;//公里
    int l;//升
    cout << "请输入英里：" << endl;
    cin >> mile;
    cout << "请输入加仑：" << endl;
    cin >> gallon;
    mileAndGallon(mile,gallon);

    cout << "请输入公里：" << endl;
    cin >> km;
    cout << "请输入升：" << endl;
    cin >> l;
    kilometerL(km,l);

    return 0;

}

void mileAndGallon(int mile,int gallon)
{
    double Mile = mile * 1.0 / gallon;
    cout << "汽车耗油量为1加仑的里程：" << Mile << " 英里" << endl;
}

void kilometerL(int km,int l)
{
    double L = l * 1.0 / km * 100;
    cout << "每100公里的耗油量为：" << L << " 升" << endl;
}