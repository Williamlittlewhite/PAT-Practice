//#define _CRT_SECURE_NO_DEPRECATE
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
////����ο�����˼· 
////�������Ƕ�ÿ�����ڵ���һ�����нṹ�壬�����ö��м�¼���м����ÿ���˵ķ���ʱ�� ��Ҫ��
////���м�¼�ö���������е�ʱ�� ������������׵�ʱ��
////����������б��
////ǰM*N���� �⻷��M�����ڻ���N�����ڣ��ֱ𰴽��˰�����ÿ�����ڣ�ͬʱ���¶���(Node)������
////Ϊ1ʱ����н���һ���� ��ʱ�������ʱ���������ʱ�䱣��һ��,�ж��������ʱ���Ƿ�540
////���ڱ�ʾ�Ѿ��޷���� ���Ϊfalse result��¼ÿ���˵Ķ��������������
//
////�Ժ����K-M*N���������ҳ����д�����������е�ʱ�估��ţ�������У�Ȼ�������µ��˽���
////�Ӷ���һ���ı���е��������ԣ�����¼���˵��������ʱ��
//
////����result�����bool�����¼����ÿ���˵��������ʱ��������
//typedef struct Node {
//	int poptime = 0;
//	int endtime = 0;
//	queue<int> q;
//}node;
//
//int main()
//{
//	int N, M, K, Q, Processing[1001],index=1,result[1001];
//	scanf("%d %d %d %d", &N, &M, &K, &Q);
//	for (int i = 1;i <= K;i++)
//		scanf("%d", &Processing[i]);
//	vector<node> window(N + 1);
//	vector<bool> delay(K + 1, false);
//	for (int i = 1;i <= M;i++)
//	{
//		for (int j = 1;j <= N;j++)
//		{
//			if (index <= K)
//			{
//				window[j].q.push(Processing[index]);
//				if (window[j].endtime >= 540)      //����һ��Ҫ���ж��Ƿ�ʱ �����©ʧһ�������
//					delay[index] = true;
//				window[j].endtime += Processing[index];
//				
//				if (i == 1)
//					window[j].poptime = window[j].endtime;
//				result[index] = window[j].endtime;
//				index++;
//			}
//		}
//	}
//	
//	while (index<=K)
//	{
//		int tempmin = window[1].poptime;
//		int tempnumber = 1;
//		for (int i = 2;i <= N;i++)
//		{
//			if (tempmin > window[i].poptime)
//			{
//				tempnumber = i;
//				tempmin = window[i].poptime;
//			}
//		}
//		window[tempnumber].q.pop();
//		window[tempnumber].q.push(Processing[index]);
//		window[tempnumber].poptime += window[tempnumber].q.front();
//		if (window[tempnumber].endtime >= 540)
//			delay[index] = true;
//		window[tempnumber].endtime += Processing[index];
//		result[index] = window[tempnumber].endtime;
//		index++;
//	}
//	int query[1001];
//	for (int i = 1;i <= Q;i++)
//	{
//		scanf("%d", &query[i]);
//	}
//	for (int j = 1;j <= Q;j++)
//	{
//		int  minute;
//		minute = result[query[j]];
//		if (delay[query[j]] == true)
//			printf("Sorry\n");
//		else
//			printf("%02d:%02d\n", (minute + 480) / 60, (minute + 480) % 60);
//	}
//	
//	return 0;
//}