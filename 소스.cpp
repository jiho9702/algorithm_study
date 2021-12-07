#include <iostream>
#include <algorithm>
using namespace std;

int arr[100];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int sum[100] = {};

	for (int i = 0; i <= n-k; i++) {
		for (int j = i; j < i + k; j++) {
			sum[i] += arr[j];
		}
	}

	int result;
	result = sum[0];
	for (int i = 1; i <= n - k; i++) {
		if (result < sum[i]) {
			result = sum[i];
		}
	}

	cout << result;

}