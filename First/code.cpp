/*
 * code.cpp
 *
 *  Created on: 18-Dec-2018
 *      Author: rohan
 */
#include <iostream>
#include <vector>
using namespace std;
#define MAX 100
#include <cstring>
#include <string>
#include <algorithm>
#include <stack>

bool compare (int i , int j){
	return (i>j);
}
int main(){
//  	using loops and outputs..
//
//	int arr [4];
//
//	for(int i =0; i<4;i++){
//		arr[i] = i*2;
//	}
//
//	for(int i =0; i<4;i++){
//			cout << "the value of arr[" << i << "] is "
//					<< arr[i] << endl;
//		}
//-----------using vectors------------------


//	using max when we know the highest size
//	vector<int> arr(MAX);


//	cout << "enter the no of elements: ";
//	int count , sum =0;
//	cin >> count ;
//
//	vector<int> arr;
//	arr.resize(count);
//
//	for(int i =0 ; i<count ; i++){
//		arr[i] = i;
//		sum += arr [i];
//	}
//	cout << "array sum: " << sum << endl;

//-----using strings---------
//	   	   string str1 = "Hello";
//	   	   string str2 = " world";
//
//	   	   string str = str1 + str2;
//	   	   cout << str;


//	-----using sort---------
//	int data[] = {45,32,31,4,5,56};
//	sort(data, data+5, compare); // not giving compare makes
								 //it in ascending order

//	for (int i =0; i < 5; i++){
//		cout << data[i] << " ";
//	}

//	int data[] = {45,32,31,4,5,56};
//	int key = 32;
//	if(binary_search(data, data+5, key))
//		cout << "found!" << endl;
//	else
//		cout<< "not found!" << endl;
//
//	replace (data, data +5 , 31,1); // replacing an element
//
//
//	rotate(data, data+2, data+5); //rotating circular from 3
//
//
//	for (int i =0; i < 5; i++){
//			cout << data[i] << " ";
//	}

//----using stacks-----------

//	char str[10]= "ABDJEI";
//	stack<char> s;
//
//
//	for (int i =0 ; i < strlen(str) ; i++ ){
//		s.push(str[i]);
//	}
//
//	cout << "reversed string ";
//	while(!s.empty()){
//		cout << s.top();
//		s.pop();
//	}


	// postfix notation problem

//	char postfix[] = {'1','2','3','*','+','4','-'};
//	stack<int> s;
//
//	for(int i =0; i < 7;i++){
//		char ch = postfix[i];
//		if(isdigit(ch)){
//			s.push(ch - '0');
//		}
//		else{
//			int op1 = s.top();s.pop();
//			int op2 = s.top();s.pop();
//
//			switch(ch){
//			case '*':  s.push(op2 * op1); break;
//			case '+':  s.push(op2 + op1); break;
//			case '-':  s.push(op2 - op1); break;
//			case '/':  s.push(op2 / op1); break;
//			}
//		}
//	}
//	cout << "evaluated: " << s.top()<< endl;
//
//
//
//	return 0;

}

