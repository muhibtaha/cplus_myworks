#include <iostream>
#include <cmath>
using namespace std;

// Soyut sınıf
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
    virtual void display() const = 0;
    virtual ~Shape() {} // Sanal yıkıcı
};

// Daire sınıfı
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
    void display() const override {
        cout << "Circle with radius: " << radius << ", area: " << area() << endl;
    }
};

// Dikdörtgen sınıfı
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
    void display() const override {
        cout << "Rectangle " << width << "x" << height << ", area: " << area() << endl;
    }
};

int main() {
    // Polymorphic kullanım
    Shape* shapes[2];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i) {
        shapes[i]->display(); // Her biri kendi override fonksiyonunu çağırır
        delete shapes[i];     // Bellek temizliği
    }

    return 0;
}

