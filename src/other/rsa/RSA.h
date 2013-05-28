//project name:rsa ( rsa )
//Author:����ɱ��
//Creat Date & Time:Wed Apr 18 18:38:02 2012

#include <iostream>
#include "Integer.h"
#include "gcd.h"
#include "KU.h"
#include "KR.h"
using namespace std;

/****************************class RSA******************************/
class RSA/*RSA*/
{
private:
    KU ku;
	KR kr;
	long long int plaintext;/*����*/
	long long int ciphertext;/*����*/
public:
    void Decode();/*���ܺ���*/
	void Encode();/*���ܺ���*/
	
	//������������ֵ��һЩset����
	void setKU(int,int);
	void setKR(int,int,int);
	void setPlaintext(long long int);
	void setCiphertext(long long int);
	
	//output for test
	//������Դ���
	void outputForTest();
	
};

//void setKU(int e, int n)
void RSA::setKU(int e, int n)
{
    this->ku.e = e;
	this->ku.n = n;
}
//void setKR(int d, int p, int q)
void RSA::setKR(int d, int p, int q)
{
    this->kr.d = d;
	this->kr.p = p;
	this->kr.q = q;
}
//void setPlaintext(int plaintext)
void RSA::setPlaintext(long long int plaintext)
{
    this->plaintext = plaintext;
}
//void setCiphertext(int ciphertext)
void RSA::setCiphertext(long long int ciphertext)
{
    this->ciphertext = ciphertext;
}
//void outputForTest()
void RSA::outputForTest()
{
    cout<<"ku"<<endl;
	cout<<" "<<"e:"<<ku.e<<endl;
	cout<<" "<<"n:"<<ku.n<<endl;
	
	cout<<"kr"<<endl;
	cout<<" "<<"d:"<<kr.d<<endl;
	cout<<" "<<"p:"<<kr.p<<endl;
	cout<<" "<<"q:"<<kr.q<<endl;
	
	cout<<"plaintext:";
	cout<<" "<<plaintext<<endl;
	
	cout<<"ciphertext:";
	cout<<" "<<ciphertext<<endl;
	
}

//void Decode():���ܺ��� plainetext to ciphertext
void RSA::Decode()
{
    ku.n = kr.p * kr.q;/*������*/
	int phiN;
	phiN = (kr.p-1)*(kr.q-1);
	
	int *mapE;//����һ�����飬���e��
	mapE = new int[phiN];//phiN�����֡�
	int top_mapE = -1;//mapE[] ���Ͻ�
	
	for(int i = 2; i < phiN; i++)
	{
	    if(gcd(i,phiN)==1)
		{
		    top_mapE++;
			mapE[top_mapE] = i;
		}
	}
	
	// output for test :
	for(int i = 0; i <= top_mapE; i++)
	{
	    cout << mapE[i] << " " << endl;
	}
	
	delete[] mapE;
}

//void Encode():���ܺ��� ciphertext to plaintext
void RSA::Encode()
{

}

//end
//ism
