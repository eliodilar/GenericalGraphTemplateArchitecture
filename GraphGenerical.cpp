//============================================================================
// Name        : Graph.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "T_PILE.hpp"
#include <time.h>
//#include "T_PILE.cpp"




using namespace std;



int main() {

	double Start_Time;

	double Stop_Time;


	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Start_Time = (double) clock();

	T_PILE<int> * New_Pile = new  T_PILE<int> ; //<<----- ok





	for(int i =0 ; i< 9999 ; i++){

		New_Pile->Push(i);

	}

	for(int i = 9999 ; i> 0 ; i--){

		New_Pile->Pop();

	}


	Stop_Time = (double) clock();

	New_Pile->~T_PILE();

	cout<<"tick time execution: "<< Stop_Time - Start_Time<<endl;

	cout << "!!!Programm end!!!" << endl;

	return 0;
}
