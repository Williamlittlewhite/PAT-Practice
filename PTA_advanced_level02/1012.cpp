#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
//������������ȷ��exist[id]=i+1����Ϊ0ʱ����id���ڣ����������ж�Ӧ��ѧ�����Ϊexist[id]-1
//��������һ�µ�ԭ����Ϊ��id���ڷ����ж�


struct student
{
	int studentnumber,best;
	double Grade[4],rank[4];
};
int flag = -1,exist[1000000];
bool cmp(student& a, student& b)
{
	return a.Grade[flag] > b.Grade[flag];
}
int main()
{
	int N, M,id[10000];
	scanf("%d %d", &N, &M);

	vector<student> v;
	while (N--)
	{
		student temp;
		cin >> temp.studentnumber >> temp.Grade[1] >> temp.Grade[2] >> temp.Grade[3];
		temp.Grade[0] = (temp.Grade[1] + temp.Grade[2] + temp.Grade[3]) / 3.0+0.5;
		v.push_back(temp);
	}

	for (flag = 0;flag <= 3;flag++)
	{
		sort(v.begin(), v.end(), cmp);
		v[0].rank[flag] = 1;
		for (int i = 1;i < v.size();i++)
		{
			v[i].rank[flag] = i+1;
			if (v[i].Grade[flag] == v[i - 1].Grade[flag])
				v[i].rank[flag] = v[i - 1].rank[flag];
		}
	}

	for (int i = 0;i < v.size();i++)
	{
		exist[v[i].studentnumber] = i + 1;
		v[i].best = 0;
		int minn = v[i].rank[0];
		for (int j = 1;j <= 3 ;j++)
		{
			if (v[i].rank[j] < minn)
			{
				minn = v[i].rank[j];
				v[i].best = j;
			}
		}
	}
	//����rank[0,1,2,3]�ֱ��¼ÿ��ѧ����ACME�ɼ���������0123��ACMEһһ��Ӧ������best���ܹ�
	//����ACME��˳�������Ӧ����ȷ�������ļ�¼��Ϊ���ϸ�С�� ���������������൱�ڲ�����ȡ��С������˳��	
	char c[5] = { 'A','C','M','E' };
	for (int i = 0;i < M ;i++)
	{
		scanf("%d", &id[i]);
	}
	for (int i = 0;i < M;i++)
	{
		int temp = exist[id[i]];
		if (temp) {
			int best = v[temp - 1].best;
			printf("%.0f %c\n", v[temp - 1].rank[best], c[best]);
		}
		else
			printf("N/A\n");
	}
	
	return 0;
}