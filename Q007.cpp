// 백준 1940 : 주몽
// 투 포인터

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N;
	cin >> M;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int start = 0;
	int end = N - 1;
	int count = 0;
	while (start < end) {
		if (A[start] + A[end] == M) {
			count++;
			start++;
			end--;
		}
		else if (A[start] + A[end] < M) {
			start++;
		}
		else {
			end--;
		}
	}
	cout << count;
}