//project name:2016
//Author:����ɱ��

#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n)
    {
        int *a = new int[n];
        
        //��������
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        int flag = 0;
        for(int i = 1; i < n; i++)
        {
            if(a[flag] > a[i])
            {
                flag = i;
            }
        }
        
        //��������
        int intTemp;
        intTemp = a[flag];
        a[flag] = a[0];
        a[0]    = intTemp;
        
        //��������
        for(int i = 0; i < n-1; i++)
        {
            cout << a[i] << " ";
        }
        cout<< a[n-1] << endl;
        
    }
    return 0;
}
//end
//ism
