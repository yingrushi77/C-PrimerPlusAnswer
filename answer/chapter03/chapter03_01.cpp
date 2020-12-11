//
// Created by yingrushi on 2020/12/10.
//

/*
 * 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
 * 改程序使用下划线字符来知识输入位置。另外，使用一个const符号常量来表示转换因子。
 */

#include <iostream>
#include <cstdlib>

using namespace std;

const int factor = 12;

void heightTransfer(int height);

int main()
{
    int Height;//表示人的身高
    cout << "请输入身高_" << endl;
    cin >> Height;
    heightTransfer(Height);
}

void heightTransfer(int height)
{
    int foot;//英尺
    int inch;//英寸

    foot = height / factor;
    inch = height % factor;

    cout << foot << "英尺" << inch << "英寸" << endl;
}