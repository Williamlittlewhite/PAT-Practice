//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////����Ƚϼ� ѧ��getline(cin,s)���׵İ�һ�仰�ϲ���һ���ַ��� ���ڲ����ǿո�ʮ�ֺ���
//int main()
//{
//	string s;
//	int count[26]={0};
//	getline(cin, s);
//	for (int i = 0;i < s.size();i++)
//	{
//		if (s[i] >= 'A' && s[i] <= 'Z')
//			s[i] = s[i] - 'A' + 'a';
//		if (s[i] >= 'a' && s[i] <= 'z')
//			count[s[i] - 'a']++;
//	}
//	int temp=0;
//	for (int j = 0;j < 26;j++)
//		if (count[j] > temp)
//			temp = count[j];
//	for (int j = 0;j < 26;j++)
//		if (count[j] == temp)
//		{
//			char b = 'a' + j;
//			cout << b << " " << temp;
//			break;
//		}
//	return 0;
//	}