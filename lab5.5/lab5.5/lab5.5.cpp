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
    cout << "г���� " << level << ": ���(" << n << ", " << m << ") => ";
    int r = n % m;
    cout << "���(" << m << ", " << r << ")" << endl;
    int result = ncd(m, r, recursion_depth, level + 1);
    return result;
}

int main() {
    int n, m;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "������ ��� ����������� �����: ";
    cin >> n >> m;

    int recursion_depth = 0;
    int result = ncd(n, m, recursion_depth, 1);

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "���(" << n << ", " << m << ") = " << result << endl;
    cout << "������� ������: " << recursion_depth << endl;
    return 0;
}
