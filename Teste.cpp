/*
 * Teste.cpp
 *
 *  Created on: 10 de set de 2017
 *      Author: felipe
 */

#include "Teste.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){

	int x;

	vector <int,string> vetor;
	vector <int>::iterator index;

	for (int j =0;j<5;j++){
		cin >> x;
		vetor.push_back(x);

	}


	for (int a =0;a <vetor.size();a++){
		cout << vetor[a] << '\n';
	}






	return 0;
}
