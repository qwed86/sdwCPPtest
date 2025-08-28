#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

int main() {
    const int N = 200000000; // 2亿
    vector<int> arr(N, 1);   // 初始化数组全是1

    auto start = high_resolution_clock::now();

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    auto end = high_resolution_clock::now();
    cout << "sum = " << sum << endl;
    cout << "耗时: " 
         << duration_cast<milliseconds>(end - start).count() 
         << " ms" << endl;

    return 0;
}
