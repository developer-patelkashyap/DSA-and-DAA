#include<iostream>

using namespace std;

int main() {
    int n = 5;

    // *****
    // *****
    // *****
    // *****
    // *****
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // *
    // **
    // ***
    // ****
    // *****
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // 1
    // 12
    // 123
    // 1234
    // 12345
    for(int i = 0; i < n; i++) {
        int temp = 1;
        for(int j = 0; j <= i; j++) {
            cout << temp;
            temp ++;
        }
        cout << endl;
    }

    // 1
    // 22
    // 333
    // 4444
    // 55555
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << i+1;
        }
        cout << endl;
    }

    // *****
    // ****
    // ***
    // **
    // *
    for(int i = n; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // 12345
    // 1234
    // 123
    // 12
    // 1
    for(int i = n; i > 0; i--) {
        int temp = 1;
        for(int j = 0; j < i; j++) {
            cout << temp;
            temp ++;
        }
        cout << endl;
    }

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for(int i = 0; i <= n; i++) {
        for (int s = 1; s <= n - i; s++){
            cout << " ";
        }

        for (int st = 1; st <= 2*i - 1; st++){
            cout << "*";
        }

        cout << endl;
    }

    // *********
    //  *******
    //   *****
    //    ***
    //     *
    for(int i = n; i >= 0; i--) {
        for (int s = 1; s <= n - i; s++){
            cout << " ";
        }
        
        for (int st = 1; st <= 2*i - 1; st++){
            cout << "*";
        }

        cout << endl;
    }


    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    for(int i = 0; i <= n; i++) {
        for (int s = 1; s <= n - i; s++){
            cout << " ";
        }

        for (int st = 1; st <= 2*i - 1; st++){
            cout << "*";
        }

        cout << endl;
    }

    for(int i = n; i >= 0; i--) {
        for (int s = 1; s <= n - i; s++){
            cout << " ";
        }
        
        for (int st = 1; st <= 2*i - 1; st++){
            cout << "*";
        }

        cout << endl;
    }
    

    // *
    // **
    // ***
    // ****
    // *****
    // *****
    // ****
    // ***
    // **
    // *
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = n; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}