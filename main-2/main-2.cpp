#include <iostream>
#include <cassert>
#include <vector>
#include <limits>
#include <memory>
#include <vector>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <cmath>
using namespace std;

// applying passing array to function
// // don't forget to give parameter to function of arr size
// void printNumbers(int number[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << number[i];
// }
/////////////////////////////////////////////
// //apply linear_search
// int linear_search(int target)
// {
//     int numbers[] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         if (numbers[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
/////////////////////////////////////////////
// bubble_sort
// swap function
/*
 function that accept the array and size then . loop for the
 each element comparing with each one then swap
*/
////////////////////////////////////////////
// 1. pass by value, but price cannot access outside the function
// 2. pass by refernce , so it could access outside the function as in main()..."this is modertn one"
// 3. pass by pointer , so it could access"this is an old method "
// void increasePrice(double *price)
// {
//     *price *= 1.2;
// }
// swap function using pointers
// void swap(int *first, int *second)
// {
//     int temp = *first;
//     *first = *second;
//     *second = temp;
// }
/////////////////////////////////////////////
// strucres and enumeration
// struct address
// {
//     short street;
//     string city;
//     short zipCode;
// };
// struct customer
// {
//     address d;
//     int Id;
//     string Name;
//     string Email;
// };
// struct Movie
// {
//     string title;
//     int releaseYear;
//     bool equal(Movie movie)
//     {
//         return (title == movie.title && releaseYear == movie.releaseYear);
//     }
//     // write same method with different name to be operator == as const to not define
//     // any struct values inside the method
//     bool operator==(Movie movie) const
//     {
//         return (title == movie.title && releaseYear == movie.releaseYear);
//     }
// };
// struct point
// {
//     int x;
//     int y;
// };
// bool operator==(const point &first, const point &second)
// {
//     return (first.x == second.x && first.y == second.y);
// }
// // stream ,point >> stream
// ostream &operator<<(ostream &stream, point &point)
// {
//     return stream << "(" << point.x << "," << point.y << ")";
// }
// // make function using structure as data type or using it in the function body
// Movie getMovie()
// {
//     return {"terminator", 1983};
// }
// // void showMovie(Movie &movie)
// // {
// //     cout << movie.title << endl;
// // }
// // apply same showMovie but using pointer instead of reference and pointer to structure " -> "
// void showMovie(Movie *movie)
// {
//     // cout << (*movie).title << endl;
//     // instead of using (*movie),title to dereference the pointer and take the title option
//     // we would use -> that make the same job
//     cout << movie->title << endl;
// }
// // defining enumeration
// enum class Actions
// {
//     list = 1,
//     add,
//     update
// };
// // if we duplicate this enum it will be error
// // so we will use the strongly_type enum by adding class
// enum class Properties
// {
//     list = 1,
//     add,
//     update
// };
////////////////////////////////////////////
// copy array to second one
//  int numbers[3] = {1, 2};
//  int second[3];
//  for (int i = 0; i < (sizeof(numbers) / sizeof(int)); i++)
//      second[i] = numbers[i];
//  cout << second[0];
//////////////////////////////////////////////
// comparing arrays
// int first[4] = {10, 20, 30, 40};
// int second[4] = {10, 20, 30, 40};
// for (int i = 0; i < 4; i++)
// {
//     if (first[i] == second[i])
//       ;
// }
// cout << "there are equal !!!" << endl;
// return 0;
//////////////////////////////////////////////
// passing array to function
// int numbers[] = {10, 20, 30};
// printNumbers(numbers, 3);
//////////////////////////////////////////////
// size_t is equal to unsigned long long type
// // for example
// cout << numeric_limits<size_t>::min() << endl;
// //so, it can store digits like unsigned (positive) long long data type
// cout << numeric_limits<size_t>::max() << endl;
// cout << sizeof(size_t) << endl;
///////////////////////////////////////////////
// unpacking arrays pr called in c++ "structured binding " or in python "unpacking"
// try to run fro modern gcc
// int numbers[] = {10, 20, 30};
// auto [x, y, z] = numbers;
// cout << y << endl;
///////////////////////////////////////////////
// applying the linear search function
//  cout << linear_search(3) << endl;
//////////////////////////////////////////////
// int a[4] = {2, 1, 3, 4};
// bubble_sort(a, 4);
//////////////////////////////////////////////
// print multi dimentional arrays
// int mul_arr[2][3] = {{1, 2, 3}, {4, 3, 5}};
// for (int i = 0; i < 2; i++)
// {
//     cout << "{";
//     for (int j = 0; j < 3; j++)
//     {
//         cout << mul_arr[i][j];
//         cout << ",";
//     }
//     cout << "}";
// }
/////////////////////////////////////////////
// pointers
// int number = 10;
// // pointer could assigned as nullptr or assigned to reference of
// // a varialble
// int *ptr = &number;
// cout << ptr;
// int number = 10;
// const int *ptr = &number;
// // it couldn't be like that because of const  *ptr = 20;
// // so deferencing by another variable like y = *ptr;
// // this statement will not change anything because of *const*
// // int y = *ptr;
////////////////////////////////////////////
// passing the pointer to functions
// passing by value Vs by reference Vs by pointer
// double price = 100;
// increasePrice(&price);
// cout << price;
///////////////////////////////////////////////
// applying swap function using pointers
//  int x = 4, y = 5;
//  swap(&x, &y);
//  cout << x << " - " << y << endl;
//////////////////////////////////////////////////////////
// pointers and arrays
// assign pointer to last element in array and while loop to print the array in reverse mode
// int numbers[3] = {10, 20, 30};
// or refer to last one by : int *ptr  = &numbers[size(numbers)-1]
// int *ptr = numbers + 2;
// while (ptr >= numbers)
// {
//     cout << *ptr << endl;
//     ptr--;
// }
//////////////////////////////////////////////////////////
// dynamic memory allocation
// allocate stack memory
//  int numbers [1000];
//  //allocate heap memory (free store )
//  int* numbers = new int[10];
//  int * number = new int;
//  delete number;
//  delete[] numbers;
//  // best practice to reset the pointers
//  number = nullptr;
//  numbers = nullptr;
//  ////////////////////////////////////////
// dynamically resize an array
// int *numbers = new int[5];
// int entities = 0;
// int capacity = 0;
// while (true)
// {
//     cout << "number: ";
//     cin >> numbers[entities];
//     if (cin.fail())
//         break;
//     entities++;
//     if (entities == capacity)
//     {
//         // create a temp array (twice the size)
//         int *temp = new int[capacity * 2];
//         // copy all the elements
//         for (int x = 0; x > entities; x++)
//         {
//             temp[x] = numbers[x];
//         }
//         // Have "numbers" pointer point to the new array
//         delete[] numbers;
//         numbers = temp;
//     }
// }

