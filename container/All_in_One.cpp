// #include <iostream>
// #include <queue>
// #include <vector>
// #include <list>
// #include <stack>
// #include <map>
// #include <functional>
// #include <chrono>
// #include <thread>
// #include <string>
#include <bits/stdc++.h>
using namespace std;

// Task structure to represent diagnostic tasks
struct Task {
    int id;
    string description;
    int priority; // Higher value = higher priority
    int executionTimeMs; // Time required to execute the task in milliseconds
   
    Task(int i, const string& desc, int p, int execTime)
        : id(i), description(desc), priority(p), executionTimeMs(execTime) {}
 
    // Overload < operator for priority queue (max-heap)
    bool operator<(const Task& other) const {
        return priority < other.priority; // Higher priority first
    }
};
 
// Class representing a real-time Vehicle Diagnostic System
class VehicleDiagnosticSystem {
private:
    queue<Task> routineQueue;  // For routine tasks like sensor checks
    priority_queue<Task> emergencyQueue;  // For urgent tasks
    stack<string> errorLog;  // For logging recent errors
    list<int> tirePressureHistory;  // For storing recent tire pressure readings
    map<string, int> sensorData;  // For storing sensor readings (e.g., temperature -> 75°C)
   
public:
    // Add routine task to the queue
    void addRoutineTask(int id, const string& desc, int priority, int execTime) {
        routineQueue.push(Task(id, desc, priority, execTime));
    }
 
    // Add emergency task to the priority queue
    void addEmergencyTask(int id, const string& desc, int priority, int execTime) {
        emergencyQueue.push(Task(id, desc, priority, execTime));
    }
 
    // Log an error
    void logError(const string& error) {
        errorLog.push(error);  // Store the most recent error
    }
 
    // Add sensor data
    void updateSensorData(const string& sensor, int value) {
        sensorData[sensor] = value;
    }
 
    // Record tire pressure history
    void addTirePressureReading(int pressure) {
        tirePressureHistory.push_back(pressure);  // Store tire pressure reading
        if (tirePressureHistory.size() > 5) {
            tirePressureHistory.pop_front();  // Keep only the last 5 readings
        }
    }
 
    // Process emergency tasks first, then routine tasks
    void processTasks() {
        cout << "Processing emergency tasks...\n";
        while (!emergencyQueue.empty()) {
            Task task = emergencyQueue.top();
            emergencyQueue.pop();
            cout << "Executing Task ID: " << task.id
                      << ", Description: " << task.description
                      << ", Priority: " << task.priority
                      << ", Execution Time: " << task.executionTimeMs << "ms\n";
            // this_thread::sleep_for(chrono::milliseconds(task.executionTimeMs));  // Simulate task execution
        }
 
        cout << "Processing routine tasks...\n";
        while (!routineQueue.empty()) {
            Task task = routineQueue.front();
            routineQueue.pop();
            cout << "Executing Task ID: " << task.id
                      << ", Description: " << task.description
                      << ", Execution Time: " << task.executionTimeMs << "ms\n";
            // this_thread::sleep_for(chrono::milliseconds(task.executionTimeMs));  // Simulate task execution
        }
    }
 
    // Show the latest errors logged
    void showErrorLog() {
        cout << "Recent Errors: \n";
        while (!errorLog.empty()) {
            cout << errorLog.top() << endl;
            errorLog.pop();
        }
    }
 
    // Display sensor data (example: temperature, tire pressure)
    void showSensorData() {
        cout << "Current Sensor Data: \n";
        for (const auto& sensor : sensorData) {
            cout << sensor.first << ": " << sensor.second << "°C\n";
        }
    }
 
    // Display tire pressure history (last 5 readings)
    void showTirePressureHistory() {
        cout << "Tire Pressure History (Last 5 readings): \n";
        for (int pressure : tirePressureHistory) {
            cout << pressure << " PSI\n";
        }
    }
};
 
void simulateVehicleDiagnosticSystem() {
    VehicleDiagnosticSystem vds;
 
    // Simulate adding routine tasks (sensor checks, diagnostics)
    vds.addRoutineTask(1, "Check Engine Temperature", 3, 50);
    vds.addRoutineTask(2, "Check Tire Pressure", 2, 40);
    vds.addRoutineTask(3, "Check Oil Level", 1, 30);
 
    // Simulate adding emergency tasks (critical sensor failure, etc.)
    vds.addEmergencyTask(4, "Engine Overheating", 10, 100);
    vds.addEmergencyTask(5, "Low Tire Pressure", 8, 80);
 
    // Simulate logging errors
    vds.logError("Engine Temperature Sensor Failure");
    vds.logError("Low Battery Voltage");
 
    // Simulate updating sensor data
    vds.updateSensorData("Engine Temperature", 90);
    vds.updateSensorData("Tire Pressure", 32);
    vds.updateSensorData("Oil Level", 70);
 
    // Simulate tire pressure readings (store history)
    vds.addTirePressureReading(34);
    vds.addTirePressureReading(32);
    vds.addTirePressureReading(31);
    vds.addTirePressureReading(33);
    vds.addTirePressureReading(30);
 
    // Display current sensor data
    vds.showSensorData();
 
    // Display tire pressure history
    vds.showTirePressureHistory();
 
    // Process all tasks
    vds.processTasks();
 
    // Display recent error logs
    vds.showErrorLog();
}
 
int main() {
    cout << "Simulating Vehicle Diagnostic System\n";
    simulateVehicleDiagnosticSystem();
    return 0;
}
