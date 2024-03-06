#include <iostream>
using namespace std;

void input(int* &a, int& n) {
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}

void output(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
}

void Sort(int* a, int n) { //insertion sort
	for (int i = 1; i < n; i++) {
		int val = a[i];
		int pos = i - 1;
		while (pos >= 0 && val < a[pos]) {
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos+1] = val;
	}
}

int main() {
	int n, * a;
	input(a, n);
	Sort(a, n);
	output(a, n);
	return 0;
}