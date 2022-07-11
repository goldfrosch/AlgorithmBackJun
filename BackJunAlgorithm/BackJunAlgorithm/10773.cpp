#include <iostream>
#include <stack>
#include<string>
#include <algorithm>

using namespace std;

int main(void) {
    int num, count;
    int sum = 0;
    std::cin >> count;

    stack<int> stack;

    while (count > 0) {
        std::cin >> num;
        if (num == 0) {
            stack.pop();
        }
        else {
            stack.push(num);
        }
        count--;
    }

    for (int i = 0; !stack.empty(); ++i) {
		sum += stack.top();
		stack.pop();
	}

    std::cout << sum << endl;

    return 0;
}