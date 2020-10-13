#include<iostream>
using namespace std;

int binarysearch(int s, int e, int input[], int x) {

    if (s > e) {
        return 0;
    }

    int mid = (s + e + 1) / 2;

    int c = 0;
    if (input[mid] > x)
    {
        c = binarysearch(s, mid - 1, input, x);
    }
    else
    {
        c = binarysearch(mid + 1, e, input, x );
    }

    if (c == 0) {
        return input[mid];
    }

    return c;

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

    cout << a << endl;

    delete [] input;

    return 0;

}
