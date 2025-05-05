#include <iostream>
using namespace std;

class Shape {
protected:
    string color;
    string pattern;
public:
    Shape(string c, string p) : color(c), pattern(p) {}

    // Setter و Getter برای رنگ
    void setColor(string c) { color = c; }
    string getColor() const { return color; }

    // Setter و Getter برای الگو
    void setPattern(string p) { pattern = p; }
    string getPattern() const { return pattern; }

    void Display() {
        cout << "the color of shape = " << color << ", the pattern = " << pattern << endl;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r, string c1, string p1) : Shape(c1, p1), radius(r) {}

    // Setter و Getter برای شعاع
    void setRadius(float r) { radius = r; }
    float getRadius() const { return radius; }

    void Display() {
        cout << "Circle radius = " << radius << ", color = " << getColor() << ", pattern = " << getPattern() << endl;
    }
};

int main() {
    Shape s1("Blue", "dotdot");
    Circle c1(2.5, "Yellow", "LineLine");

    s1.Display();
    c1.Display();

    // تغییر رنگ و الگو با استفاده از Setterها
    s1.setColor("Red");
    s1.setPattern("Stripes");
    c1.setRadius(5.0);

    cout << "\nAfter modification:\n";
    s1.Display();
    c1.Display();

    return 0;
}
