/*************************************************************************
	> File Name: 2.BigInt.cpp
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

// 程序 = 算法 + 数据结构
// 算法没有问题，更改数据结构：int -> BigInt

struct Data {
    int a, b;
};

bool cmp(const Data &a, const Data &b) {
    return a.a * a.b < b.a * b.b;
}

class BigInt : public vector<int> {
public:
 
    // TODO: 不需要重载赋值运算符
    // BigInt &operator=(int x) {} 
    BigInt(int x) {
        push_back(x); // TODO: 继承vector<int>的成员方法吗?
        process_digit();
    }
    
private:
    void process_digit(); 
};

// TODO: 左移运算符的重载必须要放到类外?
ostream& operator<<(ostream &out, BigInt &val) {

}

int main() {
    int n;
    vector<Data> arr;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        Data temp;
        cin >> temp.a >> temp.b;
        arr.push_back(temp);
    }
    sort(arr.begin() + 1, arr.end(), cmp);
    BigInt ans = 0, p = arr[0].a;
    for (int i = 1; i <= n; i++) {
        BigInt temp = p / arr[i].b;
        if (ans < temp) ans = temp;
        p *= arr[i].a;
    }
    cout << ans << endl;
    return 0;
}
