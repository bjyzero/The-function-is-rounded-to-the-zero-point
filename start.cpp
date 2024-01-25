#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string str;
    getline(cin, str);
    double a = 0.0, b = 0.0;

    // 在字符串中从前往后提取数字
    for (int i = 0; str[i] != 'x'; ++i)
    {
        a = a * 10 + (str[i] - '0');
    }

    // 注意：在字符串中从后往前提取数字！
    // 这个相比提取过程b/10结束后*10^n(n是位数)更快
    // 方法一  -->主推
    int mult = 1;
    for (int j = str.length() - 1; str[j] != '-'; --j)
    {
        b += (str[j] - '0') * mult;
        mult *= 10;
    }
    // 方法二
    //  int bit=0;
    //  for (int j = str.length() - 1; str[j] != '-'; --j,++bit)
    //  {
    //      b=b/10+(str[j]-'0');
    //  }
    //  while(--bit)
    //  b*=10;

    double res = sqrt(b / a);
    //重点：按照题意，结果应当为向下取整
    res=floor(res*10000)/10000;
    //如果是向上取整应当使用ceil
    //ceil(1.3)=2.0 , floor(1.6)=1.0

    //固定位数输出  在c++中实数默认输出六位有效数字(包括整数部分)
    cout << fixed << setprecision(4) << res << '\n';
    
    return 0;
}