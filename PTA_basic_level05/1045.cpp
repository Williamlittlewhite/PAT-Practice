//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////�뷨̫�����㷨ȫ����ʱ �ο���������Ż�һ��  ����ӵ�ע��������ɶҲû��� ҲҪ�������
//// ����һ��˼�� �������λ�ò��� ��ԭʼ������ߵ�����С���ұ� �������һ������Ԫ��˼�룡
////int main()
////{
////	int N;
////	long long int n,count=0;
////	vector<long long int> v,v1;
////	cin >> N;
////	int N1 = N;
////	while (N--)
////	{
////		cin >> n;
////		v.push_back(n);
////		v1.push_back(n);
////	}
////	for (int i = 0;i < v.size();i++)
////	{
////		for (int j = 0;j <= i;j++)
////		{
////			if (v[j] > v[i])
////			{
////				v1[i] = -1;count++;
////			}
////		}
////		for (int j = i + 1;j < v.size();j++)
////		{
////			if (v[j] < v[i])
////			{
////				v1[i] = -1;count++;
////			}
////		}
////	}
////	cout << N1-count << endl;
////	for (int i = 0;i < v.size();i++)
////	{	
////		if (count != 0)
////		{
////			if (v1[i] != -1)
////			{
////				cout << v1[i]<<" ";count--;
////			}
////		}
////		else
////		{
////			if (v1[i] != -1)
////			{
////				cout << v1[i];count--;
////			}
////		}
////
////	}
////
////	return 0;
////}
//int main()
//{
//	int N,max=0,count=0;
//	cin >> N;
//	vector<int> v0(N), v1(N),v(N);
//	for (int i = 0;i < N;i++)
//	{
//		cin >> v0[i];
//		v1[i] = v0[i];
//	}
//	sort(v1.begin(), v1.end());
//	for (int i = 0;i < N;i++)
//	{
//		if (v0[i] == v1[i] && v0[i] > max)
//			v[count++] = v0[i];
//		if (v0[i] > max)
//			max = v0[i];
//	}
//	cout << count << endl;
//	for (int j = 0;j < count;j++)
//	{
//		if (j == 0)
//			cout << v[j];
//		else
//			cout << " " << v[j];
//	}
//	cout << endl;
//	return 0;
//}