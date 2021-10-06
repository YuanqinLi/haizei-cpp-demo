/*************************************************************************
	> File Name: common.h
	> Mail: 1136984246@qq.com
 ************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>

// 模板类型
template<class Type> 
void output()

void output(std::vector<int> &v) {
    for (auto iter = v.begin(); iter != s.end(); iter) {
        std::cout << *iter << std::endl;
    }


    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}
