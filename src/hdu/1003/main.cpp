#include <iostream>
using namespace std;

class node{
public:    
    int number;
    int begin;
    int end;
};

int main(){
    int t;
    int count=0;
    cin>>t;
    while(t--){
        //����м�Ŀհ���
        if(count!=0){cout<<endl;}count++;
        
        int n;
        
        cin>>n;
        node *a=new node[n+1];
        
        //��������
        for(int i=1;i<=n;i++){
            cin>>a[i].number;
        }
        
        //��ʼ����
        a[0].number=-1;
        for(int i=1;i<=n;i++){
            if(a[i-1].number<0){
                a[i].number=a[i].number;
                a[i].begin=i;
                a[i].end=i;
            }
            else{
                if((a[i-1].number+a[i].number)<0){
                    a[i].begin=i;
                    a[i].end=i;
                }
                else{
                    a[i].number=a[i].number+a[i-1].number;
                    a[i].begin=a[i-1].begin;
                    a[i].end=i;
                }
            }
        }
        
        //��ʼѰ������
        int flag=1;
        for(int i=2;i<=n;i++){
            if(a[i].number>a[flag].number){
                flag=i;
            }
        }
        
        cout<<"Case "<<count<<":"<<endl;
        cout<<a[flag].number<<" "<<a[flag].begin<<" "<<a[flag].end<<endl;
        
    }
    
    return 0;
}
//end
//ism
