#include <iostream>
#include<math.h>
using namespace std;
//�����ص������ж�����Ҫ��sqrt�����������׳�ʱ��������Ϊ������жϲ�����ע������return 1 ��λ�ã����׷���
int isprime(int& a)
{
	for (int i = 2;i <= sqrt(a);i++)
	{
		if (a % i == 0)
		{
			return 0;
		}		
	}
	return 1;
	}
int main()
{
	int i, j = 0,l,k,N,count=0;
	cin >> N;
	int a[100000];
	for (i = 2;i <= N;i++)
		if (isprime(i))
			a[j++] = i;
		else
			continue;
	for (k = 0;k < j - 1;k++)
	{
		for (l = k;l < j;l++)
		{
			if (a[l] - a[k] == 2)
			{
				count++;
				break;
			}
		}
	}
		
		cout << count;
	return 0;

}
