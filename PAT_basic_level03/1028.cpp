//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<math.h>
////������Ե�3��֪��Ϊʲôһֱ����ȥ,����˵��ȫ�����Ϸ��Ѿ�����û������ 
////���Ե�4��ñ�����������ᵼ�´����ݳ�������
////�����������ʹ���������������~
//using namespace std;
//class person
//{
//public:
//	string name;
//	int year, month, day;
//};
//bool cmp(person& a, person& b)
//{
//	if (a.year != b.year)
//		return a.year > b.year;
//	else
//	{
//		if (a.month != b.month)
//			return a.month > b.month;
//		else
//			return a.day >= b.day;
//	}
//}
//int main()
//{
//	long int n,count=0;
//	cin >> n;
//	long int n1 = n;
//	vector <person>  v;
//	while (n1--)
//	{
//		person person;
//		cin >> person.name;
//		char ch = getchar();
//		scanf("%d/%d/%d", &person.year, &person.month, &person.day);
//		if ((2014 - person.year) > 200 || (2014 - person.year == 200 && person.month < 9) || ((2014 - person.year == 200) && person.month == 9 && person.day < 6) || person.year > 2014 || person.month < 0 || person.day < 0 || person.month > 12 || person.day > 31)
//			count++;
//		else
//			v.push_back(person);
//	}
//
//	
//	if (n - count != 0)
//	{
//		cout << n - count;
//		sort(v.begin(), v.end(), cmp);
//		cout << " " << v[v.size() - 1].name << " ";
//		cout << v[0].name << endl;
//	}
//	else
//		cout << "0";
//	return 0;
//}



//#include <iostream>
//#include<algorithm>
//#include<math.h>
//using namespace std;
//struct birthday {
//	char name[10];
//	int birth;
//};
//birthday per[110000], ok[110000];
//bool cmp(birthday x, birthday y) {
//	if (x.birth < y.birth)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int n;
//	char a[100];
//	int r = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> per[i].name >> a;
//		per[i].birth = (a[0] - '0') * pow(10, 7) + (a[1] - '0') * pow(10, 6) + (a[2] - '0') * pow(10, 5) + (a[3] - '0') * pow(10, 4) + (a[5] - '0') * pow(10, 3) + (a[6] - '0') * 100 + (a[8] - '0') * 10 + (a[9] - '0');
//		if (per[i].birth >= 18140906 && per[i].birth <= 20140906) {
//			ok[r] = per[i];
//			r++;
//		}
//	}
//	sort(ok, ok + r, cmp);
//	if (r > 0)//��Բ��Ե�3(�п������������ȫ����������ʱ����else�����0����)
//		cout << r << " " << ok[0].name << " " << ok[r - 1].name;
//	else
//		cout << 0;
//}



