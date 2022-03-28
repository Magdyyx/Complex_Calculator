// Complex Number Calculator using C++ using OOP
#include <cmath>
#include <complex>
#include <iostream>
using namespace std;
class com {
    // private variable declarations
    double reall, img;

public:

    void read()
    {
        // Taking real values from the user
        cout << "Real Part value: ";
        cin >> reall;

        // Taking imaginary values from the user
        cout << "Img Part value: ";
        cin >> img;
    }
    // display function declaration
    void display();

    //Addition Operation function declaration
    com operator+(com);

    //Subtraction Operation function declaration
    com operator-(com);

    //Multiplication operation function declaration
    com operator*(com);

    //Division function declaration
    com operator/(com);

    //Conjugate operation function declaration
    com operator~(void);


    // Declare inside com class and show Real part of
    // complex number
    double get_real()
    {
        // return real part
        return ((*this).reall);
    }
    // Declare inside com class and
    // show Imaginary part of complex number
    double get_img()
    {
        // return img part
        return ((*this).img);
    }
};
// Display Entered Complex Number
void com::display()
{
    // if imaginary part is positive then
    // it display real + i img complex number
    if (img >= 0) {
        cout << reall << "+i" << img << endl;
    }

        // if imaginary part is negative then
        // it display real - i img complex number
    else {
        cout << reall << "-i" << (-1) * img << endl;
    }
}
// Add two user entered complex number
com com::operator+(com o2)
{
    // declare temporary variable of class data type
    com temp;

    // add real part of two complex number
    // and store in real part of temporary variable
    temp.reall = reall + o2.reall;

    // add imaginary part of two complex number
    // and store in imaginary part of temporary variable
    temp.img = img + o2.img;

    // return temporary variable to function
    return temp;
}
// Subtract two user entered complex number
com com::operator-(com o2)
{
    // declare temporary variable of class data type
    com temp;

    // subtract real part of two complex number
    // and store in real part of temporary variable
    temp.reall = reall - o2.reall;

    // subtract imaginary part of two complex number and
    // store in imaginary part of temporary variable
    temp.img = img - o2.img;

    // return temporary variable to function
    return temp;
}
// Multiply two user entered complex number
com com::operator*(com o2)
{
    // declare temporary variable of class data type
    com temp;

    // Add Multiplication of real part of two complex
    // number & imaginary part of two complex number and
    // store in real part of temporary variable
    temp.reall = (reall * o2.reall) + (-1 * (img * o2.img));

    // Add multiplication of real part of 1st and img part
    // of 2nd complex number and multiplication of img part
    // of 1st and real part of 2nd complex number and store
    // in real part of temporary variable
    temp.img = (img * o2.reall) + (reall * o2.img);

    // return temporary variable to function
    return temp;
}
// Divide two user entered complex number
com com::operator/(com o2)
{
    // declare temporary,o,num,den
    // variable of class data type
    com o, num, den, temp;

    // call conjugate function and perfor conjugate
    // operation
    o = ~o2;

    // calculate numerator and denominator complex number
    num = (*this) * (o);
    den = o2 * o;

    // divide numerator real part with denominator real part
    // and store in real part of temporary variable
    temp.reall = num.reall / den.reall;

    // divide numerator img part with denominator img part
    // and store in img part of temporary variable
    temp.img = num.img / den.reall;

    // return temporary variable to function
    return temp;
}
// find conjugate of both complex numbers
com com::operator~(void)
{
    // declare temporary variable of class data type
    com temp;

    // Store real part in real part of temporary variable
    temp.reall = reall;

    // Store multiplication of -1 and img in img part of
    // temporary variable to make conjugate
    temp.img = -1 * img;

    // return temporary variable to function
    return temp;
}

