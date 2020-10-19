#include<iostream>
#include<string>
using namespace std;

int main () {
	string s;
	getline(cin, s);
	int c = 0;
	for (int i = 0; s[i] != '\0'; ++i)
	{
		++c;
	}
	for (int i = 0; i <= c ; ++i)
	{
		if (s[i] == ' ') {
			for (int j = i; j < c ; ++j)
			{
				char c = s[j];
				s[j] = s[j + 1];
				s[j + 1] = c;
			}

		}
	}
	for (int i = 0; s[i] != '\0'; ++i)
	{
		cout << s[i];
	}

}
