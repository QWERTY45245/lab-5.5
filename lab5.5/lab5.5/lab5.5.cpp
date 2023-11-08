#include <iostream>
#include<Windows.h>
using namespace std;

int ncd(int n, int m, int& recursion_depth, int level) {
    recursion_depth++;
    if (m == 0) {
        return n;
    }
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Рівень " << level << ": НСД(" << n << ", " << m << ") => ";
    int r = n % m;
    cout << "НСД(" << m << ", " << r << ")" << endl;
    int result = ncd(m, r, recursion_depth, level + 1);
    return result;
}

int main() {
    int n, m;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Введіть два натуральних числа: ";
    cin >> n >> m;

    int recursion_depth = 0;
    int result = ncd(n, m, recursion_depth, 1);

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "НСД(" << n << ", " << m << ") = " << result << endl;
    cout << "Глибина рекурсії: " << recursion_depth << endl;
    return 0;
}
