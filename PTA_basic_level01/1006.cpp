//#include<iostream>
//#include<stack>
//using namespace std;
////����û���ѵ� ע���������ʹ�ö�ջstack������
//int main()
//{
//	int N,n;
//	stack<int> a;
//	stack<char> b,c;
//	cin >> N;
//	n = N % 10;
//	while (n!=0)
//	{
//		a.push(n);
//		n--;
//	} 
//	N /= 10;
//	n = N % 10;
//	while (n != 0)
//	{
//		b.push('S');
//		n--;
//	}
//	N /= 10;
//	n = N % 10;
//	while (n != 0)
//	{
//		b.push('B');
//		n--;
//	}
//	while (!c.empty())
//	{
//		cout << c.top();
//		c.pop();
//	}
//	while (!b.empty())
//	{
//		cout << b.top();
//		b.pop();
//	}
//	while (!a.empty())
//	{
//		cout << a.top();
//		a.pop();
//	}
//
//}