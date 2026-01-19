#include<iostream>
#include<semaphore>
#include<thread>
#include<chrono>

std::binary_semaphore sem(1); // Initialize binary semaphore

void run() {
    sem.acquire();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Thread finished work." << std::endl;
    sem.release();
}

int main() {
    std::thread t1(run);
    std::thread t2(run);
    t1.join();
    t2.join();
    return 0;
}
