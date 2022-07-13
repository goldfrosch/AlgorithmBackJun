#include <iostream>
#include <stack>
#include <vector>
#include<string>
#include <algorithm>

using namespace std;

int getResult(string vps) {
    string data;
    bool result;
    stack<char> vpsInputSmall;
    stack<char> vpsInputBig;

    result = vps == "." ? false : true;

    while (!vps.empty()) {
        if (vps.back() == '(') {
            if (vpsInputSmall.empty()) {
                break;
            }
            else {
                vpsInputSmall.pop();
                vps.pop_back();
            }
        }
        else if (vps.back() == '[') {
            if (vpsInputBig.empty()) {
                break;
            }
            else {
                vpsInputBig.pop();
                vps.pop_back();
            }
        }
        else if (vps.back() == ')') {
            vpsInputSmall.push(vps.back());
            vps.pop_back();
        }
        else if (vps.back() == ']') {
            vpsInputBig.push(vps.back());
            vps.pop_back();
        }
        else {
            vps.pop_back();
        }
    }
    if (vpsInputSmall.empty() && vpsInputBig.empty() && vps.empty()) {
        std::cout << "YES" << endl;
    }
    else {
        std::cout << "NO" << endl;
    }

    if (result) {
        getline(cin, data);
        getResult(data);
    }

    return 0;
}

int main(void) {
    string vps;
    getline(cin, vps);
    
    getResult(vps);
    return 0;
}
