#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
//ѧ��isdigit�ж�һ���ַ��Ƿ�������,ѧ��auto����ȷ������  ѧ�����������itȡ������
//ѧ��str.rbegin()��Str.rend()����������  max_element()ȡ����������Χ����ӦԪ�ض�Ӧ�ĵ�����
long long convert(string& a, long long& n)
{
	long long sum = 0;
	int temp,cnt=0;
	for (auto it = a.rbegin();it < a.rend();it++)
	{
		temp = isdigit(*it) ? (*it - '0') : (*it - 'a' + 10);
		sum += temp*pow(n,cnt);
		cnt++;
	}
	return sum;
}
long long find_radix(string& a, long long num)
{
	char it = *max_element(a.begin(), a.end());
	long long low = (isdigit(it) ? it - '0' : it - 'a' + 10) + 1;
	long long high = max(low, num);
	while (low <= high)
	{
		long long mid = (low + high) / 2;
		long long t = convert(a, mid);
		if (t<0 || t>num)high = mid - 1;
		else if (t == num) return mid;
		else low = mid + 1;
	}
	return -1;
}



int main()
{
	string N1, N2;
	long long tag, radix,result_radix;
	cin >> N1 >> N2>>tag>>radix;
	result_radix = (tag == 1) ? find_radix(N2, convert(N1, radix)) : find_radix(N1, convert(N2, radix));
	if (result_radix == -1)
		cout << "Impossible";
	else
	{
		cout << result_radix;
	}
		
	return 0;
}