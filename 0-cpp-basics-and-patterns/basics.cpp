#include<iostream>
// #include<bits/stdc++.h> // Includes almost all standard libraries at once
#include <cstring>
#include<string>

using namespace std;

void modify_by_value(int a) {
    a = a + 10;
}

void modify_by_ref(int &a) {
    a = a + 10;
}

int main() {
    cout << "Hello, World!";

    // newline

    cout << endl << "This will be in newline"; // endl: inserts a new line and flushes the output buffer
    cout << "\n" << "This will also be in newline"; // faster

    // user input

    int x;
    cin >> x;
    cout << endl << "value of x: " << x << endl;

    // data types
    // primitives: int, float, double, char, bool, long, long long
    // derived types: arrays, pointers, references, functions
    // user defined: struct, class, enum

    // operators
    // unary operators: ++, --
    // airthmetic operators: +, -, *, /, %
    // relational operators: <, <=, >, >=, ==, !=
    // logical operators: &&, ||, !
    // bitwise operators: &, |, <<, >>, ~, ^
    // assignment operators: =, *=, +=, -=, /=, %=
    // ternary operator: ?:

    // if-else if-else
    // preferred choice for scenarios where the conditions 
    // are not easily enumerable or where you need to execute
    // different blocks of code based on various conditions
    int marks = 45;

    if (marks < 30) {
        cout << "Fail";
    } else if (marks >= 30 && marks < 40) {
        cout << "DD";
    } else if (marks >= 40 && marks < 50) {
        cout << "CD";
    } else if (marks >= 50 && marks < 60) {
        cout << "CC";
    } else if (marks >= 60 && marks < 70) {
        cout << "BC";
    } else if (marks >= 70 && marks < 80) {
        cout << "BB";
    } else if (marks >= 80 && marks < 90) {
        cout << "AB";
    } else {
        cout << "AA";
    }

    // switch case
    // switch statements shine when you have a single 
    // variable to compare against multiple distinct values
    //
    // A switch statement necessitates that its expression 
    // results in a constant value
    //
    // If none of the cases match the expression, the code
    // inside the default block will execute
    //
    // Switch statements are exclusively designed to handle 
    // integer or character values
    int day;

    cout << "Enter a number (1-7): ";
    cin >> day;
    
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid" << endl;
    }

    // for loop
    for(int i = 0; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    for(int i = 0; i <= 3; i++) {
        for(int j = 0; j <= 3; j++) {
            cout << i << j << " ";
        }
        cout << endl;
    }

    // while loop
    int n = 5;
    int factorial = 1;

    while (n > 0) {
        factorial *= n;
        n--;
    }

    cout << factorial << endl;

    // do-while loop
    // first execute then check condition
    int k = 5;

    do {
        cout << k << " ";
        k--;
    } while (k > 0);

    cout << endl;

    // arrays
    // type arrayName[arraySize];
    int arr[5] = {10, 20, 30, 40, 50};
    
    // int stackArray[10];  // Stored in stack memory
    // int* heapArray = new int[10];  // Stored in heap memory
    // delete[] heapArray;  // Must explicitly free memory

    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // C style strings
    char src[] = "World";
    cout << src << endl;

    char dest[20];
    cout << dest << endl;
    strcpy(dest, "Hello "); // copy
    strcat(dest, src); // concatenate
    
    int len = strlen(dest); // length (excluding '\0')
    cout << len << endl;

    // Cpp strings
    string str = "Hello";

    // access - O(1)
    char c1 = str[0];
    cout << c1 << endl;
    char c2 = str.at(0);
    cout << c2 << endl;

    // size operations - O(1)
    int len2 = str.length();
    cout << len2 << endl;
    int cap = str.capacity();
    cout << cap << endl;
    bool empty = str.empty();
    cout << empty << endl;

    // modification
    str += " World"; // append - O(n) for reallocation if needed
    cout << str << endl;
    str.insert(5, ","); // insert - O(n)
    cout << str << endl;
    str.erase(5, 1); // erase - O(n)
    cout << str << endl;
    str.replace(0, 5, "Hi"); // replace - O(n)
    cout << str << endl;

    // search - O(n) to O(n*m)
    int pos = str.find("World");  // returns position or string::npos
    cout << pos << endl;

    for (char& c : str) {
        c = tolower(c); // toupper()
        cout << c << " ";
    }
    cout << endl;

    // functions
    // pass by value
    int z = 5;
    modify_by_value(z);
    cout << z << endl;

    // pass by reference
    modify_by_ref(z);
    cout << z << endl;

    return 0;
}
