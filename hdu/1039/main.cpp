#include <iostream>
using namespace std;

int main(){
    string str;
    while(cin>>str&&str!="end"){
        bool judge(string);
        if(judge(str)){
            cout<<"<"<<str<<"> is acceptable."<<endl;
        }
        else{
            cout<<"<"<<str<<"> is not acceptable."<<endl;
        }
    }
    return 0;
}

//////////////////////////////////////////////////////////////
bool judge(string s){
    bool yes=true;
    
    //�ж��Ƿ���Ԫ����ĸ
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    if(!count){
        yes=false;
    }
    
    
    //�жϡ�����Ϊ��������Ԫ��������Ϊ��������������
    int count_vowel,count_consonant;
    count_vowel=0;count_consonant=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count_vowel++;
            count_consonant=0;
        }
        else{
            count_consonant++;
            count_vowel=0;
        }
        if(count_vowel>=3||count_consonant>=3){
            yes=false;
            break;
        }
    }
    
    //�жϡ�������������ͬ��ĸ��
    char pre=s[0];
    for(int i=1;s[i]!='\0';i++){
        if(s[i]==pre){
            yes=false;
            if(pre=='0'||pre=='e'){
                yes=true;
            }
        }
        pre=s[i];
    }
    
    
    return yes;
}
//end
//ism
