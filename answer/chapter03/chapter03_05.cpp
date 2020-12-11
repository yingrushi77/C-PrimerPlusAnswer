//
// Created by yingrushi on 2020/12/11.
//
/*
 * 编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。
 * 将这些信息存储在long long变量中，并让程序显示美国（或其他国家）的人口占全球人口的百分比。
 * 该程序的输出应与下面类似：
 * Enter the world's population:6898758899
 * Enter the population of the US:310783781
 * The population of the US is 4.50492% of the world population.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void populationOccupy(long long w_population,long long u_population);

int main()
{
    long long world_population;
    long long US_population;
    cout << "Enter the world's population:" << endl;
    cin >> world_population;
    cout << "Enter the population of the US:" << endl;
    cin >> US_population;

    populationOccupy(world_population,US_population);

    return 0;

}

void populationOccupy(long long w_population,long long u_population)
{
    double populationRate = u_population * 1.0 / w_population * 100;
    cout << "The population of the US is " << populationRate << "% of the world population." << endl;
}