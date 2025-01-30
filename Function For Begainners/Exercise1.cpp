// 2.1 Exercise 1: The Simplest of Simple Functions
/* Write a ”Hello World!” program that simply invokes a function to do the dirty work of outputting
 the message. Call your file function hello.cpp and build it to the executable function hello. When
 your program runs, it should be invocable from the command line with: */
#include<iostream>
// we talked about preprocessor and here we are using iostream which mean input/output stream which allows us to output massage for hello,world
using namespace std;
// we declaring here namespaces as std; which standard and here we are using the cardinal sin of this we can improve our namespaces in next sessions
int main(){
// declaring main function in cpp its default to run main function with automatic return type
cout <<"Hello,World"<<endl;
// cout is type of object supported by iostream which "character out" the massage provided within the <<
return 0;
//return 0 and we can refer to call stacks lesson
}

