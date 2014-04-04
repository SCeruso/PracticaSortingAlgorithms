#pragma once
#include "Sort.h"
#include <math.h>

template<class Key_t>
class ShellSort_t : public Sort_t<Key_t>{
private: 
	double alfa;
public:
	ShellSort_t();
	void setAlfa(double);
	void sort(vector<Key_t>&);
	void deltaSort(int, vector<Key_t>&);

};

template<class Key_t>
ShellSort_t<Key_t>::ShellSort_t<Key_t>() : alfa(0.5){}

template<class Key_t>
void ShellSort_t<Key_t>::setAlfa(double a){ 
	if (a <= 0 || a >= 1)
		throw 4;
	alfa = a; 
}

template<class Key_t>
void ShellSort_t<Key_t>::sort(vector<Key_t>& sec){

	int i = 0;
	vector <int> posDel;
	int aux;
	int del;
	
	while (true){
		aux = (pow(3, i) - 1) / 2;
		posDel.push_back(aux);
		if (posDel[i] > sec.size()){
			del = posDel[i - 1];
			break;
		}
		i++;
	}
	//del = sec.size() - 1;
	while (del > 1){
		del = del*alfa;
		deltaSort(del, sec);
		//del = del*alfa;
	}
}

template<class Key_t>
void ShellSort_t<Key_t>::deltaSort(int d, vector<Key_t>& sec){
	Key_t x;
	int j;

	for (int i = d ; i < sec.size(); i++){
		x = sec[i];
		j = i;
		while (j >= d && x < sec[j - d]){
			sec[j] = sec[j - d];
			j = j - d;
		}
		sec[j] = x;
	}
}