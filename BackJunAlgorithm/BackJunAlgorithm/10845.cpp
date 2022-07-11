/*
#include<iostream>
#include<queue>
#include<string>

using namespace std;

//¹®Á¦ https://www.acmicpc.net/problem/10845
int main() {
	int count;
	std::cin >> count;

	queue<int> quene;

	for (int i = 0; i < count; i++) {
		string text;
		std::cin >> text;

		if (text == "push") {
			int number;
			std::cin >> number;
			quene.push(number);
		}
		else if (text == "pop") {
			if (!quene.empty()) {
				std::cout << quene.front() << endl;
				quene.pop();
			}
			else {
				std::cout << -1 << endl;
			}
		}
		else if (text == "size") {
			std::cout << quene.size() << endl;
		}
		else if (text == "empty") {
			if (quene.empty()) {
				std::cout << 1 << endl;
			}
			else {
				std::cout << 0 << endl;
			}
		}
		else if (text == "front") {
			std::cout << quene.front() << endl;
		}
		else if (text == "back") {
			std::cout << quene.back() << endl;
		}
	}

	return 0;
}
*/
