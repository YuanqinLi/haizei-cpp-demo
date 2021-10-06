/*************************************************************************
	> File Name: set.cpp
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
//#include "common.h"
using namespace std;
typedef pair<int, int> PII;

int main() {
    // 集合 : 可以进行去重
    // set : 内部比较大小的方法 + 自定义排序
    // 算法数据结构：利用集合模拟一个小顶堆
    std::set<int> s1 {1, 2, 4};
    s1.insert(2);
    s1.insert(-12);
    s1.insert(2);
    s1.insert(3);
    for (auto iter = s1.begin(); iter != s1.end(); iter++) {
        std::cout << *iter << std::endl;
    }
    std::set<PII> s2;
    s2.insert(PII(1,1));
    s2.insert(PII(1,2));
    s2.insert(PII(2,2));
    for (auto iter = s2.begin(); iter != s2.end(); iter++) {
        std::cout << iter->first << " "  << iter->second << std::endl;
    }
    //output(s2);
    //output(s);
    return 0;
}