// for (int i = 0; i < entities; i++)
// {
//     cout << numbers[i] << endl;
// }
///////////////////////////////////////////////////
// if we point to variable with pointer then accedintly delete it twice , error will appear
// int *x = new int;
// delete x;
// so we use smart pointers
// smart pointers: 1. unique pointer. 2. shared pointer.
// // // unique pointer
// unique_ptr<int> x(new int);
// cout << x << endl;
// make_unique() and use it with different data types
// using auto instead of unique_ptr<int> x = make_unique<int> ();
// auto numbers = make_unique<int[]>(10);
// auto y = make_unique<int>();
// numbers[0] = 10;
// cout << numbers[0] << endl;
/////////////////////////////////////////////////////
// shared pointer
// auto x = make_shared <int>();
// *x = 10;
// shared_ptr<int> y(x);
// if (x == y)
//     cout << "equal";
/////////////////////////////////////////////////////
// // strings
// string name = "ahmed";
// name[0] = 'm';
// cout << name << endl;
// cout << name.length() << endl;
// // concatinating string
// name += " elgammal";
// cout << name << endl;
// cout << name.starts_with('L') << endl;
// cout << name.ends_with('L') << endl;
// cout << name.back() << endl;
// size_t i = -1;
// cout << i << endl;
// // it store the same value of -1 (not found)stored in size_t unsigned long long
// cout << name.find('I') << endl;
// // same find method but search in reverse mode from last char to first
// cout << name.rfind('a') << endl;
// // it also accept string not character only
// cout << name.rfind("med") << endl;
// string full_name = "Ahmed Taha Elgammal";
// int index = full_name.rfind(" ");
// string firstName = full_name.substr(0, index);
// string lastName = full_name.substr(index + 1, full_name.length());
// cout << "your first name is: " << firstName << " and last name is : " << lastName
//      << endl;
// // convert string to any numeric data type using sto + d or i or f or something like that
// double price = stod("2.55");
// cout << price << endl;
// // the opposite thing is tostring
// // return any number to string as it is
// string numb = to_string(14);
// cout << numb << endl;
// ////////////////////////////////////////////////////
// escape character to print special cases
// string str = "c:\\windows";
// cout << str << endl; // print with one / character only
// string str_1 = "\"Name\"";
// cout << str_1 << endl;
// //////////////////////////////////////////////////////
// row strings
// // we can type any string with the special character and ignore them by r"(string)"
// string str_2 = R"(this\is an' after ")";
// cout << str_2 << endl;
// ///////////////////////////////////////////////////////
// struct movie to store from file
// struct movie
// {
//     short id;
//     string title;
//     int year;
// };
/////////////////////////////////////////////////////////
// function that convert from double to string with 2 percision
//  string numberToString(double number,int percision)
//  {
//  stringstream stream;
//  //use the fixed for floating point and the percision for number of fractial digits
//  stream<<fixed<<setprecision(percision)<<number;
//  string str = stream.str();
//  return str;
//  }
////////////////////////////////////////////////////////
// function take string with space and

