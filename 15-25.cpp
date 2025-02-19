// 17  22  24
// // Q16. two integers opposite in sign (without conditional statements)
// #include<iostream>
// using namespace std;
// bool opposite(int a,int b){
//     return (a^b) <0;
// }
// int main(){
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     if (opposite(a,b))
//         cout<<"The two numbers have opposite sign";
//     else
//         cout<<"The two numbers have same sign";
//     return 0;
// }

// // Q17. division without / operator
// #include <iostream>
// using namespace std;
// int main(){
//     int divident,divisor,quotient=0,remainder;
//     cout<<"Enter divident: ";
//     cin>>divident;
//     cout<<"Enter divisor: ";
//     cin>>divisor;

//     if(divisor==0){
//         cout<<"Division by zero is not possible";
//         return 1;
//     }
//     remainder=divident;
//     while(remainder >=divisor){
//         remainder = divisor;
//         quotient++;
//     }
//     cout<<"Quotient: "<<quotient;
//     cout<<"Remainder: "<<remainder;
//     return 0;
// }


// // Q18. circular left and right shift of bits on a given integer and display result
// #include <iostream>
// using namespace std;
// int main() {
//     int num,shift,bits;
//     cout<<"Enter an integer: ";
//     cin>>num;
//     cout<<"Enter number of shifts: ";
//     cin>>shift;
//     bits = sizeof(num) * 8;
//     int leftShift = (num << shift) | (num >> (bits - shift));
//     int rightShift = (num >> shift) | (num << (bits - shift));
//     cout << "Circular Left Shift: " << leftShift << endl;
//     cout << "Circular Right Shift: " << rightShift << endl;
//     return 0;
// }

// // Q19. calculate grades of student based on marks (if-else or switch statement)
// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter marks of student: ";
//     cin>>marks;
//     if (marks>=90)
//         cout<<"A Grade";
//     else if (marks>=80)
//         cout<<"B Grade";
//     else if (marks>=70)
//         cout<<"C Grade";
//     else if (marks>=60)
//         cout<<"D Grade";
//     else if (marks>=50)
//         cout<<"E Grade";
//     else if (marks<=50)
//         cout<<"F Grade";
//     else
//         cout<<"Invalid marks...";
//     return 0;
// }


// // Q20. menu driven calculator
// #include<iostream>
// using namespace std;
// int main(){
//     int choice,num1,num2;
//     while (true){
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;
//     cout<<"Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 to exit\n";
//     cout<<"Enter your choice: ";
//     cin>>choice;
//     switch(choice){
//         case 1:cout<<"Sum of the given two numbers is: "<<num1+num2<<endl;
//             break;
//         case 2: cout<<"Difference of the given two numbers is: "<<num1-num2<<endl;
//             break;
//         case 3:cout<<"Product of the given two numbers is: "<<num1+num2<<endl;
//             break;
//         case 4: cout<<"Difference of the given two numbers is: "<<num1-num2<<endl;
//             break;
//         case 5:break;
//         default: cout<<"Invalid choice..."<<endl;
//     }
//     }
//     return 0;
// }


// Q21. leap year nested if-else
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            } else {
                cout << year << " is not a leap year." << endl;
            }
        } else {
            cout << year << " is a leap year." << endl;
        }
    } else {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}

// Q22. first n fibonacci no's using for loop
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers (positive number): ";
    cin >> n;
    int a=0, b=1;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << a << " ";
        }
        else if (i == 2) {
            cout <<b << " ";
        }
        else {
            int next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
    }
    return 0;
}


// Q23. no is prime using while loop
#include<iostream>
using namespace std;
int main(){
    int n,div=2;
    cout<<"Enter the number: ";
    cin>>n;
    while (div<n){
        if(n%div == 0){
            cout<<"The given number is not prime.";
            break;
        }
        else{
            cout<<"The given number is a prime number.";
            div+=1;
        }
    }
    return 0;
}

// Q24. factorial using do-while
#include <iostream>
using namespace std;
int main() {
    int num;
    int factorial = 1;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= num);
    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}

// Q25. continuously accepts user input of integers until user types exit at the end display sum, count no of valid integers, min and max number
#include <iostream>
using namespace std;
int main() {
    string input;
    int sum = 0, count = 0, num;
    int minNum, maxNum;
    bool firstInput = true;
    cout << "Enter integers (type 'exit' to finish):" << endl;

    while (true) {
        cout << "Enter a number: ";
        cin >> input;

        if (input == "exit") {
            break;
        }
        bool isValid = true;
        for (int i = 0; input[i] != '\0'; i++) {
            if ((i == 0 && input[i] == '-') || (input[i] >= '0' && input[i] <= '9')) {
                continue;
            } else {
                isValid = false;
                break;
            }
        }
        
        if (!isValid) {
            cout << "Invalid input! Please enter a valid integer or 'exit' to stop." << endl;
            continue;
        }
        num = 0;
        int sign = 1;
        int start = 0;
        if (input[0] == '-') {
            sign = -1;
            start = 1;
        }
        for (int i = start; input[i] != '\0'; i++) {
            num = num * 10 + (input[i] - '0');
        }
        num *= sign;
        
        sum += num;
        count++;
        
        if (firstInput) {
            minNum = maxNum = num;
            firstInput = false;
        } else {
            if (num < minNum) minNum = num;
            if (num > maxNum) maxNum = num;
        }
    }
    if (count > 0) {
        cout << "\nResults:" << endl;
        cout << "Sum: " << sum << endl;
        cout << "Count: " << count << endl;
        cout << "Minimum: " << minNum << endl;
        cout << "Maximum: " << maxNum << endl;
    } else {
        cout << "No valid numbers were entered." << endl;
    }
    return 0;
}
