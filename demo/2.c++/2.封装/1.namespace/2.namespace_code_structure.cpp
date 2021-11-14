/*************************************************************************
	> File Name: 2.namespace_code_structure.cpp
	> Mail: 1136984246@qq.com
 ************************************************************************/

#include <iostream>
#include <vector>
// --公共库--
namespace common {
    namespace protobuf {
        class Service {};
    }
}

// --RPC接口--
/*
 * service ExampleService {
 *  rpc echo(ExampleRequest) returns (ExampleResponse);
 * }
 */
namespace example {
    class ExampleService : public ::common::protobuf::Service {}; 
};

// --框架代码--
namespace lyq {
    namespace invoy{
        class SerEnv {
        public:
            SerEnv(common::protobuf::Service *service) : _service(service){
                std::cout << "SerEnv() :constructor" << std::endl;
            }
            void do_work() {
                std::cout << "do_work" << std::endl;
            }
            ~SerEnv() {
                std::cout << "~SerEnv()" << std::endl;
            }
        private:
            common::protobuf::Service *_service;
        };
    }
}

// --业务代码--
namespace example {
    class Server : public ExampleService {
    public : 
        Server() {
            std::cout << "Server() : constructor " << std::endl;
        }
        ~Server() {
            // TODO: OOM, new出来的
            std::cout << "~Server()" << std::endl;
        }
    };
}

int main() {
    // TODO : 判断是复制构造还是默认构造
    lyq::invoy::SerEnv obj(new example::Server);
    obj.do_work();
    return 0;
}


