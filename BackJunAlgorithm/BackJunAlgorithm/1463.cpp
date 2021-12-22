/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//���� https://www.acmicpc.net/problem/1463
int main() {
	int num;
	std::cin >> num;
	vector<int> test(num + 1);

	//bottom-up
	//ó���� 2���� ���� �������� Ƚ���� ���ϸ鼭 �ּ����� ���� ���
	//���ϴ� ���¿��� 1�� ���ϰ� �� ���� ���� ��� +�ϴ� ���
	test[1] = 0;
	for (int i = 2; i <= num; i++) {
		test[i] = test[i - 1] + 1;
		if (!(i % 3)) {
			test[i] = min(test[i], test[i / 3] + 1);
		}
		if (!(i % 2)) {
			test[i] = min(test[i], test[i / 2] + 1);
		}
	}

	cout << test[num] << endl;
	return 0;
}
*/
