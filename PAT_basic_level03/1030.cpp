#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
//�����Լ���������Ȼ��ȷ ע�ⶨ���long int�����п��ܳ�����Χ,ע�������Ǹ��򵥵ķ��������������ʽ���
//int main()
//{
//	long int N, p,n;
//	cin >> N >> p;
//	vector<int> v;
//	while (N--)
//	{
//		cin >> n;
//		v.push_back(n);
//	}
//	sort(v.begin(), v.end());
//	int m, M,count,temp=0;
//	long int bound;
//	for (int i = 0;i < v.size();i++)
//	{
//		count = 0;
//		m = v[i];
//		bound = m * p;
//		for (int j = i;j < v.size();j++)
//		{
//			if (v[j] <= bound)
//				count++;
//			else
//				break;
//		}
//		if (count > temp)
//			temp = count;
//	}
//	cout << temp;
//	return 0;
//}

//�Ż�˫��ѭ��������ȫ��ͨ�����Ե�
#include <cstdio>
#include <algorithm>
#define MAXN 100001
using namespace std;
int main()
{
	int n;
	long p;
	scanf("%d%ld", &n, &p);
	long a[MAXN];
	for (int i = 0; i < n; i++) {
		scanf("%ld", &a[i]);
	}
	sort(a, a + n);//��������
	int max_coun = 1;//�����������Ԫ�ظ���������1��
	for (int i = 0; i < n; i++) {
		for (int j = i + max_coun; j < n; j++) {//���ֵ����Сֵλ�ü��ϵ�ǰ�����������Ԫ�ظ�������ʼ����
			if (a[j] <= a[i] * p) {//������������
				max_coun = j - i + 1;//�������Ԫ�ظ���
			}
			else {//������ֱ������ѭ����j���������ֵ����󣬸���������
				break;
			}
		}
	}
	printf("%d", max_coun);
	return 0;
}
