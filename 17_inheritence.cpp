#include <iostream>
using namespace std;

//  Ortak Base Sınıf
class Device {
public:
    Device() { cout << "[Device] Constructor\n"; }
    void powerOn() { cout << "Device is powered on.\n"; }
    virtual void info() { cout << "Generic device.\n"; }
    virtual ~Device() { cout << "[Device] Destructor\n"; }
};

//  İki farklı sınıf Device'dan türetiliyor
class Phone : public Device {
public:
    Phone() { cout << "[Phone] Constructor\n"; }
    void call() { cout << "Making a phone call...\n"; }
    void info() override { cout << "This is a phone.\n"; }
    ~Phone() { cout << "[Phone] Destructor\n"; }
};

class Laptop : public Device {
public:
    Laptop() { cout << "[Laptop] Constructor\n"; }
    void code() { cout << "Coding on a laptop...\n"; }
    void info() override { cout << "This is a laptop.\n"; }
    ~Laptop() { cout << "[Laptop] Destructor\n"; }
};

// (Multiple Inheritance)
class SmartDevice : public Phone, public Laptop {
public:
    SmartDevice() { cout << "[SmartDevice] Constructor\n"; }

    void useAllFeatures() {
        Phone::call();
        Laptop::code();
    }

    void info() {
        cout << "This is a smart device.\n";
    }

    ~SmartDevice() { cout << "[SmartDevice] Destructor\n"; }
};


int main() {
    cout << "--- Common Base Inheritance ---\n";
    Phone p;
    p.powerOn();   // Device'tan geldi
    p.call();
    p.info();      // Override edildi

    Laptop l;
    l.powerOn();   // Device'tan geldi
    l.code();
    l.info();

    cout << "\n--- Multiple Inheritance Example ---\n";
    SmartDevice sd;
    // SmartDevice, hem Phone hem Laptop'tan miras aldı
    sd.useAllFeatures();
    sd.Phone::powerOn();   // Ambiguity olduğu için hangi path belirtmek gerek
    sd.Laptop::powerOn();
    sd.info();

    return 0;
}

