/*************************************************************************
	> File Name: sort.cpp
	> Mail: 1136984246@qq.com
 ************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void output(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// 支持int类型的sort
// 模板是怎么支持迭代器作为一个类
// template<class _RandomAccessIter>
void lyq_sort(_RandomAccessIter)


int main() {
    // TODO:改成随机数生成数据测试
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    lyq_sort(v.begin(), v.end());
    // TODO: 自定义方法排序
    //sort(v.begin(), v.end());
    //TODO: sort(v);
    output(v);
}
