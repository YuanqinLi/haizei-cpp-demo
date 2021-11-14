/*************************************************************************
	> File Name: 3.cout.cpp
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

// TODO 
// -- 实现LOG() --
// eg: LOG(WARNING) << "failed";



// TODO:
// -- 实现printf方法 --
// eg: invoy_log_push(context, "drt", "%ldus", drt);

// -- 实现cout --
/*
 * 实现思路：<<运算符两边应该是【值】，比如 5 << 2 << 3;
 * 在c++里面，【值】的概念就是【对象】
 */

namespace lyqcout {
class ostream {
public:
    // TODO: 构造与析构函数
    // TODO: 模板不可以做吗？本质【模板】vs 【重载】
    // TODO: 为什么偏偏要传引用? ostream &的形式
    ostream operator<<(int x);
    void operator<<(const char *ch);
};

// TODO: iostream中定义的"extern ostream cout", 什么时候构造和析构
ostream cout;
const char *endl = "\n";
ostream ostream::operator<<(int x) {
    // TODO: 不用printf怎么实现？
    printf("%d", x);    
}

void ostream::operator<<(const char *ch) {
    printf("%s", ch);    
}

};

int main() {
    int n = 123;
    lyqcout::cout << n << lyqcout::endl;
    std::cout << n << std::endl;
    // TODO: 实现 cin 
    //haizie::cin >> n;
    // haizei::cout << n << haizei::endl;
    return 0;
}
