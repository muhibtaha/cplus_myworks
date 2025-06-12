class Animal {
public:
    void speak() { cout << "Animal sound\n"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Dog barks\n"; }
};

int main() {
    Dog d;
    Animal* a = &d;  // ✅ Upcasting - güvenli
    a->speak();      // Animal metodu çağrılır
}


class Animal {
public:
    virtual void speak() { cout << "Animal sound\n"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Dog barks\n"; }
};

int main() {
    Animal* a = new Dog(); // upcasting
    Dog* d = dynamic_cast<Dog*>(a); // ✅ güvenli downcast
    if (d != nullptr) {
        d->bark(); // cast başarılıysa çağrılır
    } else {
        cout << "Downcasting failed\n";
    }
}

