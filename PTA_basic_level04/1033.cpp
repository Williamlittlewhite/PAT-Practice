#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//����ע���һ��Ϊ���е����� �����Ҫʹ��getline���������ַ��� tolowerֻ�������ĸʹ��
//���Ե�4һֱ��ͨ�� �벻ͨ
int main()
{
	string s1, s2;
	string helps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	getline(cin,s1);
	for (auto s : s1)
	{
		if(s>='A'&&s<='Z')
			s1 += tolower(s);
	}
	for (auto s : s1)
	{
		if (s == '+')
			s1 += helps;
	}
	getline(cin, s2);
	for (auto s : s2)
	{
		if (s1.find(s) == string::npos)
			cout << s;
	}

	cout << endl;
	return 0;
}
//1033
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdlib.h>
//#include<set>
//#include<cctype>
//#include<string>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	set<char>a;
//	string s;
//	getline(cin, s);
//
//	for (int i = 0;i < s.size();i++)
//	{
//		if (s[i] == '+')
//			for (int j = 'A'; j <= 'Z'; j++)
//			{
//				a.insert(j);
//			}
//		if (isupper(s[i]))
//			a.insert(tolower(s[i]));
//		a.insert(s[i]);
//	}
//	getline(cin, s);
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (a.find(s[i]) == a.end())
//			cout << s[i];
//	}
//	cout << endl;
//
//
//	system("pause");
//	return 0;
//}


