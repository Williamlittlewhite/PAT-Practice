//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<set>
//#include<algorithm>
//using namespace std;
//int N;
//bool visit[10001];
//vector<vector<int>> v;//�洢�ߣ��൱�ڶ�ά����
//vector<int> temp;///��ʱ�洢��ߵĽڵ�
//set<int> s; //set������û���ظ�Ԫ�أ���������Ĭ�ϴ�С����
////����Ƚϸ��ӣ�Ѱ��ͼ�Ƿ��ܹ�������ֻ��Ҫ����ͼ��dfs���ɣ�Ȼ��temp��ȡ�����εĽڵ�
////��סѰ��ͼ�����ֻ��Ҫ��dfs�ҵ���������ϣ�Ȼ��Ӽ���������һ�������Ǽ���dfs�õ���һ�����������
////��������������໥������Ǿ͵õ���������ļ��ϣ�
//int maxheight = 0;
//void dfs(int node, int height)
//{
//	if (height > maxheight)
//	{
//		maxheight = height;
//		temp.clear();
//		temp.push_back(node);
//	}
//	else if (height == maxheight)
//		temp.push_back(node);
//	visit[node] = true;
//	for (int i = 0;i < v[node].size();i++)
//	{
//		if(visit[v[node][i]]==false)
//			dfs(v[node][i], height + 1);
//	}
//}
//
//int main()
//{
//	scanf("%d", &N);
//	v.resize(N + 1);
//	int a, b,s1=0,cnt = 0;
//	for (int i = 0;i < N-1 ;i++)
//	{
//		scanf("%d %d", &a, &b);
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//
//	for (int i = 1;i <= N;i++)
//	{
//		if (visit[i] == false)
//		{
//			dfs(i, 1);
//			if (i == 1) {
//				if (temp.size() != 0) s1 = temp[0];
//				for (int j = 0;j < temp.size();j++)
//					s.insert(temp[j]);
//			}
//			cnt++;
//		}
//	}
//
//
//	if (cnt >= 2) {
//		printf("Error: %d components", cnt);
//	}
//	else
//	{
//		temp.clear();
//		maxheight = 0;
//		fill(visit, visit + 10001, false);
//		dfs(s1, 1);//����1ʱ��߸߶ȵĽڵ㣬���ѡһ����dfs���ҳ�������߸߶ȵĽڵ㣬һͷһβ�Ķ������
//		for (int i = 0;i < temp.size();i++)
//			s.insert(temp[i]);
//		for (auto it = s.begin();it != s.end();it++)
//			printf("%d\n", *it);
//	}
//	return 0;
//
//}