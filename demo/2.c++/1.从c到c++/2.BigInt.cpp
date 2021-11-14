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
    
    void operator/=(int x) {
        int y;
        for (int i = size() - 1; i >= 0; --i) {
            y = y * 10 + at(i);
            at(i) = y / x;
            y %= x;
        }
        process_digit();
        return ;
    }

    BigInt &operator/(int x) {
        // TODO: BigInt tmp(*this) 和 BigInt tmp = *this有区别吗?
        // TODO: wreturn-local-address, 会有内存泄露问题???
        BigInt tmp(*this); // TODO: 用类来通过赋值运算符进行构造的方法是默认出来的吗?
        tmp /= x;
        return tmp;
    }
    
    void operator*=(int x) {
        for (int i = 0; i < size(); i++) at(i) *= x;
        process_digit();
        return ;
    }
private:
    // 不传任何参数，作为私有成员方法
    // size()和at()作为类方法直接调用
    void process_digit() {
        for (int i = 0; i < size(); i++) {
            if (at(i) < 10) continue;    
            if (i + 1 == size()) push_back(0);
            at(i + 1) += at(i) / 10; 
            at(i) %= 10;
        }    
        while (size() > 1 && at(size() - 1) == 0) pop_back();
        return ;
    }
};


// TODO: 左移运算符的重载必须要放到类外?
ostream& operator<<(ostream &out, BigInt &val) {
    for (int i = val.size() - 1; i >= 0; i--) {
        // TODO: out << val.at(i);
        out << val[i];
    }
    return out;
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
    // TODO: 利用赋值运算符至少需要一次类型转换；BigInt ans = 0 和 BigInt ans(0) 有区别吗？
    BigInt ans = 0, p = arr[0].a;
    for (int i = 1; i <= n; i++) {
        BigInt temp = p / arr[i].b;
        if (ans < temp) ans = temp;
        p *= arr[i].a;
    }
    cout << ans << endl;
    return 0;
}
