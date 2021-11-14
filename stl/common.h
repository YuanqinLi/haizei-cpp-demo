/*************************************************************************
	> File Name: common.h
	> Mail: 1136984246@qq.com
 ************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>

#define __BEGIN(x) namespace x {
#define __END(x) }


namespace common {

// TODO: 肯定可以实现，参考cout就知道了
template<class _Tp> 
void output(const std::vector<_Tp> &v) {
    for (auto iter = v.begin(); iter != v.end(); iter++) {
        std::cout << *iter << std::endl;
    }
    return ;
}


/*
// TODO: 实现模板类型的output
template<class Type> 
wvoid output()

void output(std::vector<int> &v) {
    for (auto iter = v.begin(); iter != s.end(); iter) {
        std::cout << *iter << std::endl;
    }


    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

*/
}
