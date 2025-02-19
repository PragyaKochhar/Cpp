// //3,5,7,11,12,13,15
// Q1.
// #include<iostream>
// using namespace std;
// int main(){
//     char name[20];
//     int age;
//     cout<<"Enter your name: ";
//     cin>>name;
//     cout<<"Enter your age: ";
//     cin>>age;
//     cout<<"Hello "<<name<<","<<" you are "<<age<<" years old";
//     return 0;
// }

// Q2.
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;
//     int sum = num1+num2;
//     cout<<"The sum of the numbers is: "<<sum;
//     return 0;
// }

// Q3.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     int choice;
//     cout<<"Enter 1 for addition"<<endl<<"Enter 2 for subtraction"<<endl<<"Enter 3 for multiplication"<<endl<<"Enter 4 for division"<<endl;
//     cout<<"Enter your choice: ";
//     cin>>choice;
//     switch(choice){
//         case 1:cout<<a+b;
//             break;
//         case 2:cout<<a-b;
//             break;
//         case 3:cout<<a*b;
//             break;
//         case 4:cout<<a/b;
//             break;
//         default:cout<<"Invalid choice";
//     }
//     return 0;
// }

// Q4.
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     float a,b;
//     cout<<"Enter two floating-point numbers: ";
//     cin>>a>>b;
//     float c= a/b;
//     cout<<fixed<<setprecision(2)<<c;
//     return 0;
// }

// Q5.compound interest for a given principle amount,rate of interest, and time period using constants and user input for variables (pending)
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     float p,r,t;
//     cout<<"Enter Principal amount: "<<endl;
//     cin>>p;
//     cout<<"Enter rate of interest: "<<endl;
//     cin>>r;
//     cout<<"Enter time period: "<<endl;
//     cin>>t;
//     double a= p*pow((1+r/100),t);
//     double ci= a-p;
//     cout<<"Compound interest: "<<ci;
// }

// Q6. calculate area and perimeter
// #include<iostream>
// using namespace std;
// int main(){
//     int length,width;
//     cout<<"Enter length and width of rectangle: ";
//     cin>>length>>width;
// }

// Q7. swap 2 nos temporary variable and then without temp variable
// using temporary variable
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter value of a and b: ";
//     cin>>a>>b;
//     int c=a;
//     a=b;
//     b=c;
//     cout<<"The new value of a is: "<<a<<endl;
//     cout<<"The new value of b is: "<<b;
//     return 0;
// }
// without temporary variable
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter two numbers a and b: ";
//     cin>>a>>b;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"The new values of a and b are: "<<a<<" "<<b;
//     return 0;
// }


// Q8.
// #include<iostream>
// using namespace std;
// int main(){
//     string fullname;
//     int age;
//     cout<<"Enter your name: ";
//     cin>>
//     return 0;
// }

// Q9. WAP to take 3 inputs (char,int,floating point) display in table
// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     int num;
//     float n;
//     cout<<"Enter a character: "<<endl;
//     cin>>ch;
//     cout<<"Enter integer: "<<endl;
//     cin>>num;
//     cout<<"Enter a floating point number: "<<endl;
//     cin>>n;
//     cout<<ch<<"\t"<<"num"<<"\t"<<n;
// }

// Q10. WAP to determine whether first integer is multiple of second using logical and relational
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"Enter number one and two: ";
//     cin>>num1>>num2;
//     if(num2==0){
//         cout<<"Error: division by zero is not possible.";
//     }
//     else if(num1 % num2 == 0){
//         cout<<num1<<" is divisible by "<<num2;
//     }
//     else{
//         cout<<num1<<" is not divisible by "<<num2;
//     }
// }

// Q11. WAP to count number of 1 bits in an integer input by user
// #include<iostream>
// using namespace std;
// int main(){
//     int num,n;
//     cout<<"Enter number: ";
//     cin>>num;
//     n= num;
//     int count = 0;
//     while (n > 0) {
//         count += (n & 1);
//         n = n >> 1;
//     }
//     cout<<"Number of 1 bits in "<<num<<" is: "<<count<<endl;
//     return 0;
// }

