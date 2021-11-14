/*************************************************************************
	> File Name: 2.this.cpp
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

namespace haizei {
    class A_with_int {
        int a;
        double b;
        void fun();
    };

    void fun() {
        cout << "nihao" << endl;
    }

    // TODO: sizeof(a)计算数据区的内存;内存里面分数据区和方法区
    // 方法区的大小不会存在对象的增加而增加; 
    A_with_int a;

class People {
public:
    People(string name)  {
       _name = name; 
    }
    void say(string _name);
private:
    string _name;
};


// TODO: 拆开声明和定义
// TODO: mxps的命名空间配置
void People::say(string _name) {
    cout << "title : " << _name << endl;
    cout << "name : " << this->_name << endl;
    // TODO : envoy 里面的this
    //cout << "name : " << this->_name << endl;
}

}

int main() {
    haizei::People teacher("Hug");
    // TODO: this指针
    teacher.say("Captain");
    return 0;
}
