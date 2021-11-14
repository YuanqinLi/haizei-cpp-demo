/*************************************************************************
	> File Name: 4.constructor.cpp
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

// TODO: 初始化列表完美
// TODO: 生产者消费者的 vector构造，没迷惑

// TODO: Model-server里面的初始化情况 : IPlugin对象实例化过程
// TODO: 移动构造行为没办法默认化，是依赖于场景；和默认构造无关


class A {
public:
    A(x) : x(x) {};
    A(const A &a) {
        cout << this << "copy from " << &a << endl;
    }
    // TODO: 重载赋值运算符 
    void operator=() {

    }
private:
    int x;
};

class Data {
public:
    /*
     *  // TODO : 为什么不再{}进行初始化
        this->__x = 0;
        this->__y = 0;
    */
    Data() : __x(0), __y(0) {
        cout << "constructor" << endl;
    }
private:
    // 初始化列表的初始化顺序只和成员的声明顺序保持一致
    int __x;
    int __y;
    // TODO: 学习方法， 将 应用的场景逐渐的变的复杂化
    A a;
};

// TODO: default
class B1 {
    public:
    
};



int main() {
    B = b1;
    B b2 = b1;
    A a(35); 
    // 逻辑上，将一个整形赋值给一个 A类的对象
    // DEBUG : 地址输出
    // 关闭：返回值优化,
    // TODO: 36之后也不用了，中间直接用move拷贝，可以吗？ 
    // TODO: 匿名对象
    // TODO: 调用拷贝构造，还是调用赋值运算符
    // TODO: 依次性的调用拷贝构造和赋值运算符
    A b = 36; // TODO: 调用两个构造函数 
    b = 28; // TODO: 只调用了一次构造
    return 0;
}
