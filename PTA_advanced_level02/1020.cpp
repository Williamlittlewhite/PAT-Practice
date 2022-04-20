#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<queue>
//����ǰ������������һ�������������϶�������ɶ�һ������ȷ������������ȷ�������������ȷ�����ڵ��λ�ã�
//�����������ҵ����ڵ��Ӧ�Ľڵ㣬����ǰ��ľ�������������ľ�������������һ������ȷ����ǰ����������Ŀ���ɴ˿���
//ȷ�����������������˳�����õݹ��˼�뵱���������������ĿС�ڵ���1ʱ�����ݹ�

//����BFS������в�����������ȸ��ڵ���ӣ�Ȼ������������������ڵ���Ӹýڵ�Ȼ������������ڵ㣬���������
//����������Ĳ��������
using namespace std;
int pos[31], in[31];
int N;
struct Node {
	int data;
	Node* lchild;
	Node* rchild;
};

Node* CreateTree(int posleft, int posright, int inleft, int inright)
{
	if (posleft > posright)
		return NULL;
	Node* root = new Node;
	root->data = pos[posright];

	int k;
	for (k = inleft;k <= inright;k++)
	{
		if (in[k] == pos[posright])
			break;
	}
	int numb = k - inleft;
	root->lchild = CreateTree(posleft, posleft + numb - 1, inleft, k-1);
	root->rchild = CreateTree(posleft + numb , posright-1, k + 1, inright);
	return root;

}
int num = 0;
void BFS(Node* root) {
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node* now = q.front();
		q.pop();
		printf("%d", now->data);
		num++;
		if (num < N)
			printf(" ");
		if (now->lchild != NULL) q.push(now->lchild);
		if (now->rchild != NULL) q.push(now->rchild);
	}
}

int main()
{

	scanf("%d", &N);
	for (int i = 0;i < N;i++)
		scanf("%d", &pos[i]);
	for (int i = 0;i < N;i++)
		scanf("%d", &in[i]);
	
	Node* root = CreateTree(0, N - 1, 0, N - 1);

	BFS(root);

	return 0;
}
