#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>
//������� reverse(begin,end)����ҿ���pythonһ��,��������
//map����Ѱ�ҵ�ַ����Ӧ�Ľڵ㣬�����������Ĺ��ܣ������뵽map
//ע���������� �����ų��սڵ� ����ַΪ-1�Ľڵ�
//ע��scanf("06d")������ʽ��ʹ�÷���

using namespace std;
class Node
{
public:
	int Data;
	int Next;

};


int main()
{
	/*int List[100000],Distance[100000];   �Լ�д�Ĵ��� û�п��ǵ��ڵ��п�������Ч�ڵ㣡��map��stl���������
	long int adress,Adress,Next;
	int N, K,Data;
	cin >> adress >> N >> K;
	int N1 = N;
	while (N--)
	{
		cin >> Adress >> Data >> Next;
		List[Adress] = Data;
		Distance[Adress] = Next;
	}
	stack<int> s;
	int count = 0;
	while (N1>=K)
	{
		while (count != K)
		{
			s.push(adress);
			adress = Distance[adress];
			count++;
		}
		count = 0;
		while (!s.empty())
		{
			printf("%05d", s.top());
			cout << " " << List[s.top()] << " ";
			s.pop();
			if (!s.empty())
				printf("%05d\n", s.top());
			else
			{
				if (adress == -1)
					printf("%d\n", adress);
				else
					printf("%05d\n", adress);
			}
		}
		N1 -= K;
	}
	while (N1--)
	{
		
		printf("%05d", adress);
		cout << " " << List[adress] << " " ;
		if (Distance[adress] != -1)
			printf("%05d\n", Distance[adress]);
		else
			printf("%d\n", Distance[adress]);
		
		adress = Distance[adress];
	}*/
	long int ListAdress,adress;
	int N, K;
	vector<int> v;
	map<int, Node> m;
	cin >> ListAdress >> N >> K;
	while (N--)
	{
		Node n;
		cin >> adress >> n.Data >> n.Next;
		m[adress] = n;
	}
	while (ListAdress!=-1)   
	{
		v.push_back(ListAdress);
		ListAdress = m[ListAdress].Next;
	}
	
	int i;
	for (i = 0;i < (v.size() - v.size() % K);i += K)
	{	
		reverse(v.begin()+i, v.begin()+i + K); //����ҿ�
	}
		for (int j=0;j < v.size();j++)
	{
		if (j==v.size()-1)
			printf("%05d %d %d\n", v[j], m[v[j]].Data,-1);
		else
			printf("%05d %d %05d\n", v[j], m[v[j]].Data, v[j+1]);
	}
	return 0;
	
}
