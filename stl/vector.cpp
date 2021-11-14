/*************************************************************************
	> File Name: vector.cpp
	> Mail: 1136984246@qq.com
 ************************************************************************/

#include <iostream>
#include "common.h"

namespace lyq {
template <class _Tp>
class vector {
public:
    vector(std::initializer_list<_Tp> init) {
        std::cout << "constructor by initializer_list" << std::endl;
        // TODO: 构造的过程中如何push_back和初始化空间
    }
    ~vector() {
        std::cout << "destructor" << std::endl;
    }
private: 

};
};

__BEGIN(dash)

int main() {
    // Create a vector containing integers
    lyq::vector<int> v = { 7, 5, 16, 8 };
    common::output(v);
    // lyq::vector<int> v;

    /*
    // Add two more integers to vector
    v.push_back(25);
    v.push_back(13);
 
    // Print out the vector
    std::cout << "v = { ";
    for (int n : v) {
        std::cout << n << ", ";
    }
    std::cout << "}; \n";
    */
}

__END(dash)


__BEGIN(cin)

/*
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
*/

__END(cin)


__BEGIN(vector)

#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    common::output(v);
    return 0;
}

__END(vector)

int main() {
    dash::main();   
    // vector::main();
}
