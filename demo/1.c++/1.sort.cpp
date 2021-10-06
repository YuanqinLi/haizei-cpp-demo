/*************************************************************************
	> File Name: 4.sort.cpp
	> Mail: 1136984246@qq.com
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <set>
#include <memory>
using namespace std;

int arr[1000];

void output(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool cmp(int a, int b) {
    return a > b;
}

// 类：重载小于号
struct CMP {
    int operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    output(arr, n);
    // 面向过程：函数
    sort(arr, arr + n, cmp);
    output(arr, n);
    // 面向对象：类
    sort(arr, arr + n, CMP());
    output(arr, n);
    // 范型编程：模版
    sort(arr, arr + n, greater<int>()); // 使用greater模版类 
    output(arr, n); 
    sort(arr, arr + n, less<int>()); // 使用less模版类
    output(arr, n);
    // 函数式编程：lamda表达式
    sort(arr, arr + n, [](int a, int b) { return a > b;  });
    output(arr, n);
    return 0;
}
