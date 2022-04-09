#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

bool visit[1001];
int AdjMatrix[1001][1001];
int N;
//�ο�����
//����dfs����ĳ���ڵ㲢�ѽڵ���Ϊtrue Ȼ����˵����һ����ͨ���� �������нڵ�
//ȷ�����ڵ���Ϊtrue �����ͨ���� Ȼ�������ͨ����-1 
//��Ϊ��a�������������ͨ������Ҫ��Ϊ��ͨͼ��ʱ��ֻ��Ҫ���a-1��·�ߣ�
//��������������
//ֻҪ���ĳ������Ϊtrue��ô������ȱ����;��Բ�������ó��У��൱�ڸýڵ㲻�ᱻ����������
void dfs(int node)
{
	visit[node] = true;
	for (int i = 1;i <= N;i++)
	{
		if(visit[i]==false&&AdjMatrix[node][i]==1)
		dfs(i);
	}
}

int main()
{
	int M, K,a;
	cin >> N >> M >> K;

	while (M--)
	{
		int temp1, temp2;
		cin >> temp1 >> temp2;
		AdjMatrix[temp1][temp2] = AdjMatrix[temp2][temp1] = 1;
	}

	for (int i = 0;i < K;i++)
	{
		fill(visit, visit + 1001, false);
		scanf("%d", &a);
		int cnt = 0;
		visit[a] = true;
		for(int j=1;j <= N;j++)
		{
			if (visit[j] == false)
			{
				dfs(j);
				cnt++;
			}
				
		}
		printf("%d\n", cnt - 1);
	}
	return 0;
}