int main()
{
    cout << "**********************Operations On Complex "
            "Number***************************";

    // Declare o1,o2 and o3 variable of class name data type
    com o1, o2, o3;

    // declare choice variable of integer type
    int choice;
    do {
        // Enter you choice to perform operation
        cout << "\nEnter Choice\n\n";
        cout << "1.Read Complex Number\n\n";
        cout << "2.Display Complex Number\n\n";
        cout << "3.Addition of Complex Number\n\n";
        cout << "4.Subtraction of Complex Number\n\n";
        cout << "5.Multiplication of Complex Number\n\n";
        cout << "6.Division of Complex Number\n\n";
        cout << "7.Exit\n\n";
        cin >> choice;
        cout << "\n";

        // use switch case according to user input
        switch (choice) {
            case 1:
                // Enter value of complex number
                cout << "Enter Values: \n";

                // call read() function
                o1.read();
                o2.read();
                break;
            case 2:
                cout << "Values are: \n";

                // call display function to display complex
                // number
                o1.display();
                o2.display();
                break;
            case 3:
                // call operator+() function to add complex
                // number
                o3 = o1 + o2;
                cout << "Addition is: \n";
                o3.display();
                break;
            case 4:
                // call operator-() function to subtract complex
                // number
                o3 = o1 - o2;
                cout << "Subtraction is: \n";
                o3.display();
                break;
            case 5:
                // call operator*() function to Multiply complex
                // number
                o3 = o1 * o2;
                cout << "Multiplication is: \n";
                o3.display();
                break;
            case 6:
                // call operator/() function to divide complex
                // number
                o3 = o1 / o2;
                cout << "Division is: \n";
                o3.display();
                break;
            case 7:
                // it return 1 to do while() loop and stop
                // execution
                return 1;
                break;
            default:
                // if user enter invalid choice then it print
                // Enter valid option!!
                cout << "Enter valid option!!";
                break;

        }
    } while (1);
    return 0;
}



//#include <iostream>
//using namespace std;
//
//class ComplexNumber {
//
//public:
//    double real;
//    double imaginary;
//
//    void add(ComplexNumber a, ComplexNumber b) {
//
//        //adding real and imaginary numbers
//        double real = a.real + b.real;
//        double imaginary = a.imaginary + b.imaginary;
//        ComplexNumber c = ComplexNumber(real, imaginary);
//        cout << "a + b = " << c.real << " + (" << c.imaginary << ") * i" << endl;
//    }
//
//    void sub(ComplexNumber a, ComplexNumber b) {
//
//        //Just subtract real- and imaginary-parts
//        double real = a.real - b.real;
//        double imaginary = a.imaginary - b.imaginary;
//        ComplexNumber c = ComplexNumber(real, imaginary);
//        cout << "a - b = " << c.real << " + (" << c.imaginary << ") * i" << endl;
//    }
//
//    void multiply(ComplexNumber a, ComplexNumber b) {
//
//        //Use binomial theorem to find formula to multiply complex numbers
//        double real = a.real * b.real - a.imaginary * b.imaginary;
//        double imaginary = a.imaginary * b.real + a.real * b.imaginary;
//        ComplexNumber c = ComplexNumber(real, imaginary);
//        cout << "a * b = " << c.real << " + (" << c.imaginary << ") * i" << endl;
//    }
//
//
//    void divide(ComplexNumber a, ComplexNumber b) {
//
//        //Again binomial theorem
//        double real = (a.real * b.real + a.imaginary * b.imaginary) / (b.real * b.real + b.imaginary * b.imaginary);
//        double imaginary = (a.imaginary * b.real - a.real * b.imaginary) / (b.real * b.real + b.imaginary * b.imaginary);
//        ComplexNumber c = ComplexNumber(real, imaginary);
//        cout << "a : b = " << c.real << " + (" << c.imaginary << ") * i" << endl;
//    }
//
//    /*
//     * Constructor to create complex numbers
//     */
//    ComplexNumber(double real, double imaginary) {
//        this->real = real;
//        this->imaginary = imaginary;
//    }
//};
//
//int main() {
//
//    /*
//     * Variables for the real- and imaginary-parts of
//     * two complex numbers
//     */
//    double realA;
//    double imaginaryA;
//    double realB;
//    double imaginaryB;
//
//    /*
//     * User input
//     */
//    cout << "enter real(A), imag(A), real(B) and imag(B) >> ";
//    cin >> realA >> imaginaryA >> realB >> imaginaryB;
//    cout << endl;
//
//    /*
//     * Creation of two objects of the type "ComplexNumber"
//     */
//    ComplexNumber a = ComplexNumber(realA, imaginaryA);
//    ComplexNumber b = ComplexNumber(realB, imaginaryB);
//
//    /*
//     * Calling the functions to add, subtract, multiply and
//     * divide the two complex numbers.
//     */
//    a.add(a, b);
//    a.sub(a, b);
//    a.multiply(a, b);
//    a.divide(a, b);
//    return 0;
//}