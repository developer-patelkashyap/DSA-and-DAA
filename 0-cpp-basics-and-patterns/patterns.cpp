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


    // 1
    // 01
    // 101
    // 0101
    // 10101
    for(int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            for(int j = 0; j < i; j++) {
                if(j % 2 == 0) {
                    cout << "0";
                } else {
                    cout << "1";
                }
            }
            cout << endl;
        } else {
            for(int j = 0; j < i; j++) {
                if(j % 2 == 0) {
                    cout << "1";
                } else {
                    cout << "0";
                }
            }
            cout << endl;
        }
    }

    // 1      1
    // 12    21
    // 123  321
    // 12344321
    int spaces = 2*(n - 1);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << j + 1;
        }

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        
        for (int j = i; j > 0; j--) {
            cout << j;
        }
        
        spaces -= 2;
        cout << endl;
    }

    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    // 11 12 13 14 15 
    int temp = 1;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < i; j ++) {
            cout << temp << " ";
            temp ++;
        }
        cout << endl;
    }

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    for(int i = 0; i <= n; i++) {
        temp = 65;
        for(int j = 0; j < i; j++) {
            cout << char(temp);
            temp ++;
        }
        cout << endl;
    }

    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    for(int i = 0; i <= n; i++) {
        temp = 65;
        for(int j = n; j > i; j--) {
            cout << char(temp);
            temp ++;
        }
        cout << endl;
    }

    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
    temp = 65;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << char(temp);
        }
        temp ++;
        cout << endl;
    }

    return 0;
}