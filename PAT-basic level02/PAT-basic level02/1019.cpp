//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<math.h>
////�����ѵ�����6174�������ӣ����ѭ��ʹ��do while������while�������vector������
//using namespace std;
////bool cmp(int a, int b)
////{
////	return a > b;
////}
//int main()
//{
//	int N,i=0;
//	cin >> N;
//	vector<int> v;
//	v.push_back(N / 1000 % 10);
//	v.push_back(N / 100 % 10);
//	v.push_back(N / 10 % 10);
//	v.push_back(N % 10);
//	sort(v.begin(), v.end());
//	if(v[0]==v[1]&&v[1]==v[2]&&v[2]==v[3])
//		cout << v[0] << v[1] << v[2] << v[3] << " - " << v[0] << v[1] << v[2] << v[3] << " = " << "0000";
//	else {
//		int MAX = v[0] + v[1] * 10 + v[2] * 100 + v[3] * 1000;
//		int MIN = v[3] + v[2] * 10 + v[1] * 100 + v[0] * 1000;
//		do
//		{
//			MAX = v[0] + v[1] * 10 + v[2] * 100 + v[3] * 1000;
//			MIN = v[3] + v[2] * 10 + v[1] * 100 + v[0] * 1000;
//			cout << v[3] << v[2] << v[1] << v[0] << " - " << v[0] << v[1] << v[2] << v[3] << " = ";
//			N = MAX - MIN;
//			v[0]=(N / 1000 % 10);
//			v[1]=(N / 100 % 10);
//			v[2]=(N / 10 % 10);
//			v[3]=(N % 10);
//			cout << v[0] << v[1] << v[2] << v[3] << endl;
//			sort(v.begin(), v.end());
//		} 
//		while (MAX - MIN != 6174);
//	}
//
//	
//	
//
//
//	return 0;
//}