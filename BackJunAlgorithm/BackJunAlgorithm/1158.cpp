#include<iostream>
#include<queue>
#include<string>

using namespace std;

//¹®Á¦ https://www.acmicpc.net/problem/1158
int main() {
	int num;
	int count;

	int status = 0;

	std::cin >> num;
	std::cin >> count;

	int members[5001];
	int result[5001];

	for (int i = 1; i <= num; i++) {
		members[i - 1] = i;
	}

	while (true) {
		status += count;

	}
}