#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<queue>
using namespace std;
const int inf = 9999999;
int minNeed = inf, minBack = inf;
bool visit[501] = { false };
int WorkStationCapacity[501];
int C, N, S, M, T[501][501], dis[501];
vector<int> pre[501],temppath,path;
//�����ص�dijkstra�㷨��ʹ�ã�������������ӽṹ�ſ��Խ�����⣬�����ڱ���Ƚϸ��ӵ�
//�����˵����Ҫ��������dfs���н�һ�����,��dijkstra�㷨ԭ������·����ȵ�ʱ�����κζ���������ѡ��洢��
//�ڵ���ǰ������֮�У���������dfs���������ҵ������·����Ȼ���������ѡ��ǡ����·�ߵõ����������
//����һ���漰�ݹ��˼��(dfs) bfs�漰���е�˼��
void dfs(int s) {
	temppath.push_back(s);
	if (s == 0) {
		int need = 0, back = 0;
		for (int i = temppath.size() - 2;i >= 0;i--)
		{
			int id = temppath[i];
			if (WorkStationCapacity[id] > 0)
				back += WorkStationCapacity[id];
			else
			{
				if (back > (0 - WorkStationCapacity[id]))
					back += WorkStationCapacity[id];
				else
				{
					need += ((0 - WorkStationCapacity[id]) - back);
					back = 0;
				}
			}
		}
			if (need < minNeed)
			{
				minNeed = need;
				minBack = back;
				path = temppath;
			}
			else if (need == minNeed && back < minBack)
			{
				minBack = back;
				path = temppath;
			}
			temppath.pop_back();
			return;
	}
		for (int i = 0;i < pre[s].size();i++)
			dfs(pre[s][i]);     //�����ǰ�ÿһ���Ⱦ����·����������
		temppath.pop_back();
}
int main()
{

	fill(T[0], T[0] + 501 * 501, inf);
	fill(dis, dis + 501, inf);

	scanf("%d %d %d %d", &C, &N, &S, &M);
	for (int i = 1;i <= N;i++)
	{
		scanf("%d", &WorkStationCapacity[i]);
		WorkStationCapacity[i] = WorkStationCapacity[i] - C / 2;
	}

	while (M--)
	{
		int i = 0, j = 0;
		scanf("%d %d", &i, &j);
		scanf("%d", &T[i][j]);
		T[j][i] = T[i][j];
	}
	dis[0] = 0;

	for (int i = 0;i <= N;i++)
	{
		int u = -1;int minn = inf;
		for (int j = 0;j <= N;j++)
		{
			if (visit[j] == false && dis[j] < minn)
			{
				minn = dis[j];
				u = j;
			}
		}

		if (u == -1)break;
		visit[u] = true;

		for (int v = 0;v <= N;v++)
		{
			if (visit[v] == false && T[u][v] != inf) {
				if (dis[u] + T[u][v] < dis[v])
				{
					dis[v] = dis[u] + T[u][v];
					pre[v].clear();
					pre[v].push_back(u);
				}
				else if (dis[u] + T[u][v] == dis[v])
					pre[v].push_back(u);
			}
		}
	}

	dfs(S);
	printf("%d ", minNeed);
	for (int i = path.size() - 1;i >= 0;i--)
	{
		if (i != 0)
			printf("%d->", path[i]);
		else
			printf("%d", path[i]);
	}
	printf(" %d", minBack);
	return 0;
}
