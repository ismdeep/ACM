//project name:2021
//Author:����ɱ��
//Creat Date & Time:Fri Apr 13 13:50:38 2012

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    while(cin>>n && n)
    {
        int count=0;
        
        while(n--)
        {
            int money;
            cin >> money;
            //100Ԫ��50Ԫ��10Ԫ��5Ԫ��2Ԫ��1Ԫ���֡�
            while(money >= 100)
            {
                money = money - 100;
                count++;
            }
            
            while(money >= 50)
            {
                money = money - 50;
                count++;
            }
            
            while(money >= 10)
            {
                money = money - 10;
                count++;
            }
            
            while(money >= 5)
            {
                money = money - 5;
                count++;
            }
            
            while(money >= 2)
            {
                money = money - 2;
                count++;
            }
            
            while(money >= 1)
            {
                money = money - 1;
                count++;
            }
            
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}
//end
//ism
