// 17, 21, 23

// 15.
// #include <iostream>
// #include <cstdarg>
// using namespace std;
// int sum(int count, ...) {
//     int total = 0;
//     va_list args;
//     va_start(args, count);
//     for (int i=0;i<count;i++) {
//         total += va_arg(args,int);
//     }
//     va_end(args);
//     return total;
// }
// int main() {
//     cout << "Sum: " << sum(5, 1, 2, 3, 4, 5) << endl;
//     return 0;
// }


// 16.
// #include <iostream>
// #include <cstdarg>
// using namespace std;
// int findLargest(int count, ...) {
//     va_list args;
//     va_start(args, count);
//     int largest = va_arg(args, int);
//     for (int i = 1; i < count; i++) {
//         int num = va_arg(args, int);
//         if (num > largest) {
//             largest = num;
//         }
//     }
//     va_end(args);
//     return largest;
// }
// int main() {
//     cout << "Largest: " << findLargest(5, 10, 25, 5, 8, 40) << endl;
//     return 0;
// }


// 17.
// #include <iostream>
// #include <cstdarg>
// #include <string>
// using namespace std;
// string concatStrings(int count, ...) {
//     string result = "";
//     va_list args;
//     va_start(args, count);

//     for (int i = 0; i < count; i++) {
//         result += va_arg(args, const char*);
//     }
//     va_end(args);
//     return result;
// }
// int main() {
//     string concatenated = concatStrings(3, "Hello, ", "World", "!");
//     cout << "Concatenated String: " << concatenated << endl;
//     return 0;
// }


// 18.
// #include<iostream>
// using namespace std;
// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// int main() {
//     int num1,num2;
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;
//     cout<<"GCD of the given numbers is: "<<gcd(num1, num2);
//     return 0;
// }


// 19.
// #include <iostream>
// using namespace std;
// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }
// int main() {
//     int num;
//     cout<<"Enter number to find factorial: ";
//     cin>>num;
//     cout<<"Factorial of the given number is: "<<factorial(num);
//     return 0;
// }


// 20.
// #include <iostream>
// using namespace std;
// int fibonacci(int n) {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main() {
//     int num;
//     cout<<"Enter the position of number you want to print: ";
//     cin>>num;
//     cout<<"Number at "<<num<<" position in Fibonacci series is: "<<fibonacci(num);
//     return 0;
// }


// 21.
// #include <iostream>
// using namespace std;
// string reverseString(string str) {
//     if (str.length() == 0)
//         return "";
//     return str.back() + reverseString(str.substr(0, str.length() - 1));
// }
// int main() {
//     string input = "hello";
//     cout << "Reversed string: " << reverseString(input) << endl;
//     return 0;
// }


// 22.
// #include <iostream>
// using namespace std;
// int sumOfNaturalNumbers(int n) {
//     if (n == 0)
//         return 0;
//     return n + sumOfNaturalNumbers(n - 1);
// }
// int main() {
//     int num=5;
//     cout << "Sum of first " << num << " natural numbers: " << sumOfNaturalNumbers(num) << endl;
//     return 0;
// }



// 23.
// #include <iostream>
// using namespace std;
// int power(int base, int exp) {
//     if (exp == 0)
//         return 1;
//     return base * power(base, exp - 1);
// }
// int main() {
//     int base,exponent;
//     cout<<"Enter value of base and exponent: ";
//     cin>>base>>exponent;
//     cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
//     return 0;
// }


// 24.
// #include<iostream>
// using namespace std;
// void swapNumbers(int &a, int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     cout<<"Before swapping first and second numbers are: "<<a<<" "<<b<<endl;
//     swapNumbers(a,b);
//     cout<<"After swapping first number becomes: "<<a<<endl;
//     cout<<"After swapping second number becomes: "<<b;
// }


// 25.
// #include<iostream>
// using namespace std;
// int sumArray(int arr[], int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cout<<"Enter element at index: "<<i<<" : ";
//         cin>>arr[i];
//     }
//     int sumElements = sumArray(arr,size);
//     cout<<"The sum of all elements of the array is: "<<sumElements;
//     return 0;
// }


// 26.
// #include<iostream>
// using namespace std;
// int findMax(int arr[], int size){
//     int largest = arr[0];
//     for(int i=0;i<size;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     return largest;
// }
// int main(){
//     int size;
//     cout<<"Enter number of elements in array: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cout<<"Enter element at index "<<i<<" : ";
//         cin>>arr[i];
//     }
//     int largest=findMax(arr,size);
//     cout<<"The largest element is: "<<largest;
//     return 0;
// }


// 27.
// #include<iostream>
// using namespace std;
// int findSecondLargest(int arr[], int size){
//     int largest=arr[0],secLargest = -1;
//     for(int i=0;i<size;i++){
//         if(arr[i]>largest){
//             secLargest= largest;
//             largest = arr[i];
//         }
//         else if(arr[i]>secLargest && arr[i]!=largest){
//             secLargest=arr[i];
//         }
//     }
//     return secLargest;
// }
// int main(){
//     int size;
//     cout<<"Enter number of elements you want to add in array: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cout<<"Enter element at index "<<i<<" : ";
//         cin>>arr[i];
//     }
//     int secondLargest = findSecondLargest(arr,size);
//     if (secondLargest == -1)
//         cout<<"Second largest elements is not found";
//     else
//         cout<<"The secondLargest element is: "<<secondLargest;
//     return 0;
// }


// 28.
// #include<iostream>
// using namespace std;
// int* generateFibonacci(int n) {
//     // if (n <= 0) {
//     //     return nullptr;
//     // }
//     int* fibArray = new int[n];
//     if (n >= 1) fibArray[0] = 0;
//     if (n >= 2) fibArray[1] = 1;
//     for (int i = 2; i < n; i++) {
//         fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
//     }
//     return fibArray;
// }
// int main() {
//     int n;
//     cout << "Enter how many Fibonacci numbers you want: ";
//     cin >> n;
//     int* fibSeries = generateFibonacci(n);
//     if (fibSeries != nullptr) {
//         cout << "Fibonacci Series: ";
//         for (int i = 0; i < n; i++) {
//             cout << fibSeries[i] << " ";
//         }
//         cout << endl;
//         delete[] fibSeries;
//     } else {
//         cout << "Invalid input! Please enter a positive number." << endl;
//     }
//     return 0;
// }

// 29.
// #include<iostream>
// using namespace std;
// struct Student{
//     string name;
//     int marks;
// };
// void displayStudents(Student arr[], int size){
//     for(int i=0;i<size;i++){
//         cout<<"Enter name: ";
//         cin>>arr[i].name;
//         cout<<"Enter marks: ";
//         cin>>arr[i].marks;
//     }
// }
// int main(){
//     int size;
//     cout<<"Enter number of students: ";
//     cin>>size;
//     Student students[size];
//     for(int i=0;i<size;i++){
//         cout<<"Enter name "<<(i+1)<<" : ";
//         cin>>students[i].name;
//         cout<<"Enter marks "<<(i+1)<<" : ";
//         cin>>students[i].marks;
//     }
//     displayStudents(students,size);
//     return 0;
// }


// 30.
// #include<iostream>
// using namespace std;
// void doubleArray(int (&arr)[6]){
//     for(int i=0;i<6;i++){
//         arr[i] *= 2;
//     }
// }
// int main(){
//     int arr[6];
//     for(int i=0;i<6;i++){
//         cout<<"Enter element at index "<<i<<" : ";
//         cin>>arr[i];
//     }
//     cout<<"The original array is: ";
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     doubleArray(arr);
//     cout<<"The modified array is: ";
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }