// 백준 12891 : DNA 비밀번호
// 슬라이딩 윈도우

#include<iostream>
#include<vector>

using namespace std;

int currentArr[4];
int checkArr[4];
int checkSecret = 0;
void Add(char c);
void Remove(char c);


int main() {
	int S, P, result = 0;
	cin >> S >> P;
	string A;
	
	cin >> A;

	for (int i = 0; i < 4; i++) {
		cin >> checkArr[i];
		if (checkArr[i] == 0) checkSecret++;
	}

	for (int i = 0; i < P; i++) {
		Add(A[i]);
	}

	if (checkSecret == 4) {
		result++;
	}

	for (int i = P; i < S; i++) {
		int j = i - P;
		Add(A[i]);
		Remove(A[j]);
		if (checkSecret == 4) {
			result++;
		}
	}

	cout << result;
	
}

void Add(char c) {
	switch (c)
	{
	case 'A':
		currentArr[0]++;
		if (currentArr[0] == checkArr[0])
			checkSecret++;
		break;
	case 'C':
		currentArr[1]++;
		if (currentArr[1] == checkArr[1])
			checkSecret++;
		break;
	case 'G':
		currentArr[2]++;
		if (currentArr[2] == checkArr[2])
			checkSecret++;
		break;
	case 'T':
		currentArr[3]++;
		if (currentArr[3] == checkArr[3])
			checkSecret++;
		break;
	default:
		break;
	}
}

void Remove(char c) {
	switch (c)
	{
	case 'A':
		if (currentArr[0] == checkArr[0])
			checkSecret--;
		currentArr[0]--;
		break;
	case 'C':
		if (currentArr[1] == checkArr[1])
			checkSecret--;
		currentArr[1]--;
		break;
	case 'G':
		if (currentArr[2] == checkArr[2])
			checkSecret--;
		currentArr[2]--;
		break;
	case 'T':
		if (currentArr[3] == checkArr[3])
			checkSecret--;
		currentArr[3]--;
		break;
	default:
		break;
	}
}