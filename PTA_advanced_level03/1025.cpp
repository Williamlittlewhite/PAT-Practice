#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
//ע�����ã�:�﷨�Ծֲ����������Ϣ���д��� ѧ����һ���ܼ���  �������������һ�£�������ǵ�ǰ����ֵ��1������뷨����Ҫ
//����������ͬ������ʱ��ǳ�����Ҫ
struct student {
	string id;
	int grade;
	int location;
	int locarank, finrank;
};
bool cmp(student& a,student& b ) {
	return a.grade!=b.grade?a.grade > b.grade: a.id < b.id;
}
int main()
{
	int N, K, sum = 0;
	vector<student> fin;
	scanf("%d", &N);
	for (int i = 0;i < N;i++)
	{
		scanf("%d", &K);
		vector<student> v(K);
		sum += K;
		for (int j = 0;j < K;j++)
		{
			struct student s;
			cin >> s.id >> s.grade;
			s.location = i+1;
			v[j] = s;
		}
		sort(v.begin(), v.end(), cmp);
		v[0].locarank = 1;
		fin.push_back(v[0]);
		for (int j = 1;j < K ; j++) {
			v[j].locarank = (v[j].grade == v[j - 1].grade) ? (v[j - 1].locarank) : (j + 1);
			fin.push_back(v[j]);
		}
		
	}
	sort(fin.begin(), fin.end(), cmp);
	fin[0].finrank = 1;
	for(int j=1;j<fin.size();j++)
		fin[j].finrank = (fin[j].grade == fin[j - 1].grade) ? (fin[j - 1].finrank) : (j + 1);
	printf("%d\n", sum);
	for (int i = 0;i < fin.size();i++)
		cout << fin[i].id << " " << fin[i].finrank << " " << fin[i].location << " " << fin[i].locarank << endl;



	return 0;
}