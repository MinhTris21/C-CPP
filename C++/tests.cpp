#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    cout << "Các số hoàn hảo trong khoảng từ 1 đến 1000:" << endl;
    for (int i = 1; i <= 10000; i++) {
        if (isPerfectNumber(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
