#include <iostream>
#include <math.h>
#include <typeinfo>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <limits>
#include <string>
#include "utils/greet.h"

using namespace std;
using messaging::greet;
using messaging::StrFromCharArray;
// int swap_two_numbers(int a ,int b){
//     a=1;
//     b=2;
//     int temp =a;
//     a=b;
//     temp=b;
//     return a;
// }

// int main()
// {
// //naming conventions
// int file_size; //snake case
// int FileSize;  //pascal case
// int fileSize;  //camel case
// int ifilesize; //hungarian case

///////////////////////////////////////////////
// int x=10;
// one variable should be double or float to make the result come with its fraction
// double y=5;
// double z = ( x + 10) / (3 * y);
// cout<<z;
////////////////////////////////////////////////
// code to count the state tax , county tax for total sales
//  double Sales = 95000;
//  const double stateTax = .04;
//  const double countyTax = .02;
//  cout<<"Total Sales after the State and County taxes is:" <<Sales-(Sales*(stateTax+countyTax))<<endl;
////////////////////////////////////////////////
// code to convert from fahrenheit to celsius
//  cout<<"enter the celsius degree: "<<endl;
//  double celsiusTemp;
//  cin>>celsiusTemp;
//  cout << "the fehreheit equivilant degree is:" <<celsiusTemp+32<<endl;
/////////////////////////////////////////////////
// code the circle area given radius
// cout<<"enter the radius:"<<endl;
// double radius , area ;
// cin>>radius;
// area = M_PI*pow(radius,2);
// cout<<area<<endl;
/////////////////////////////////////////////////
// unsigned int number = -255;
// cout <<number<<endl;
////////////////////////////////////////////////
// narrowing for int to short that output 16960
//  int x= 1'000'000;
//  short min = x;
//  cout<<min;
////////////////////////////////////////////////
// narrowing from short to int
//  short x = 100;
//  int max{x};
//  cout <<max;
////////////////////////////////////////////////
// generating random number
//  srand(5);
//  bool isNewUser = false;
//  cout<<noboolalpha
//  cout<< number;
///////////////////////////////////////////////
// fortmatting the output
//  cout<<"what's "<<"up!"<<endl
//      <<"everybody"<<endl;
///////////////////////////////////////////////
// // generating rolling dice
// srand(time(0)%10);
// const short maxNumber =6;
// const short minNumber =1;
// srand(time(0));
// int firstNumber= (rand()% maxNumber-minNumber+1)+minNumber;
// int secondtNumber= (rand()% maxNumber-minNumber+1)+minNumber;
// cout<<firstNumber <<" , "<<secondtNumber<<endl;
//////////////////////////////////////////////////
// cout<<right<<"the spring "<<setw(10)<<"is so nice"<<"!!!"<<endl;
// cout<<right<<"space"<<setw(10)<<"again!!";
// write the fixed floating point number after the four digit
//  cout<<fixed<<12.14556446;
// //drow a table of the following data
// cout<<left<<setw(20)<<"course"<<right<<"students"<<endl<<endl<<
//           left<<setw(20)<<"c++"<<right<<"100"<<endl<<
//           left<<setw(20)<<"JavaScript"<<"50"<<right<<endl;
// numeric_limit
// int number = numeric_limits<int>::min();
// int number= numeric_limits<int>::min();
// number++;
// cout<<number;
///////////////////////////////////////////////////
// boolean variables
//  bool x= 0;
//  //output the alpha for the bool variables
//  cout<<boolalpha<<x<<endl;
///////////////////////////////////////////////////
// characters variables
//  string name;
//  cout<<"enter your name : "<<endl;
//  cin>>name;
// another way to do that is getline() function
//  getline(cin,name);
//  cout<<"Hi "<<name<<endl;
//  //////////////////////////////////////////////////
//  string Street,City,State,ZipCode;
//  cout <<"enter your Street: "<<endl;
//  getline(cin,Street);
//  cout <<"enter your City: "<<endl;
//  getline(cin,City);
//  cout <<"enter your State: "<<endl;
//  getline(cin,State);
//  cout <<"enter your ZipCode: "<<endl;
//  getline(cin,ZipCode);
//  cout<<left<<Street<<endl<<left<<City<<","<<State<<","<<ZipCode<<endl;
//  //////////////////////////////////////////////////
// deal with array
//  int arr [5]={4,2};
//  cout<<arr[0];
// Type_conversion
//  int x= 10;
//  int y= 3;
//  //there are two ways for casting 1:(type)variable//// 2:static_cast<type>(variable)
//  double z= (double)x/static_cast<double>(y);
//  cout<<z;
/////////////////////////////////////////////////////
// bool us_citizen= true;
// bool bachelorDegree = true;
// int  workEperience= 4;
// bool result = us_citizen==1 && (bachelorDegree==1 || workEperience >=2);
// cout <<boolalpha<<result;
////////////////////////////////////////////////////
// if statement
//  int sales = 12'000;
//  double commission;

