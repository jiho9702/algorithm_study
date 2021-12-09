#include <iostream>
using namespace std;

int arr[100000];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int num;
	cin >> num;
	while (num--) {
		int i, j;
		cin >> i >> j;
		if (i == j) {
			cout << arr[i] << "\n";
			continue;
		}

		int sum = 0;
		for (int z = i; z <= j; z++) {
			sum += arr[z];
		}
		cout << sum << "\n";
	}


}