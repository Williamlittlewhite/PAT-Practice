//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////���Ⱪ������������� ���ǻᳬʱ��˲ο�������д���� ע����ÿ�μ����result��ȡ�� 
//// ���ҵ��� PATҲҪȡ����������45����ȥ
////int main()
////{
////	string a;
////	int count = 0;
////	cin >> a;
////	for (int i = 0;i < a.size();i++)
////	{
////		if (a[i] == 'P')
////		{
////			for (int j = i;j < a.size();j++)
////			{
////				if (a[j] == 'A')
////				{
////					for (int k = j;k < a.size();k++)
////					{
////						if (a[k] == 'T')
////							count++;
////					}
////				}
////			}
////		}
////	}
////	cout << count % 1000000007;
////
////
////	return 0;
////}
//
//int main()
//{
//	string s;
//	cin >> s;
//	int countT=0,countP=0,result=0;
//	for (int i = 0;i < s.size();i++)
//		if (s[i] == 'T')
//			countT++;
//	for (int j = 0;j < s.size();j++)
//	{
//		if (s[j] == 'T')
//			countT--;
//		if (s[j] == 'P')
//			countP++;
//		if (s[j] == 'A')
//			result = (result+(countT * countP) % 1000000007)% 1000000007;
//	}
//	cout<< result;
//	return 0;
//};
