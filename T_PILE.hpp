/*
 * T_PILE.hpp
 *
 *  Created on: 4 déc. 2018
 *      Author: chapoul
 */

#ifndef T_PILE_HPP_
#define T_PILE_HPP_


#define TABLEAU_SIZE 10000

#include "T_PILE.hpp"
#include <iostream>
#include <vector>
using namespace std;



template<typename DataType> class T_PILE{


	public:

		T_PILE(){Sommet=0;};

		~T_PILE(){};

		void Push(DataType x);

		void Pop();

		void Clear();

		DataType Read_Front(DataType Sommet);

		void test();




	private:

		DataType Tableau[TABLEAU_SIZE];

		int Sommet;



	protected:


};





#endif /* T_PILE_HPP_ */
