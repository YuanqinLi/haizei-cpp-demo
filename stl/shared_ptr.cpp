/*************************************************************************
	> File Name: shared_ptr.cpp
	> Mail: 1136984246@qq.com
 ************************************************************************/

#include <iostream>
#include <memory>
#include <thread>
#include <chrono>
#include <mutex>

struct Base {
    Base() {
        std::cout << "Base()" << std::endl;
    }
    ~Base() {
        std::cout << "~Base()" << std::endl;
    }
};

struct Derived : public Base {
    Derived() {
        std::cout << "Derived()" << std::endl;
    }
    ~Derived() {
        std::cout << "~Derived()" << std::endl;
    }
};

void thr(std::shared_ptr<Base> p) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::shared_ptr<Base> lp = p; // 虽然使用数量在增加，但是是线程安全的
    {
        static std::mutex io_mutex;
        std::lock_guard<std::mutex> lk(io_mutex);
        std::cout << "local pointer in a thread:\n"
                  << "p.get() = " << p.get()
                  << "p.use_count = " << p.use_count() << "\n";
    }
}


int main() {
    std::shared_ptr<Base> p = std::make_shared<Derived>();
    std::cout << "Created a shared Derived (as a pointer to Base)\n"
          << "  p.get() = " << p.get()
          << ", p.use_count() = " << p.use_count() << '\n'; 
    std::thread t1(thr, p), t2(thr, p), t3(thr, p);
    p.reset(); // // release ownership from main
    std::cout << "Shared ownership between 3 threads and released\n"
          << "ownership from main:\n"
          << "  p.get() = " << p.get()
          << ", p.use_count() = " << p.use_count() << '\n';
    t1.join(); t2.join(); t3.join();
    std::cout << "All threads completed, the last one deleted Derived\n";
    return 0;
}
