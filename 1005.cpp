#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
using namespace std;
//ע�⴦��������� ������Ϊ0�����
string checklist[10] = {"zero","one","two","three","four","five","six","seven","eight","nine" };

int main()
{
	string s;
	cin >> s;
	vector<int> v;
	if (s == "0")
	{
		cout << "zero";
		return 0;
	}
	long long sum = 0;
	for (int i = 0;i < s.length();i++)
		sum += s[i] - '0';
	while (sum)
	{
		v.push_back(sum % 10);
		sum /= 10;
	}
	int temp = v.size() - 1;
	cout << checklist[v[temp]];

	for (int i = v.size() - 2;i >= 0;i--)
		cout <<" "<< checklist[v[i]];

}