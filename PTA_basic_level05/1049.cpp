//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////˼·�Ƚϼ� ��������ʱ �ο��������Ľ� �ҹ��� ���ڱ�������ÿ�������ֵĴ���һ����
////����*(������ߵ�������Ŀ+1)*(�����ұߵ�������Ŀ+1)
////int main()
////{
////	int N;
////	cin >> N;
////	vector<double> v;
////	while (N--)
////	{
////		double temp;
////		cin >> temp;
////		v.push_back(temp);
////	}
////	double sum=0;
////	for(int i=0;i<v.size()-1;i++)
////	{
////		sum += v[i];
////		for (int j = i+1;j < v.size();j++)
////		{
////			for(int k=i;k<=j;k++)
////			sum +=v[k];
////		}
////		
////	}
////	sum += v[v.size() - 1];
////	printf("%.2lf", sum);
////	return 0;
////
////}
//int main()
//{
//	int N;
//	double temp;
//	long long sum=0;
//	cin >> N;
//	for (int i = 0;i < N;i++)
//	{
//		cin >> temp;
//		sum += (long long)(temp * 1000) * (N - i)*(i + 1);
//	}
//	printf("%.2lf", sum / 1000.0);
//}