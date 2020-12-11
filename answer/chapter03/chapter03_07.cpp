//
// Created by yingrushi on 2020/12/11.
//
/*
 * 编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量————
 * 每加仑多少英里。注意，除了使用不同的单位计量外，美国方法（距离/燃料）与欧洲方法（燃料/距离）相反。
 * 100公里等于62.14英里，1加仑等于3.875升。
 * 因此，19mpg大约合12.41/100km,127mpg大约合8.71/100km。
 */

#include <iostream>
#include <cstdlib>

using namespace std;
const double kmToMile = 62.14;//100公里等于62.14英里
const double gallonToL = 3.875;//1加仑等于3.875升

void lTransferMpg(double l);//欧洲耗油量风格转换为美国耗油量风格函数

int main()
{
    double l;
    cout << "请输入欧洲风格耗油量：" << endl;
    cin >> l;
    lTransferMpg(l);

    return 0;
}

void lTransferMpg(double l)
{
    //l:欧洲的耗油量风格
    double gallon = l / gallonToL;//加仑数
    double mile = 1 * kmToMile;
    double mpg = mile / gallon;

    cout << "欧洲风格耗油量 " << l << " L转化为" << mpg << " mpg" << endl;

}