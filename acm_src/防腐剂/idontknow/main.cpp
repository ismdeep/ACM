#include <iostream>
using namespace std;

#define MOD 10007

typedef unsigned long long int longint;

int a, k;

longint iMap[40];

longint iAnswer = 0;


void iInit()//��ʼ����� imap����a��i�η�
{
    iMap[0] = 1;

    for (int i = 1; i < 40; i++)
    {
        iMap[i] = iMap[i-1] * a;
        iMap[i] = iMap[i] % MOD;
    }
}

int iFac(int k) // ������� log2(n)
{
    if (k < 40)
    {
        return iMap[k] % MOD;
    }
    else
    {
        if (k % 2 == 0)
        {
            return (iFac(k/2) * 2) % MOD;
        }
        else
        {
            return (iFac(k/2) * 2 + iMap[1]) % MOD;
        }
    }
}

int main()
{
    while (cin >> a >> k)
    {
        iInit();

        if (a == 1)
        {
            cout << k % MOD << endl;
        }
        else
        {
            if (k < 10)
            {
                iAnswer = iFac(k-1);//������k+1�ġ�������һ��һ����Ū�������ˡ������ʣ������Ҳ�������
                iAnswer *= a;
                iAnswer *= a;
                iAnswer -= a;
                iAnswer /= (a-1);
                iAnswer %= MOD;
                cout << iAnswer << endl;
            }
            else
            {
                iAnswer = iFac(k-10);
                for (int i = 0; i < 11; i++)
                {
                    iAnswer *= a;
                }
                iAnswer -= a;
                iAnswer /= (a-1);
                iAnswer %= MOD;
                cout << iAnswer << endl;
            }
        }
    }
    return 0;
}

// end
// ism
