#include <iostream>

using namespace std;

int res(int i, int n, int masha, int petya, int* arr) {
    if (i == n) {
        return abs(masha - petya);
    }
    int var1 = res(i + 1, n, masha + arr[i], petya, arr);
    int var2 = res(i + 1, n, masha, petya + arr[i], arr);
    return min(var1, var2);
}

int main() {
    int n;
    cout << " enter n: ";
    cin >> n;
    int arr[32] = { 0 };
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        arr[i] = m;
    }
    cout << "result: " << res(0, n, 0, 0, arr);
}