// 백준 2018 : 수들의 합 5
// 투 포인터

#include<iostream>
using  namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long N;
	cin >> N;
	int count = 1;
	int start = 1;
	int end = 1;
	int sum = 1;

	while (end != N) {
		if (sum < N) {
			end++;
			sum += end;
		}
		else if (sum > N) {
			sum -= start;
			start++;
		}
		else {
			count++;
			end++;
			sum += end;
		}
	}
	cout << count;
	
	return 0;
}