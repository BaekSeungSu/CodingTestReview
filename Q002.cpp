// ���� 1546 : ���

#include<iostream>
using namespace std;

int main()
{
	int N, M = 0; // N : ���� ����, M : �ִ� ��
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