// ���� 11720 : ������ ��
// �迭

#include<iostream>
using namespace std;

int main() {
	int N;
	string S;
	int sum = 0;

	cin >> N;
	cin >> S;

	for (int i = 0; i < N; i++) {
		sum += S[i] - '0';
	}

	cout << sum;

	return 0;
}