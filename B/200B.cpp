#include<iostream>
#include<iomanip>

int main() {
    int n;
    std::cin >> n;
    int p, sum = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> p;
        sum += p;
    }
    double res =  static_cast<double>(sum) / n;
    std::cout << std::fixed << std::setprecision(12);
    std::cout << res;
}
