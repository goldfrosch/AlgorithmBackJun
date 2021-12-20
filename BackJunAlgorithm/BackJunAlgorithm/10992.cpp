/*#include <iostream>
#include<cstdlib>

using namespace std;

//¹®Á¦ https://www.acmicpc.net/problem/10992
int main()
{
    int num;
    std::cin >> num;
    
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num * 2 - 1; j++) {
            if (i == num) {
                std::cout << "*";
            }
            else {
                if (abs(num - j) == i - 1) {
                    std::cout << "*";
                }
                else {
                    std::cout << " ";
                }
            }
        }
        printf("\n");
    }
    return 0;
}*/
