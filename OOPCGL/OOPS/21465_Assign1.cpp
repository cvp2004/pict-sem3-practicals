/*
Author : Chaitanya Paraskar
Roll No.: 21465
Lab : OOPCGL Lab
Practical No.: 1
Aim :
Implement a class Complex which represents the Complex Number data type,
Implement the following operations:
l. Constructor (including a default constructor which creates thc complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers,
4. Overloaded and to print and read complex Numbers.
*/
#include <iostream>

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double real = 0, double imag = 0) : real(real), imag(imag) {}

    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator*(const Complex &other) const
    {
        double real_part = (real * other.real) - (imag * other.imag);
        double imag_part = (real * other.imag) + (imag * other.real);
        return Complex(real_part, imag_part);
    }

    friend std::ostream &operator<<(std::ostream &os, const Complex &c)
    {
        if (c.imag >= 0)
        {
            os << c.real << " + " << c.imag << "i";
        }
        else
        {
            os << c.real << " - " << -c.imag << "i";
        }
        return os;
    }

    friend std::istream &operator>>(std::istream &is, Complex &c)
    {
        is >> c.real >> c.imag;
        return is;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(1, -1);

    // Addition
    Complex c3 = c1 + c2;
    std::cout << "c1 + c2 = " << c3 << std::endl;

    // Multiplication
    Complex c4 = c1 * c2;
    std::cout << "c1 * c2 = " << c4 << std::endl;

    // Printing and reading
    Complex c5;
    std::cout << "Enter a complex number (e.g., 5 -2): ";
    std::cin >> c5;
    std::cout << "Read Complex Number: " << c5 << std::endl;

    return 0;
}
/*
Output:-

$ g++ 21465_Assign1.cpp -o Assign1 && ./Assign1
c1 + c2 = 3 + 2i
c1 * c2 = 5 + 1i
Enter a complex number (e.g., 5 -2): 4 -2 <ENTER>
Read Complex Number: 4 - 2i
*/