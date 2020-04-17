#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int hashtable[256] = { 0 };
	for (int i = 0; i < s2.size(); i++)
	{
		hashtable[s2[i]]++;
	}
	string str;
	for (int i = 0; i < s1.size(); i++)
	{
		if (hashtable[s1[i]] == 0)
		{
			str += s1[i];
		}
	}
	cout << str << endl;
	return 0;
}