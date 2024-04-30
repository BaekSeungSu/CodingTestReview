// 백준 1546 : 평균

#include<iostream>
using namespace std;

int main()
{
	int N, M = 0; // N : 과목 개수, M : 최대 값
	int Scores[1000];
	float sum = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Scores[i];
	}

	for (int i = 0; i < N; i++) {
		if (Scores[i] > M) {
			M = Scores[i];
		}
		sum += Scores[i];
	}

	cout << (sum / M * 100) / N;
	return 0;
}