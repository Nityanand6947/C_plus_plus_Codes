/*
CV are used for two purposes:
    Notify other threads
    Waiting for some condition

1.Condition variable allows running threads to wait on some waiting and once those condition are met the waiting thread is notified using:
    a.notifiy_one()
    b.notify_all()

2.You need mutex to use condition variable
3.If some thread want to wait on some condition then it has to do these things:
    -Acquire the mutex using unique_lock<mutex> lock(m1);
    -Excute wait, wait_for , or wait_until . The wait operations automatically releases the mutex and suspend the execution of the thread.
    -When the condition variable is notified , the thread is awakened , and the mutex is automatically required.
    The thread should be check the conditon and resume waiting if the wake up was sprious.

[note]:
    -Condition variable are used to synchronize two or more threads.
    -Best use case of condition variable is Producer/Consumer problem.
*/

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>


using namespace std;

condition_variable cv;
mutex m;
long balance = 0;

void addMoney(int money) {
    lock_guard<mutex> lg(m);
    balance += money;
    cout << "Amount added, current balance: " << balance << endl;
    cv.notify_one();
}

void withdrawMoney(int money) {
    unique_lock<mutex> ul(m);
    cv.wait(ul, [] { return (balance != 0); }); // release the mutex if the condition is not true
    if (balance >= money) {
        balance -= money;
        cout << "Amount deducted: " << money << endl;
    } else {
        cout << "Amount can't be deducted, current balance is less than " << money << endl;
    }
    cout << "Current balance is: " << balance << endl;
}

int main() {
    thread t1(withdrawMoney, 300);
    thread t2(addMoney, 500);

    t1.join();
    t2.join();

    return 0; // Good practice to return 0 at the end of main
}