// struct Movie
// {
//     short id;
//     string title;
//     int year;
// };
// Movie parseMovie(string str)
// {
//     stringstream stream;
//     stream.str(str);
//     Movie movie;
//     getline(stream,movie.title,',');
//     stream>>movie.year;
//     return movie;
// }
///////////////////////////////////////////////////////
// explicit conversion using static_cast
// pointer conversion in inheritance
class Base
{
public:
    virtual void print() { cout << "Base" << endl; }
};
class Derived : public Base
{
public:
    void print() override { cout << "Derived" << endl; }
};
int main()
{
    // customer myCustomer;
    // cout << "enter Id: " << endl;
    // cin >> myCustomer.Id;
    // cout << "enter the customer name : " << endl;
    // cin >> myCustomer.Name;
    // cout << "enter the customer Email: " << endl;
    // cin >> myCustomer.Email;
    // cout << "the customer:" << endl
    //      << " Id: " << myCustomer.Id << " and the Name is : " << endl
    //      << myCustomer.Name << " Email is : " << myCustomer.Email << endl;
    // ////////////////////////////////////////////////////////
    // initializing structures
    // it will take by order the assigntation of the variables
    // customer x = {
    //     12,
    //     "ahmed",
    // };
    // cout << x.Name << endl;
    ///////////////////////////////////////////////////////////
    // for unpacking or destructuring the structure values there is 3 ways
    //  1 st
    // // initialize the struct
    // customer my_customer = {32, "ahmed", "gmail.com"};
    // // destructing the struct for unpacking
    // auto [Id, Name, Email]{my_customer};
    // // so now we could print by variable name
    // cout << Name << endl;
    // //////////////////////////////////////////////////////////
    // array of structures using vectors
    // vector<Movie> movies;
    // movies.push_back({"terminator_1", 1934});
    // movies.push_back({"terminator_2", 1946});
    // // we make that const reference to prevent copy the values into temporary variable each time
    // //  so we make reference to it each time
    // for (const auto &movie : movies)
    // {
    //     cout << movie.title << endl;
    // }
    /////////////////////////////////////////////////////////////
    // nesting structures :using structure from another one :
    // customer C = {{4, "ghaza", 3244}, 32, "ahmed", "a.t.elgammal@gmail.com"};
    // cout << C.Name << endl
    //      << C.Id << endl
    //      << C.Email << endl
    //      << C.d.city << endl
    //      << C.d.street << endl
    //      << C.d.zipCode;
    /////////////////////////////////////////////////////////////
    // comparing structures
    // Movie mov1 = {"terminator_1", 1004};
    // Movie mov2 = {"terminator_1", 1004};
    // Movie mov3 = {"terminator_2", 1304};
    // if (mov1.title == mov2.title && mov1.releaseYear == mov2.releaseYear)
    //     cout << "equal";
    /////////////////////////////////////////////////////////////
    // working with methods
    // we could make bool method that make the comparision instead of if in previous section
    //////////////////////////
    // Movie mov1 = {"terminator_1", 1004};
    // Movie mov2 = {"terminator_1", 1004};
    // Movie mov3 = {"terminator_2", 1304};
    // if (mov1.equal(mov3))
    //     cout << "equal" << endl;
    // else
    //     cout << "not equal" << endl;
    /////////////////////////////////////////////////////////////
    // operator overloading
    // Movie mov1 = {"terminator_1", 1004};
    // Movie mov2 = {"terminator_1", 1004};
    // if (mov1 == mov2)
    //     cout << "equal" << endl;
    ///////////////////////
    // point x = {2, 4};
    // point y = {2, 4};
    // point z = {1, 3};
    // if (x == y)
    //     cout << "equal" << endl;
    // // or that wa    // pointer to structures operator ->

    // cout << (x == z) << endl;
    // //apply the ostream, point <<stream operator function << .
    // cout << x;
    /////////////////////////////////////////////////////////////
    // apply showMovie & getMovie
    // Movie m = getMovie();
    // showMovie(m);
    // apply showMovie using pass by pointer
    // Movie m = getMovie();
    // showMovie(&m);
    /////////////////////////////////////////////////////////////
    // using enum to make a list of integer in one type

    // cout << "1: List invoices" << endl
    //      << "2: Add invoices" << endl
    //      << "3:Update invoices" << endl
    //      << "Select: ";
    // int input;
    // cin >> input;
    // if (input == Actions::list)
    //     cout << "List invoices" << endl;
    /////////////////////////////////////////////////////////////
    // if we use the strongly_typed enumerate we will modify the code as
    // cout << "1: List invoices" << endl
    //      << "2: Add invoices" << endl
    //      << "3:Update invoices" << endl
    //      << "Select: ";
    // int input;
    // cin >> input;
    // // casting it by static_cast<int>
    // if (input == static_cast<int>(Actions::list))
    //     cout << "List invoices" << endl;
    /////////////////////////////////////////////////////////////
    // // streams
    // cout << "enter first and second numbers: " << endl;
    // cout << "First: " << endl;
    // int First;
    // cin >> First;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cout << "second: " << endl;
    // int Second;
    // cin >> Second;
    // cout << "You entered " << First << " and " << Second << endl;
    //
    // //////////////////////////////////////////////////////////////
    // handling input errors
    // int first;
    // int second;

    // cout << "enter First: " << endl;
    // cin >> first;
    // while (true)
    // {
    //     cout << "enter First: " << endl;
    //     cin >> first;
    //     if (cin.fail())
    //     {
    //         cout << "Enter a valid number!" << endl;
    //         cin.clear();
    //         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //     }
    //     else
    //         break;
    // }

    // cout << "Second: ";
    // cin >> second;
    // cout << "You entered " << first << " and " << second << endl;
    // ///////////////////////////////////////////////////////////////////
    // File streams
    // create a file and write into it
    // ofstream file;
    // file.open("data.csv");
    // if (file.is_open())
    // {
    //     file << "id,title,year\n"
    //          << "1,Terminator 1,1994\n"
    //          << "2,Terminator 2,1996\n";
    //     file.close();
    // }
    // read from file

    // this way will red all the character in first row till find delimiter like white space or new line
    // string str;
    // file >> str;
    // cout << str;
    // second way is use getline()
    // getline(file, str);
    ///////////////////////////////////////////
    // read from csv file and loop for all lines and store them as struct movie , then print one of attributes values
    //  ifstream file;
    //  file.open("data.csv");
    //  if(file.is_open())
    //  {
    //  string str;
    //  getline(file, str);
    //  while (!file.eof())
    //  {
    //      getline(file, str, ',');
    //      if (str.empty())
    //          continue;
    //      movie movie;
    //      movie.id = stoi(str);
    //      getline(file, str,',');
    //      movie.title = str;
    //      getline(file, str);
    //      movie.year = stoi(str);
    //      cout<<movie.title<<endl;

    // }
    // }
    // file.close();
    //////////////////////////////////////////////////
    // writing to binary files
    //  int numbers[] = {1'000'000,2'000'000,3'000'000};
    //  // ofstream file{"numbers.dat"};
    //  ifstream file{"numbers.dat"};
    //  if(file.is_open())
    //  {
    //      //dealing with .dat or .bin files will make it 12 bytes instead of 24 back to system
    //      // file.write(reinterpret_cast<char*>(&numbers),sizeof(numbers));
    //      /////////////////////////////////////////////////////////
    //      //read from binary file
    //      //init number to store what we read
    //      //while loop for all lines and store with pointer cast , then print the number
    //      // int number;
    //      // while(file.read(reinterpret_cast<char*>(&number),sizeof(number)))
    //      // cout<<number<<endl;
    //      // file.close();

    // }
    ///////////////////////////////////////////////////
    // working with file streams
    //  we will use fstreams that include istream and ostream
    //  fstream file;
    //  file.open("file.txt", ios::in | ios::out | ios::app | ios::binary);
    //  if(file.is_open())
    //  {
    //      file.close();
    //  }
    ///////////////////////////////////////////////////
    // string streams
    // double number = 12.32;
    // stringstream stream;
    // //use the fixed for floating point and the percision for number of fractial digits
    // stream<<fixed<<setprecision(2)<<number;
    // string str = stream.str();
    // cout<<str<<endl;
    // //make it as function
    // cout<< numberToString(12.344354,3)<<endl;
    //////////////////////////////
    // //parsing string
    // string number = "10 30";
    // stringstream stream ;
    // stream.str(number);
    // int first,second;
    // stream>>first;
    // stream>>second;
    // cout<<first+second<<endl;
    // apply parseMovie()
    // auto movie  = parseMovie("Terminator 1,1984");
    // cout<<movie.year<<endl;
    /////////////////////////////////////////////////////
    ////////////////////////////////////////////////
    /////////////////////////////////////////
    //////////////////////////////////
    /////////////////////
    ///////////
    ///////
    /////
    ////
    //
    // explicit conversion using static_cast of pointers
    Base *base_ptr = new Derived();
    base_ptr->print();
    Derived *derived_ptr = static_cast<Derived *>(base_ptr);
    derived_ptr->print();
    // using static_cast for explicit conversion for upcasting and downcasting
    Derived derived_obj;
    Base &base_ref = derived_obj; // upcasting implicitly

    Derived *derived_ptr_2 = static_cast<Derived *>(base_ptr);
    derived_ptr_2->print();
    cout << M_PI / 2 << endl;
    cout << M_PI_2;
    return 0;
}
