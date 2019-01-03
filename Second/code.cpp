/*
 * code.cpp
 *
 *  Created on: 19-Dec-2018
 *      Author: rohan
 */
#include <iostream>
#include<cmath>
using namespace std;

//const int TWO = 2;				// can be defined in any scope
//const double PI = 4.0*atan(1.0);

//#define SQUARE(x) (x) * (x) // pitfall is ++a
//inline int SQUARE(int x ) {return x * x;} //covers the pitfall of above

//void swap(int &, int &);
//int Fn_return_val(int &);
//int& Fn_return_ref(int &);

int main(){

//-------const and inline-------

//	int r = 10;
//	double  peri = TWO * PI * r;
//	cout << "perimeter: " << peri << endl;

// these are examples of pointer to constants

//	int m = 4;
//	const int n = 5;
//	const int *p = &n;
//	int *q = &n;//error normal pointer pointing to const

//	n = 6;//error const n cant be changed
//	*p = 7;//error p points to const cant be changed
//	p = &m;///okay
//	*p = 8;//error p points to const cant change

// these are examples of constant pointers

//	int m = 4 , n =5;
//	int * const p = &n;

//	n = 6;//okay
//	*p = 7;//okay
//	p = &m;//error pointer is const pointing to n

//------------inline function and macros-----------
// inlining is not binding on the compiler
// the compiler checks the efficiency and goes forward
// inline should not be recursive .. think of it as macros

//	int a = 3, b;
//	b = SQUARE(++a);
//	cout << "b is: "<< b << endl;

//----------reference and pointers----------
//	int a = 5, b = 6;
//	int &b = a;// j refers to i

//	cout << "a = " << a << ", b = " << b << endl;
//	cout << "&a = " << &a << ", &b = " << &b << endl;
//
//	++a;
//
//	cout << "a = " << a << ", b = " << b << endl;
//
//	++b;
//
//	cout << "a = " << a << ", b = " << b << endl;

//	cout << "a = " << a << ", b = " << b << endl;
//	swap(a,b);
//	cout << "a = " << a << ", b = " << b << endl;

//	int a =10;
//	cout << "a = " << a << ", &a = " << &a << endl;
////	const int &b = Fn_return_val(a);
//	int &b = Fn_return_ref(a);
//	cout << "B = " << b << ", &b = " << &b << endl;
//

	return 0;
}

//void g(int , double = 0.0, char * = NULL); //right of def parameter must have def
											 //def para. shouldnt be re-ref

//void swap(int &x, int &y){
//	//to make it as input only parameters use const inst &
//	int t ;
//	t = x;
//	x = y;
//	y = t;
//}

//int Fn_return_val(int &x){
//	cout << "x = " << x << ", &x = " << &x << endl;
//	return (x); //return by value
//}
//
//int& Fn_return_ref(int &x){
//	cout << "x = " << x << ", &x = " << &x << endl;
//	return (x); //return by value
//}


