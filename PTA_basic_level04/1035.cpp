#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//������ο����� ѧ������flag=1��0�ҵ�ʹ���������򵽶�Ӧλ��
int main()
{
	int N;
	cin >> N;
	int a[100], b[100],i,j;
	for (int i = 0;i < N;i++)
		cin >> a[i];
	for (int i = 0;i < N;i++)
		cin >> b[i];
	for (i = 0; i < N - 1 && b[i] <= b[i + 1];i++);
	for (j = i + 1;j < N && b[j] == a[j];j++);
	if (j == N)
	{
		cout << "Insertion Sort" << endl;
		sort(a, a + i + 2);
	}
	else
	{
		cout << "Merge Sort" << endl;
		int k=1,flag = 1;
		while (flag)
		{
			flag = 0;
			for (i = 0;i < N;i++)
				if (a[i] != b[i])
					flag = 1;
			k = k * 2;
			for (i = 0;i < N / k;i++)
				sort(a + i * k, a + (i + 1) * k);
			sort(a + i * k, a + N);
		}
	}
	for (j = 0;j < N;j++)
	{
		if (j != 0) cout << " ";
		printf("%d", a[j]);
	}
	return 0;
}