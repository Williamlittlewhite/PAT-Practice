#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
//̰���㷨��������к� ע���������������������֮�з���ᳬ��ʱ��
//ע��һ��Ҫ����������ֵ �����������ҪҲҪ����ֵ �������׷����δ���
//printf ��scanf��Զ��cin cout����Ч
int main()
{
	int K;
	scanf("%d", &K);
	vector<int> v(K);
	//while (K--)
	//{
	//	int temp;
	//	scanf("%d",&temp);
	//	v.push_back(temp);
	//}

	int sum = 0,maxsum=-1,leftindex=0,rightindex=K-1,tempindex=0;
	for (int i = 0;i < K;i++)
	{
		scanf("%d", &v[i]);
		sum += v[i];
		if (sum > maxsum)
		{
			maxsum = sum;
			leftindex = tempindex;
			rightindex = i;
		}
		if (sum < 0)
		{
			sum = 0;
			tempindex = i + 1;
		}
	}
	if (maxsum < 0)maxsum = 0;
	/*cout << maxsum << " " << v[leftindex] << " " << v[rightindex]*/;
	printf("%d %d %d", maxsum, v[leftindex], v[rightindex]);
	return 0;
}