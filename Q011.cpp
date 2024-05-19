// 백준 1874 : 스택으로 수열 만들기
// 스택

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	vector<int> A(n, 0);
	vector<char> resultV;

	for (int i = 0; i < n; i++) {
		int now;
		cin >> A[i];
	}

	stack<int> myStack;
	int num = 1;
	bool result = true;

	for (int i = 0; i < n; i++)
	{
		int su = A[i];
		if (su >= num) {
			while (su >= num) {
				myStack.push(num++);
				resultV.push_back('+');
			}
			myStack.pop();
			resultV.push_back('-');
		}
		else {
			int n = myStack.top();
			myStack.pop();
			if (n > su) {
				cout << "NO";
				result = false;
				break;
			}
			else {
				resultV.push_back('-');
			}
		}
	}

	if (result) {
		for (int i = 0; i < resultV.size(); i++) {
			cout << resultV[i] << "\n";
		}
	}
}