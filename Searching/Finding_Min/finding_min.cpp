#include<iostream>
using namespace std;

int linearsearch(int input[], int n , int x) {
	for (int i = 0; i < n; ++i)
	{
		if (input[i] > x)
			return input[i];
	}
	return -1;
}

int main () {

	int n ;
	cin >> n ;
	int *input = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	int x;
	cin >> x;

	int a = linearsearch(input, n, x);

	cout << a << endl;

	delete [] input;

	return 0;

}
