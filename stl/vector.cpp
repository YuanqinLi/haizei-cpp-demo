/*************************************************************************
	> File Name: vector.cpp
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

int main() {
    // cin >> v[i];
    // 编译没问题，但是执行报段错误
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}
