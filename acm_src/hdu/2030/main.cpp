//project name:2030 ����ͳ��
//Author:����ɱ��
//Creat Date & Time:Sat Apr 14 16:35:55 2012

#include <iostream>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    
    cin.get();
    
    while(t--)
    {
        char ch;
        int count = 0;
        
        while(cin.get(ch) && ch != '\n')
        {
            if(ch < 0)
            {
                count++;
                cin.get(ch);
            }
        }
        
        cout<< count << endl;
    }
    return 0;
}
//end
//ism
/*
���������l veһ����,�Ͱ���Ϣ�������ߵ�20����,���������10����,�������Ը����4��14����ʵ��,������,��Ϊ��Ҫ�Ҹ�,Ҳ���һ�һ����,������    
*/
