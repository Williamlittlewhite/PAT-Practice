#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<queue>
using namespace std;
//����ʹ�����ȶ���Ѹ����⣬���ȶ��б��뱣�ֶ��г���һ��ΪK��Ȼ�������С�ѵ�����ʱ����С
//����ʱ�䴰�� ע��greater��ӦС����!! push����Ӧ���ĺ��ʱ�䣬���������ʱ��С��
//�˿�����ʱ�� �򲻻���ʱ ����ͻ���ʱ ���ַ��������ж��Ƿ񵽴�8.00
class customer
{
public:
	int hour;
	int min;
	int seconds;
	int come;
	int time;
};
bool cmp(customer& a, customer& b)
{
	return a.come < b.come;
}


int main()
{
	int N, K;
	double total = 0.0;
	scanf("%d %d", &N, &K);
	vector<customer> v;
	for(int i=0;i<N;i++)
	{
		customer c;
		scanf("%d:%d:%d %d", &c.hour, &c.min, &c.seconds, &c.time);
		c.time =c.time*60;
		c.come = c.hour * 60 * 60 + c.min * 60 + c.seconds;
		if (c.come > 61200)
			continue;
		v.push_back(c);
	}

	sort(v.begin(), v.end(), cmp);
	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 1;i <= K;i++)
		q.push(28800);
	for (int i = 0;i < v.size();i++)
	{
		if (v[i].come >= q.top())
		{
			q.push(v[i].come + v[i].time);
			q.pop();
		}
		else
		{
			total += q.top() - v[i].come;
			q.push(q.top() + v[i].time);
			q.pop();
		}
	}
	if (v.size() >= 1)
		printf("%.1f", total / 60.0 /v.size());
	else
		printf("0.0");
	return 0;
}