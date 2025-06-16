// template_examples.cpp
#include <iostream>
#include <string>
using namespace std;

// 1. Template Fonksiyon
// Türden bağımsız swap fonksiyonu
template <typename T>
void swapDeger(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// 2. Template Sınıf
// Türden bağımsız kutu sınıfı
template <typename T>
class Kutu {
private:
    T veri;
public:
    void ayarla(T v) {
        veri = v;
    }
    T al() const {
        return veri;
    }
};

// 3. Birden Fazla Türle Çalışan Template Sınıf
template <typename T1, typename T2>
class Cift {
public:
    T1 ilk;
    T2 ikinci;

    Cift(T1 i, T2 j) : ilk(i), ikinci(j) {}

    void yaz() {
        cout << "Ilk: " << ilk << ", Ikinci: " << ikinci << endl;
    }
};

// 4. Template Specialization
// Belirli türler için özel davranış

// Genel şablon
template <typename T>
class Yazdir {
public:
    void yaz() {
        cout << "Genel tür\n";
    }
};

// string için özel hali
template <>
class Yazdir<string> {
public:
    void yaz() {
        cout << "Bu bir string!\n";
    }
};

int main() {
    // Template Fonksiyon kullanımı
    int x = 10, y = 20;
    swapDeger(x, y);
    cout << "x: " << x << ", y: " << y << endl;

    double a = 3.14, b = 2.71;
    swapDeger(a, b);
    cout << "a: " << a << ", b: " << b << endl;

    string s1 = "Ali", s2 = "Veli";
    swapDeger(s1, s2);
    cout << "s1: " << s1 << ", s2: " << s2 << endl;

    // Template Sınıf kullanımı
    Kutu<int> k1;
    k1.ayarla(42);
    cout << "Kutu<int>: " << k1.al() << endl;

    Kutu<string> k2;
    k2.ayarla("Merhaba");
    cout << "Kutu<string>: " << k2.al() << endl;

    // Çok türlü şablon sınıf
    Cift<int, string> c1(5, "Beş");
    c1.yaz();

    // Şablon özelleştirme kullanımı
    Yazdir<int> y1;
    y1.yaz();

    Yazdir<string> y2;
    y2.yaz();

    return 0;
}

