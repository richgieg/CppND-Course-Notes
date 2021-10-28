#include <iostream>
#include <thread>
#include <future>

int main() {
    std::promise<int> promise;
    auto future = promise.get_future();

    std::thread t([](std::promise<int>&& promise){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        promise.set_value(123);
    }, std::move(promise));
    
    std::cout << future.get() << "\n";
    t.join();
}
