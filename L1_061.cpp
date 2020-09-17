/*L1-061 新胖子公式 (10 分)*/
#include <iostream>
using namespace std;
int main()
{
    double gao, zhong;
    cin >> zhong >> gao;
    double shu = zhong * 1.0 / (gao * gao);
    printf("%.1f\n", shu);
    if (shu > 25)
        cout << "PANG";
    else
        cout << "Hai Xing";
}