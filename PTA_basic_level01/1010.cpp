#define _CRT_SECURE_NO_DEPRECATE
#include<cstdio>
#include<iostream>
using namespace std;
//����ע��-2 0��һ��û����� Ҳ����ϵ����Ϊ0 ָ��Ϊ0��ʱ�򲻽������
//ע��0����ʽ��� 0 0 ����������ע�⡰�����ʽ����ָ����ϵ������ 0�����Ǳ�ʾΪ 0 0���ĺ����ǣ��������ֻ�г�����󵼺�Ľ��ֻ��0 0����ô���������ʽΪ�����ʽ����Ҫ���
class Item
{
public:
	int Coef;
	int Exef;
	Item(int& a, int& b)
	{
		Coef = a;
		Exef = b;
	};
	void Caculate()
	{
		static int isprint = 0;
		if (this->Coef != 0 && this->Exef==0)
			;
		else
		{
			this->Coef = this->Coef * this->Exef;
			this->Exef = this->Exef - 1;
			if (this->Coef == 0);
			else
			{
				if (isprint != 0)
					printf(" ");
				cout <<this->Coef<< " "<<this->Exef ;
					isprint++;
			}
				
		}
	
	}
};
int main()
{
	int a, b,k=0;
	while (scanf("%d %d", &a, &b)!=EOF)
	{
		k++;
		Item c(a, b);
		c.Caculate();	
	}
	if (k == 1 && b == 0)
		printf("0 0");
	return 0;
}