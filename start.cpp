#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string str;
    getline(cin, str);
    double a = 0.0, b = 0.0;

    // ���ַ����д�ǰ������ȡ����
    for (int i = 0; str[i] != 'x'; ++i)
    {
        a = a * 10 + (str[i] - '0');
    }

    // ע�⣺���ַ����дӺ���ǰ��ȡ���֣�
    // ��������ȡ����b/10������*10^n(n��λ��)����
    // ����һ  -->����
    int mult = 1;
    for (int j = str.length() - 1; str[j] != '-'; --j)
    {
        b += (str[j] - '0') * mult;
        mult *= 10;
    }
    // ������
    //  int bit=0;
    //  for (int j = str.length() - 1; str[j] != '-'; --j,++bit)
    //  {
    //      b=b/10+(str[j]-'0');
    //  }
    //  while(--bit)
    //  b*=10;

    double res = sqrt(b / a);
    //�ص㣺�������⣬���Ӧ��Ϊ����ȡ��
    res=floor(res*10000)/10000;
    //���������ȡ��Ӧ��ʹ��ceil
    //ceil(1.3)=2.0 , floor(1.6)=1.0

    //�̶�λ�����  ��c++��ʵ��Ĭ�������λ��Ч����(������������)
    cout << fixed << setprecision(4) << res << '\n';
    
    return 0;
}