/*
 * T_PILE.cpp
 *
 *  Created on: 4 déc. 2018
 *      Author: chapoul
 */

#include "T_PILE.hpp"

template class T_PILE<int>;


template <typename DataType>
void T_PILE<DataType>::Push(DataType x){

	try{

		if(Sommet >= TABLEAU_SIZE){

			throw string ("Tableau full, new value add impossible");

		}
		else{

			Sommet++;

			Tableau[Sommet] = x;

			cout<<"Add value: "<< x <<endl;

		}

	}
	catch(string &Error){

		cerr<<Error<<endl;

	}


}

template <typename DataType>
void T_PILE<DataType>::Pop(){

	try{

		if(Sommet <= 0){

			throw string ("Tableau empty, Pop impossible");

		}
		else{

			Tableau[Sommet] = 0;

			Sommet--;

			cout<<"End tab value remove: "<<Sommet<<endl;

		}

	}
	catch(string &Error){

		cerr<<Error<<endl;

	}

}

template <typename DataType>
void T_PILE<DataType>::Clear(){

	for (int i = Sommet; i != 0 ; i--){

		Tableau[Sommet] = 0;

	}

	Sommet = 0;

	cout<<"Tableau clear "<<endl;

}

template <typename DataType> DataType
T_PILE<DataType>::Read_Front(DataType Sommet){

	try{

		if(Sommet < (TABLEAU_SIZE-TABLEAU_SIZE) and Sommet > TABLEAU_SIZE){

			throw string ("Value out of Tableau range");

		}
		else{

			return Tableau[Sommet];

		}

	}
	catch(string &Error){

		cerr<<Error<<endl;

	}

}


 template<typename DataType> inline void T_PILE<DataType>::test(){
	cout<< "dddddddd"<<endl;
}

