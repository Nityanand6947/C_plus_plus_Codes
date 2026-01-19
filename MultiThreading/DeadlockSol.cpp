#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m1;
mutex m2;

void thread1() {
    // Lock both mutexes at once using std::lock
    lock(m1, m2);
    // Create a unique lock for both mutexes
    lock_guard<mutex> lk1(m1, std::adopt_lock);
    lock_guard<mutex> lk2(m2, std::adopt_lock);

    cout << "Critical section of thread threadOne\n";
}

void thread2() {
    // Lock both mutexes at once using std::lock
    lock(m1, m2);
    // Create a unique lock for both mutexes
    lock_guard<mutex> lk1(m1, std::adopt_lock);
    lock_guard<mutex> lk2(m2, std::adopt_lock);

    cout << "Critical section of thread threadTwo\n";
}

int main() {
    thread t1(thread1);
    thread t2(thread2);

    t1.join();
    t2.join();
}
