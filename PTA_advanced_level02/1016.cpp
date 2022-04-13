#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<map>
using namespace std;
//�ο�����Ĵ���˼·�������£��գ�Сʱ������Ӧ�÷ֿ����룻������һ�����ͬʱΪ�˼�������ʱ��
//�����������������ǲ������00��00��00��ʱȻ������ķ����������Ǽ������
//�����ʱ�򲻽������������� ͬʱ��ͬ������İ�����ǰ��Ӷ��ں���map�����¼��Ӧ��
//inline��outline֮���ʱ��������
//ע��һ��Ҫmap<key,value>key��Ȼ�����ظ����������value��һ����������ô��ͬ��keyҲ
//���Դ�����value�����������Ǵ���
class customer
{

public:
	string name;
	int month,time,day,hour,minute;
	int status;

};
bool cmp(customer a, customer b)
{
	return a.name!=b.name?a.name<b.name:a.time<b.time;
}


double billFromZero(customer a, int toll[])
{
	double total = toll[a.hour] * a.minute + toll[24] * 60 * a.day;
	for (int i = 0;i < a.hour;i++)
		total += toll[i] * 60;
	return total /= 100.0;
}


int main()
{

	int toll[25]={0}, N;
	for (int i = 0;i < 24;i++)
	{
		scanf("%d", &toll[i]);
		toll[24] += toll[i];
	}
	cin >> N;
	vector<customer> v(N);
	
	for(int i=0;i<N;i++)
	{
		cin >> v[i].name;
		scanf("%d:%d:%d:%d", &v[i].month, &v[i].day, &v[i].hour, &v[i].minute);
		string temp;
		cin >> temp;
		if (temp == "on-line")
			v[i].status = 1;
		else
			v[i].status = 0;
		v[i].time = v[i].day * 24 * 60 + v[i].hour * 60 + v[i].minute;
	}
	
	sort(v.begin(), v.end(),cmp);
	map<string, vector<customer>> m;
	for (int i = 1;i < v.size();i++)
	{
		if (v[i].name == v[i - 1].name && v[i - 1].status == 1 && v[i].status == 0)
		{
			m[v[i - 1].name].push_back(v[i - 1]);
			m[v[i].name].push_back(v[i]);
		}
	}

	for (auto k : m)
	{
		vector<customer> temp = k.second;
		cout << k.first;
		double total = 0.0;
		printf(" %02d\n", temp[0].month);
		for (int j = 1;j < temp.size();j += 2)
		{
			double t = billFromZero(temp[j], toll) - billFromZero(temp[j - 1], toll);
			printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n",temp[j-1].day,temp[j-1].hour,temp[j-1].minute,temp[j].day,temp[j].hour,temp[j].minute,temp[j].time-temp[j-1].time,t);
			total += t;
		}
		printf("Total amount: $%.2f\n", total);
	}

	return 0;

}
