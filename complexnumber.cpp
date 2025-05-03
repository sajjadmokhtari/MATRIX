#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Overload - operator
    Complex operator-(const Complex& obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    // Overload * operator
    Complex operator*(const Complex& obj) {
        return Complex(real * obj.real - imag * obj.imag, real * obj.imag + imag * obj.real);
    }

    // Overload / operator
    Complex operator/(const Complex& obj) {
        float dominator = obj.real * obj.real + obj.imag * obj.imag;
        if (dominator == 0) {
            cout << "taghsim bar sefr" << endl;
            return Complex();
        }
        float NReal = (real * obj.real + imag * obj.imag) / Makhraj;
        float NImag = (imag * obj.real - real * obj.imag) / Makhraj;
        return Complex(newReal, newImag);
    }

   =
    friend ostream& operator<<(ostream& out, const Complex& C) {
        out << C.real << (C.imag >= 0 ? "+" : "") << C.imag << "i";
        return out;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    Complex menha = c1 - c2;
    Complex zarb = c1 * c2;
    Complex taghsim = c1 / c2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << menha << endl;
    cout << "Product: " << zarb << endl;
    cout << "Division: " << taghsim << endl;

    return 0;
}
