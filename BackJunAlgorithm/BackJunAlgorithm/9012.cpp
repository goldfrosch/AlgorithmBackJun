#include <iostream>
#include <stack>
#include<string>
#include <algorithm>

using namespace std;

int main(void) {
    int num;
    std::cin >> num;

    while (num > 0) {
        string vps;
        string result = "";
        stack<char> vpsInput;
        std::cin >> vps;
        while (!vps.empty()) {
            if (vps.back() == '(') {
                if (vpsInput.empty()) {
                    break;
                }
                else {
                    vpsInput.pop();
                    vps.pop_back();
                }
            }
            else {
                vpsInput.push(vps.back());
                vps.pop_back();
            }
        }
        if (vpsInput.empty() && vps.empty()) {
            std::cout << "YES" << endl;
        }
        else {
            std::cout << "NO" << endl;
        }
        --num;
    }

    return 0;
}
