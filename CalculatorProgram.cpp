#include <cmath>
#include <iostream>
using namespace std;

/* BASIC OPERATIONS CLASS DECLARATIONS */
class basicOperations {
private:
    int sum;
    int num;
    float length;
    float width;
    float height;
    double area;
    float perimeter;
    char operation;
public:
    basicOperations();
    ~basicOperations();
    int addition();
    int subtraction();
    int multiplication();
    double division();
    double anyOperation();
    double Area();
    double distance();
};

/* BASIC OPERATIONS CLASS DEFINITIONS */

//CONSTRUCTOR
basicOperations::basicOperations() { 
    sum = 0;
    num = 0;
    operation = ' ';
    length = 0.0;
    width = 0.0;
    height = 0.0;
    area = 0.0;
    perimeter = 0.0;
}

//DESTRUCTOR
basicOperations::~basicOperations() { 
    sum = 0;
}

//ADDITION FUNCTION
int basicOperations::addition() {
    cout << "\nPlease enter 0 to signify the end of your addition expression: \n";
    cin >> num;
    while (num != 0) {
        sum += num;
        cin >> num;
    }
    cout << "\n\nYour total is: \n\n" << sum;
    return sum;
}

// SUBTRACTION FUNCTION
int basicOperations::subtraction() { 
    int subNum;
    int subNum1;
    cout << "\n\nPlease enter 0 to signify the end of your addition expression: \n";
    cin >> num;
        subNum = num;
        cin >> num;
        subNum1 = num;
        sum = subNum - subNum1;
        cin >> num;
        if (num == 0) {
            cout << "\n\n-----------------------------------------";
            cout << "\nThe sum of your expression is: " << sum;
            cout << "\n------------------------------------------";
        }
        else {
            while (num != 0) {
                sum -= num;
                cin >> num;
            }
                cout << "\n\nThe sum of your expression is: \n\n" << sum << endl << endl;
        }
    return sum;
}

//MULTIPLICATION FUNCTION
int basicOperations::multiplication() { 
    cout << "\n\nPlease enter 0 to signify the end of your multiplied expression: \n";
    cin >> num;
    sum = num;
    cin >> num;
    sum *= num;
    cin >> num;
    if (num == 0) {
        cout << "\n\nThe product of your expression is: " << sum;
    }
    else {
        while (num != 0) {
            sum *= num;
            cin >> num;
            cout << endl;
        }
        cout << "\n\nThe product of your expression is: " << sum;
    }
    return sum;
}

// DIVISION FUNCTION
double basicOperations::division() {
    cout << "\n\nPlease enter 0 to signify the end of your division equation: \n";
    cin >> num;
    double sum1 = num;
    cin >> num;
    sum1 /= num;
    cin >> num;
    if (num == 0) {
        cout << "The qutient of your expression is: " << sum1;
    }
    else {
        while (num != 0) {
            sum1 /= num;
            cin >> num;
        }
    cout << "The qutient of your expression is: " << sum1;
    }
    return sum1;
}

// ANY OPERATION FUNCTION
double basicOperations::anyOperation() {
    cout << "\n\n1.) Enter your expression number by number.";
    cout << "\n2.) Signify the desired operation with +, -, * ot /.";
    cout << "\n3.) Please enter 0 to signify the end of your expression: \n\n";
    double sum1;
    cin >> num;
    sum1 = num;
    cin >> operation;
    cin >> num;
    switch (operation) {
        case '+':
            sum1 += num;
            cin >> operation;
            cin >> num;
            if (num == 0) {
                cout << "\n\nThe result of your expression is: " << sum1;
            }
            break;
        case '-':
            sum1 -= num;
            cin >> operation;
            cin >> num;
            if (num == 0) {
                cout << "\n\nThe result of your expression is: " << sum1;
            }
            break;
        case '*':
            sum1 *= num;
            cin >> operation;
            cin >> num;
            if (num == 0) {
                cout << "\n\nThe result of your expression is: " << sum1;
            }
            break;
        case '/':
            sum1 /= num;
            cin >> operation;
            cin >> num;
            if (num == 0) {
                cout << "\n\nThe result of your expression is: " << sum1;
            }
            break;
    }
    while (num != 0) {
        if (operation == '+') {
            sum1 += num;
            cin >> operation;
            cin >> num;
        }
        else if (operation == '-'){
            sum1 -= num;
            cin >> operation;
            cin >> num;
        }
        else if (operation == '*') {
            sum1 *= num;
            cin >> operation;
            cin >> num;
        }
        else if (operation == '/') {
            sum1 /= num;
            cin >> operation;
            cin >> num;
        }
        else {
            cout << "That particular operation is currently unavailable.";
        }
        cout << "\n\nThe result of your expression is: " << sum1;
    }
    return sum1;
}

/* AREA OF RECTANGELE FUNCTION */
double basicOperations::Area() {
    cout << "\n\nIs the rectangle 2 or 3-dimensional?\n";
    int size;
    cin >> size;
    switch (size) {
        case 2:
            cout << "\n\nPlease enter the length: \n";
            cin >> length;
            cout << "\n\nPlease enter the width: \n";
            cin >> width;
            area = length * width;
            cout << "\n\nThe area of your triangle is " << area << ".\n";
            break;
        case 3:
            cout << "\n\nPlease enter the length: \n";
            cin >> length;
            cout << "\n\nPlease enter the width: \n";
            cin >> width;
            cout << "\n\nPlease enter the height: \n";
            cin >> height;
            area = 2 * ((length * width) + (length * height) + (width * height));
            cout << "\n\nThe area of your triangle is " << area << ".\n";
            break;
        default:
            cout << "\n*** Number must be 2 or 3 ***\n";
            break;
    }
    return area;
}

/* DISTANCE FUNCTION */
double basicOperations::distance() {
    double x1, y1, x2, y2; 
    double d;
    cout << "\n\nPlease enter first set of coordinates: ";
    cin >> x1 >> y1;
    cout << "\n\nPlease enter second set of coordinates: ";
    cin >> x2 >> y2;
    d = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (x2 - x1));
    d = sqrt(d);
    cout << "\n\nThe distance between your two points is " << d << endl;
    return d;
}
int main()
{
    cout << "\nWELCOME TO THE CALCULATOR APPLICATION!"; // HOME PAGE
    cout << "\n\nPlease select from the available options using the corresponding number:";
    cout << "\n\n1.) Addition Only";
    cout << "\n2.) Subtraction Only";
    cout << "\n3.) Multiplication Only";
    cout << "\n4.) Division Only";
    cout << "\n5.) Any Basic Operation (+, -, *, /)";
    cout << "\n6.) Area of 2D or 3D Rectangle";
    cout << "\n7.) Distance Between Two Points\n\n";
    int choice;
    cin >> choice;
    basicOperations x;
    switch (choice) {
        case 1:
            x.addition();
            cout << "\n\nThank you for using this application!\n";
            break;
        case 2:
            x.subtraction();
            cout << "\n\nThank you for using this application!\n";
            break;
        case 3:
            x.multiplication();
            cout << "\n\nThank you for using this application!\n";
            break;
        case 4:
            x.division();
            cout << "\n\nThank you for using this application!\n";
            break;
        case 5:
            x.anyOperation();
            cout << "\n\nThank you for using this application!\n";
            break;
        case 6: 
            x.Area();
            cout << "\n\nThank you for using this application!\n";
            break;
        case 7:
            x.distance();
            cout << "\n\nThank you for using this application!\n";
            break;
    }
}

