//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<map>
//#include<set>
//#include<string>
//#include<algorithm>
//using namespace std;//���һ�����ڰ���ͷ�ļ���ĵ�һ�仰����
////����ע���ѵ�������map�����ԣ�������python�е��ֵ����洢��ͬʱset���Ͼ����Զ�����Ĺ��ܣ����Լ�������һ����
////map.find���û�ҵ��᷵��map.end�ĵ�����,�����ж��Ƿ����ҵ���Ӧ��Ԫ��
////���һ������������ ѧ������while(cin>>string) getchar()!="\n"�Ľṹʹ�����еĵ��ʶ����뵽��������
////getline����ָ����ȡ������ָ��ʱ���ȡ���س�������ע��ǰ��س���һ��Ҫ������ſ����ã����ĺô����ǿ��Կո񵱳�һ�����ַ���
//int N,M,id,number;
//string ttitle, tauthor, tkeywords, tpub, tyear,temp;
//map<string, set<int>> title, author, keywords, pub, year;
//void query(map<string, set<int>>& m, string& s)
//{
//	if (m.find(s) != m.end())
//	{
//		for (auto it = m[s].begin();it != m[s].end();it++)
//			printf("%07d\n", *it);
//	}
//	else
//		printf("Not Found\n");
//}
//
//
//int main()
//{
//	scanf("%d", &N);
//	for (int i = 0;i < N;i++)
//	{
//		scanf("%d\n", &id);
//		getline(cin, ttitle);
//		title[ttitle].insert(id);
//		getline(cin, tauthor);
//		author[tauthor].insert(id);
//		while (cin>>tkeywords)
//		{
//			char c = getchar();
//			keywords[tkeywords].insert(id);
//			if (c == '\n')
//				break;
//		}
//		getline(cin, tpub);
//		pub[tpub].insert(id);
//		getline(cin, tyear);
//		year[tyear].insert(id);
//	}
//	
//	scanf("%d", &M);
//	vector<string> v;
//	vector<int> v1;
//	for (int i = 0;i < M;i++)
//	{
//		scanf("%d: ", &number);
//		getline(cin, temp);
//		v.push_back(temp);
//		v1.push_back(number);
//	}
//
//
//	for (int i = 0;i < v.size();i++)
//	{
//		temp = v[i];
//		number = v1[i];
//		cout << number << ": " << temp << endl;
//		if (number == 1) query(title, temp);
//		else if (number == 2) query(author, temp);
//		else if (number == 3) query(keywords, temp);
//		else if (number == 4) query(pub, temp);
//		else if (number == 5) query(year, temp);
//	}
//	return 0;
//}