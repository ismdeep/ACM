#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

const int mod = 10007;

int Pow(int x,int y)  //��x^y
{
    if (y==1) return x%mod;
    if (y==0) return 1;
    int half =Pow(x,y/2);
    if (y&1) return half*half%mod*x%mod;
    return half*half%mod;
}

//2^1 + 2^2 + 2^3 = 2^1 + 2*(2^1+2^2) = (2^1 + 2*2^1)+2*2^2 kΪ����
//2^1 + 2^2 + 2^3 + 2^4 + 2^5 = 2^1 + 2^2 + 2^2*(2^1+2^2+2^3) = 2^1 + 2^2 +  2^2*(2^1+2^2) + 2^2*2^3 kΪ����
//2^1 + 2^2 + 2^3 + 2^4 = 2^1 + 2^2 + 2^2*(+2^1+2^2) kΪż��
int f(int a,int k) //����ʽ��ֵ
{
    if (k==1) return a%mod;
    int ccc=k/2;
    int half = f(a,ccc);
    if (k&1) //kΪ���� ������������2 ���������Ķ��������һλ��1 ��ʮ�����ܲ��ܱ�10���������һλ�ǲ���0һ������
    {
        int ooo=Pow(a,ccc); //������
        return ((half*ooo%mod + half)%mod + ooo*ooo%mod*a%mod)%mod;
    }

    return (half*Pow(a,ccc)%mod + half)%mod; //Pow(a,ccc)Ϊ������
}

int main()
{
    int a,k;
    while (scanf("%d%d",&a,&k)!=EOF)
    {
        printf("%d\n",f(a,k));
    }
    return 0;
}
