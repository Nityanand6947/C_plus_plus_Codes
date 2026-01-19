#include <iostream>
#include <windows.h>

DWORD WINAPI threadFunction1(LPVOID lpParam) {
    std::cout << "Thread 1 is running (priority: LOWEST)." << std::endl;
    return 0;
}

DWORD WINAPI threadFunction2(LPVOID lpParam) {
    std::cout << "Thread 2 is running (priority: NORMAL)." << std::endl;
    return 0;
}

DWORD WINAPI threadFunction3(LPVOID lpParam) {
    std::cout << "Thread 3 is running (priority: HIGHEST)." << std::endl;
    return 0;
}

int main() {
    // Create three threads
    HANDLE hThread1 = CreateThread(
        nullptr, 0, threadFunction1, nullptr, 0, nullptr
    );
    HANDLE hThread2 = CreateThread(
        nullptr, 0, threadFunction2, nullptr, 0, nullptr
    );
    HANDLE hThread3 = CreateThread(
        nullptr, 0, threadFunction3, nullptr, 0, nullptr
    );

    if (hThread1 == nullptr || hThread2 == nullptr || hThread3 == nullptr) {
        std::cerr << "Error creating threads!" << std::endl;
        return 1;
    }

    // Set thread priorities
    SetThreadPriority(hThread3, THREAD_PRIORITY_LOWEST); // Lowest priority
    SetThreadPriority(hThread2, THREAD_PRIORITY_NORMAL); // Normal priority
    SetThreadPriority(hThread1, THREAD_PRIORITY_HIGHEST); // Highest priority

    // Wait for all threads to finish
    WaitForSingleObject(hThread1, INFINITE);
    WaitForSingleObject(hThread2, INFINITE);
    WaitForSingleObject(hThread3, INFINITE);

    // Close thread handles
    CloseHandle(hThread1);
    CloseHandle(hThread2);
    CloseHandle(hThread3);

    return 0;
}
