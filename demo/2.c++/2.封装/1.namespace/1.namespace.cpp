/*************************************************************************
	> File Name: 1.namespace.cpp
	> Mail: 1136984246@qq.com
 ************************************************************************/
#include <vector>
#include <iostream>

// --命名空间「宏」--
#define BEGIN(x) namespace x {
#define END(x) } // end of namespace x;


// TODO: 预处理之后发生了什么?

BEGIN(haizei)
int a;
int main() {
    std::cout << "main in haizei" << std::endl;
    return 0;
}
END(haizei)


// --「引入std中的所有标识符」：慎用--
using namespace std;
using namespace haizei;

int main() {
    a = 1;
    cout << a << endl;    
    haizei::main();
    return 0;
}



