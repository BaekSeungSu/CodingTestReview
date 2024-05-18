// 백준 11003 : 최솟값 찾기
// 슬라이딩 윈도우

#include<iostream>
#include<deque>

using namespace std;

typedef pair<int, int> Node;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, L;

	cin >> N >> L;

	deque<Node> myDeque;

	for (int i = 0; i < N; i++) {
		int now;
		cin >> now;
		while (myDeque.size() && myDeque.back().second > now) {
			myDeque.pop_back();
		}

		myDeque.push_back(Node(i, now));
		if (myDeque.front().first <=i-L){
			myDeque.pop_front();
		}
		cout << myDeque.front().second << " ";
	}
}