// if (sales<=10'000)
//     commission = .10;
// else if (sales>10'000 && sales<=15'000)
//     commission = .15;
// else if (sales >= 15'000)
//     commission = .20;
// cout <<"the commission is: "<<commission<<endl;
/////////////////////////////////////////////////////
// conditional operator
// int first, second;
// cout << "enter first number: " << endl;
// cin >> first;
// cout << "enter second number: " << endl;
// cin >> second;
// int larger = (first > second) ? first : second;
// cout << "larger number is: " << larger;
// //////////////////////////////////////////////////////
// int numOne, numTwo;
// char op;
// cout << "enter the two numbers and the operators : " << endl
//      << "first: " << endl;
// cin >> numOne;
// cout << "second" << endl;
// cin >> numTwo;
// cout << "enter the operator :" << endl;
// cin >> op;
// switch (op)
// {
// case '+':
//     cout << numOne + numTwo << endl;
//     break;
// case '-':
//     cout << numOne - numTwo << endl;
//     break;
// case '*':
//     cout << numOne * numTwo << endl;
//     break;
// case '/':
//     cout << numOne / numTwo << endl;
//     break;
// default:
//     cout << "invalid operator !!" << endl;
// }
// ////////////////////////////////////////////////////////////
// int number;
// int factorial = 1;
// cout << "enter number:" << endl;
// cin >> number;
// if (number > 0)
// {
//     if (number == 0)
//         cout << "1" << endl;
//     else if (number == 1)
//         cout << "1" << endl;
//     else if (number > 1)
//     {
//         for (int i = 1; i <= number; i++)
//         {
//             factorial *= i;
//         }
//         cout << "factorial of " << number << "is : " << factorial << endl;
//     }
// }
// else
// {
//     cout << "enter a positive number !!!";
// }
////////////////////////////////////////////////////////////////
// int temp[4] = {1, 2, 3, 4};
// int tempSum = 0;
// int arr_size = sizeof(temp) / sizeof(int);
// for (int i = 0; i < arr_size; i++)
// {
//     tempSum += temp[i];
// }
// another way to loop in array
// for (int i : temp)
// {
//     tempSum += i;
// }
// int avg = tempSum / arr_size;
// cout << "the average of temperature list is: " << tempSum << endl;
///////////////////////////////////////////////////////////////////
// while loop
// int guess = 9;
// cout << "guess: " << endl;
// int in_guess;
// cin >> in_guess;
// while (in_guess != guess)
// {
//     cout << "guess: " << endl;
//     cin >> in_guess;
// }
//////////////////////////////////////////////////////////////////
// fo while loop
// int number;
// // loop with the do statements till the while loop comes true , then get out the program
// do
// {
//     cout << "number:" << endl;
//     cin >> number;
// } while (number < 1 || number > 5);
///////////////////////////////////////////////////////////////////
// break  and continue statements
// Task: Create a program that repeatedly asks the user to enter a number. If the user enters the number 42,
// the program should print "You found the answer to the ultimate question of life, the universe, and everything!" and then exit the loop.
// Otherwise, it should keep asking for a number.
// int number;
// cout << "enter number: " << endl;
// cin >> number;
// while (true)
// {
//     if (number == 42)
//     {
//         cout << "You found the answer to the ultimate question of life,the universe,and everything !" << endl;
//         break;
//     }
//     else
//     {
//         cout << "enter number: " << endl;
//         cin >> number;
//     }
// }
// nested loops
// write a program that take number and return number of * equal to line number :
// for instance: 5
// *
// **
// ***
// ****
// *****
//////////////////////////////////////
// int rows;
// cout << "enter number of rows " << endl;
// cin >> rows;
// for (int i = 1; i <= rows; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout << "*";
//     }
//     cout << endl;
// }
/////////////////////////////////////////////////////////////////
// functions definitions
// int max_two(int first, int second)
// {
//     if (first > second)
//         return first;
//     else
//         return second;
// }
////////////////////////////////////////////////////////////////
// overloading functions
// signature of the functions is
//  signature = name + number of parameters
// void great(string firstName, string lastName)
// {
//     cout << firstName << " " << lastName << endl;
// }
// void great(string firstName, string lastName, int age)
// {
//     cout << "Hello Mr." << firstName << " " << lastName << endl;
//     cout << "your age is:" << age << endl;
// }
////////////////////////////////////////////////////////////////
// passing parameters by reference
// void increaseValue(int &number)
// {
//     number *= 1.2;
//     cout << number;
// }
///////////////////////////////////////////////////////////////

int main()
{
    // //apply the max_two function
    // int first, second;
    // cout << "enter first number:" << endl;
    // cin >> first;
    // cout << "enter first number:" << endl;
    // cin >> second;
    // cout << "the maximum is: " << max_two(first, second) << endl;
    //////////////////////////////////////////////////////////////
    // //applyint great function for overloading
    // string firstName = "ahmed", lastName = "elgammal";
    // int age = 29;
    // great(firstName, lastName);
    // great(firstName, lastName, age);
    //////////////////////////////////////////////////////////////
    // applying passing by reference
    //  int value = 100;
    //  increaseValue(value);
    // string x = "ahmed";
    // char x[6] = "ahmed";
    // string c = strFromCharArray(x);
    // great(strFromCharArray("ahmed"));
    ///////////////////////////////////////////////////////////////
    // apply passing by reference of the string
    char x[6] = "ahmed";
    string name = StrFromCharArray(x, 6);
    greet(name);
    cout << endl
         << "( " << name << ")";
    ////////////////////////////////////////////////////////////////

    return 0;
}
