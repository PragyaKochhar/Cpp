// 4, 6, 8, 13 ,15
// 1. display larger
// #include<iostream>
// using namespace std;
// int maxNumber(int a, int b){
//     if (a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int main(){
//     int num1,num2;
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;
//     int num = maxNumber(num1,num2);
//     cout<<"The larger number is: "<<num;
//     return 0;
// }


// 2. factorial
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if (n == 0 || n == 1){
//         return 1;
//     }
//     else{
//         return n * factorial(n - 1);
//     }
// }
// int main(){
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;
//     int fact = factorial(num);
//     cout<<"The factorial of the given number is: "<<fact;
//     return 0;
// }


// 3. reverse number
// #include<iostream>
// using namespace std;
// int reverseNumber(int n){
//     int revNum=0;
//     while(n>0){
//         int digit = n % 10;
//         revNum = revNum * 10 + digit;
//         n=n/10;
//     }
//     return revNum;
// }
// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;
//     int reverseNum= reverseNumber(num);
//     cout<<"The reversed number is: "<<reverseNum;
//     return 0;
// }


// 4. sum of digits
// #include<iostream>
// using namespace std;
// int sumOfDigits(int n){
//     int sum=0;
//     while(n>0){
//         int digits = n % 10;
//         sum += digits;
//         n=n/10;
//     }
//     return sum;
// }
// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;
//     int sumDigits = sumOfDigits(num);
//     cout<<"The sum of digits in "<<num<<" is: "<<sumDigits;
//     return 0;
// }


// 5. palindrome
// #include<iostream>
// using namespace std;
// bool isPalindrome(int n){
//     int original=n,reversed=0;
//     while(n>0){
//         int digit= n%10;
//         reversed = reversed * 10+digit;
//         n=n/10;
//     }
//     return reversed == original;
// }
// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;
//     if(isPalindrome(num))
//         cout<<"It is Palindrome number.";
//     else
//         cout<<"It is not a Palindrome number.";
//     return 0;
// }


// 6. nth Fibonacci number
// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     int a=0,b=1,sum;
//     for(int i=2;i<=n;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
//     return b;
// }
// int main(){
//     int num;
//     cout<<"Enter number of terms in series: ";
//     cin>>num;
//     cout<<fibonacci(num)<<"  ";
//     return 0;
// }


// 7. GCD
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     while(b!=0){
//         int temp = b;
//         b=a%b;
//         a=temp;
//     }
//     return a;
// }
// int main(){
//     int num1,num2;
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;
//     cout<<"The graetest common divisor of the given two numbers is: "<<gcd(num1,num2);
//     return 0;
// }


// 8. overloaded print() function  1) string as argument  2) another takes integer 3) both string and integer
// #include<iostream>
// using namespace std;
// void print(string s){
//     cout<<"String is: "<<s<<endl;
// }
// void print(int n){
//     cout<<"Integer is: "<<n<<endl;
// }
// void print(string s,int n){
//     cout<<"String is: "<<s<<" , "<<"Integer is: "<<n<<endl;
// }
// int main(){
//     string s;
//     int n;
//     cout<<"Enter string: ";
//     cin>>s;
//     cout<<"Enter number: ";
//     cin>>n;
//     print(s);
//     print(n);
//     print(s,n);
//     return 0;
// }



// 9.
// #include<iostream>
// using namespace std;
// class Calculator{
//     public:
//     void sum(int a,int b){
//         cout<<"The sum of the two integers is: "<<a+b<<endl;
//     }
//     void sum(double a,double b,double c){
//         cout<<"The sum of the three doubles is: "<<a+b+c<<endl;
//     }
//     void sum(int a,float b){
//         cout<<"The sum of one integer and one float is: "<<a+b<<endl;
//     }
// };
// int main(){
//     Calculator c1;
//     c1.sum(3,4);
//     c1.sum(94.5,6.5,4.6);
//     c1.sum(45,8.9f);
//     return 0;
// }



// 10.
// #include<iostream>
// using namespace std;
// void multiply(int a, int b){
//     cout<<"The product of two numbers (both int) is: "<<a*b<<endl;
// }
// void multiply(int a, double b){
//     cout<<"The product of two numbers (one int and other double) is: "<<a*b<<endl;
// }
// void multiply(float a,float b,float c){
//     cout<<"The product of two numbers (three float) is: "<<a*b*c<<endl;
// }
// int main(){
//     multiply(4,6);
//     multiply(4,6.5);
//     multiply(0.4,6.8,7.3);
//     return 0;
// }

// 11.
// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"Hello!"<<endl;
// }
// void greet(string name){
//     cout<<"Hello, "<<name<<"!"<<endl;
// }
// void greet(string name,int age){
//     cout<<"Hello, "<<name<<"! You are "<<age<<" years old."<<endl;
// }
// int main(){
//     string name;
//     cout<<"Enter your name: ";
//     cin>>name;
//     int age;
//     cout<<"Enter your age: ";
//     cin>>age;
//     greet();
//     greet(name);
//     greet(name,age);
//     return 0;
// }


// 12.
// #include<iostream>
// using namespace std;
// int area(int s){
//     return s*s;
// }
// int area(int l,int b){
//     return l*b;
// }
// double area(double r){
//     return 3.14*r*r;
// }
// int main(){
//     int side,len,bred;
//     double radi;
//     cout<<"Enter side of square: ";
//     cin>>side;
//     cout<<"Enter length and breadth of rectangle: ";
//     cin>>len>>bred;
//     cout<<"Enter radius of circle: ";
//     cin>>radi;
//     cout<<"Area of square is: "<<area(side)<<endl;
//     cout<<"Area of rectangle is: "<<area(len,bred)<<endl;
//     cout<<"Area of circle is: "<<area(radi)<<endl;
//     return 0;
// }

// 13.
// #include<iostream>
// #include<string.h>
// using namespace std;
// string concat(string str1,string str2){
//     return str1+str2;
// }
// string concat(int num,string str){
//     return to_string(num)+str;
// }
// int main(){
//     string str1,str2,str;
//     int num;
//     cout<<"Enter first string: "<<endl;
//     cin>>str1;
//     cout<<"Enter second string: "<<endl;
//     cin>>str2;
//     cout<<"Enter number: "<<endl;
//     cin>>num;
//     cout<<"Enter string: "<<endl;
//     cin>>str;

//     cout<<"Concatenation of the two strings: "<<concat(str1,str2)<<endl;
//     cout<<"Concatenation of the integer no. and one string: "<<concat(num,str)<<endl;
//     return 0;
// }


// 14.
// #include<iostream>
// #include<math.h>
// using namespace std;
// int power(int base,int expo){
//     return pow(base,expo);
// }
// double power(double base,int expo){
//     return pow(base,expo);
// }

// int main(){
//     int base,expo,exp;
//     cout<<"Enter base and exponent (both as integer): ";
//     cin>>base>>expo;
//     double bas;
//     cout<<"Enter base in double and exponent in integer: ";
//     cin>>bas>>exp;

//     cout<<"Power (both integers): "<<power(base,expo)<<endl;
//     cout<<"Power (double,int): "<<power(bas,exp);
//     return 0;
// }


// 15.
// #include<iostream>
// using namespace std;
// int sum(int count, int arr[]) {
//     int total = 0;
//     for (int i = 0; i < count; i++) {
//         total += arr[i];
//     }
//     return total;
// }

// int main() {
//     int n;
//     cout<<"Enter no. of numbers to be passes: ";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cout<<"Enter element at index "<<i+1<<" : ";
//         cin>>array[i];
//     }
//     cout<<"Sum all integers entered is: "<<sum(n,array);
//     return 0;
// }