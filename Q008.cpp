// 백준 1253 : 좋다
// 투 포인터

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N, result = 0;
	cin >> N;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	sort(A.begin(), A.end());

	for (int k = 0; k < N; k++) {
		long find = A[k];
		int start = 0;
		int end = N - 1;

		while (start < end) {
			if (A[start] + A[end] == find) {
				if (start != k && end != k) {
					result++;
					break;
				}
				else if (start == k) {
					start++;
				}
				else if (end == k) {
					end--;
				}
			}
			else if (A[start] + A[end] < find) {
				start++;
			}
			else {
				end--;
			}
		}
	}

	cout << result;


}