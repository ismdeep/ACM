//project name:2012
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b && a+b)
    {
        int flag = true;
        
        //�ݴ������ a > b,����a b ��ֵ
        if(a > b)
        {
            int intTemp = a;
            a = b;
            b = intTemp;
        }
        
        //��ʼ�ж��Ƿ���� 40 41 44 49 ������
        if(a <= 40 && b>=40)
        {
            flag=false;
        }
        if(a <= 41 && b>=41)
        {
            flag=false;
        }
        if(a <= 44 && b>=44)
        {
            flag=false;
        }
        if(a <= 49 && b>=49)
        {
            flag=false;
        }
        
        //����ж�flag��ֵ
        if(flag)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<"Sorry"<<endl;
        }
        
    }
    
    return 0;
}
//end
//ism
/*40 41 44 49*/
