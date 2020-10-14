#include<iostream>
using namespace std;

int binarysearch(int s, int e, int input[], int x) {

	if (s > e)
		return 0;
	
	int mid = (s + e + 1) / 2;

	if (input[mid] > x)
		return binarysearch(s, mid - 1, input, x);
	else if (input[mid] == x)
		return 1;
	else
		return binarysearch(mid + 1, e, input, x);
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

	int a = binarysearch(0, n - 1, input, x);

	if (a)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


	delete [] input;

	return 0;

}
