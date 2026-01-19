#include <iostream>
#include <list>
using namespace std;

// Observer Interface
class ISubscribe {
public:
    virtual void notify(string msg) = 0;
};

// ConcreteObserver: Display Panel
class DisplayPanel : public ISubscribe {
public:
    void notify(string msg) override {
        cout << "Display Panel: " << msg << endl;
    }
};

// ConcreteObserver: Audio Alerts
class AudioAlerts : public ISubscribe {
public:
    void notify(string msg) override {
        cout << "Audio Alerts: " << msg << endl;
    }
};

// Subject Interface
class IClimateControl {
public:
    virtual void subscribe(ISubscribe* observer) = 0;
    virtual void unsubscribe(ISubscribe* observer) = 0;
    virtual void notify(string msg) = 0;
};

// ConcreteSubject
class ClimateControlSystem : public IClimateControl {
private:
    list<ISubscribe*> observers;
public:
    void subscribe(ISubscribe* observer) override {
        observers.push_back(observer);
    }

    void unsubscribe(ISubscribe* observer) override {
        observers.remove(observer);
    }

    void notify(string msg) override {
        for (auto observer : observers) {
            observer->notify(msg);
        }
    }

    void setTemperature(int temp) {
        cout << "Setting temperature to: " << temp << "°C" << endl;
        notify("Temperature updated to: " + to_string(temp) + "°C");
    }
};

int main() {
    ClimateControlSystem climateControl;
    DisplayPanel displayPanel;
    AudioAlerts audioAlerts;

    climateControl.subscribe(&displayPanel);
    climateControl.subscribe(&audioAlerts);

    climateControl.setTemperature(22); // Notify observers

    climateControl.unsubscribe(&displayPanel); // Unsubscribe display panel

    climateControl.setTemperature(24); // Notify remaining observers

    // Clean up
    return 0;
}