// Q12. WAP to solve quadratic equation using conditional statements(real and distinct roots, real and equal roots and complex roots)
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
//     cout << "Enter coefficients a, b and c: ";
//     cin >> a >> b >> c;
//     discriminant = (b * b) - (4 * a * c);
//     if (discriminant > 0) {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
//     } 
//     else if (discriminant == 0) {
//         root1 = root2 = -b / (2 * a);
//         cout << "Roots are real and equal: " << root1 << endl;
//     } 
//     else {
//         realPart = -b / (2 * a);
//         imaginaryPart = sqrt(-discriminant) / (2 * a);
//         cout << "Roots are complex: " << realPart << " + " << imaginaryPart << "i and "<< realPart << " - " << imaginaryPart << "i" << endl;
//     }
//     return 0;
// }

// Q13. WAP to stimulate ATM machine (switch statement) (withdrawal,deposit,balance inquiry and exit. with error handling)
// #include <iostream>
// using namespace std;
// int main() {
//     double balance = 1000.0;
//     int choice;
//     double amount;
//     while (true) {
//         // ATM menu
//         cout << "\n***** ATM Menu *****\n";
//         cout << "1. Withdrawal\n";
//         cout << "2. Deposit\n";
//         cout << "3. Balance Inquiry\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         if (cin.fail()) {
//             cin.clear();
//             cin.ignore(1000, '\n');
//             cout << "Invalid input! Please enter a number between 1 and 4.\n";
//             continue;
//         }

//         switch (choice) {
//             case 1:
//                 cout << "Enter amount to withdraw: ";
//                 cin >> amount;
//                 if (amount <= 0) {
//                     cout << "Invalid amount! Please enter a positive value.\n";
//                 } else if (amount > balance) {
//                     cout << "Insufficient balance!\n";
//                 } else {
//                     balance -= amount;
//                     cout << "Withdrawal successful! New balance: $" << balance << endl;
//                 }
//                 break;

//             case 2:
//                 cout << "Enter amount to deposit: ";
//                 cin >> amount;
//                 if (amount <= 0) {
//                     cout << "Invalid amount! Please enter a positive value.\n";
//                 } else {
//                     balance += amount;
//                     cout << "Deposit successful! New balance: $" << balance << endl;
//                 }
//                 break;

//             case 3: 
//                 cout << "Your current balance is: $" << balance << endl;
//                 break;

//             case 4:
//                 cout << "Thank you for using the ATM. Goodbye!\n";
//                 return 0;
//             default:
//                 cout << "Invalid choice! Please select a valid option.\n";
//         }
//     }
//     return 0;
// }

// Q14. WAP to check if triangle is valid based on lengths of its sides and determine its type using nested if-else
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter three sides of triangle: ";
//     cin>>a>>b>>c;
//     if (a+b>c && a+c>b && b+c>a){
//         cout<<"It is a valid triangle."<<endl;
//         if(a==b && b==c)
//             cout<<"It is equilateral triangle."<<endl;
//         else {
//             if (a==b||b==c||a==c) {
//                 cout<<"It is an Isosceles Triangle."<< endl;
//             }
//             else {
//                 cout<<"It is a Scalene Triangle."<<endl;
//             }
//         }
//     }
//     else
//         cout<<"It is not a valid triangle.";
//     return 0;
// }

// Q15. WAP to evaluate (a^b + c&d). explain precedence of bitwise operators
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c, d;
//     cout << "Enter values for a, b, c, d: ";
//     cin >> a >> b >> c >> d;
//     int result = (a ^ b) + (c & d);
//     cout << "Result: " << result << endl;
//     return 0;
// }

/*
Explanation for precedence:
Bitwise XOR (^) and Bitwise AND (&) have a higher precedence than arithmetic addition (+).
The bitwise AND (&) between c and d is evaluated first.
The bitwise XOR (^) between a and b is evaluated next.
Finally, the result of (a ^ b) and (c & d) is added using +.
*/