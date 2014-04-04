#pragma once
#include "Sort.h"

template<class Key_t>
class MergeSort_t : public Sort_t<Key_t>{
public:
	void sort(vector<Key_t>&);
	void Msort(vector<Key_t>&, int, int);
	void merge(vector<Key_t>&, int, int);
};

template <class Key_t>
void MergeSort_t<Key_t>::sort(vector<Key_t>& sec){
	Msort(sec, 0, (sec.size() -1));
}
template <class Key_t>
void MergeSort_t<Key_t>::Msort(vector<Key_t>& sec, int ini, int fin){

	if (ini < fin){
		Msort(sec, ini, (fin + ini) / 2);
		Msort(sec, ((ini + fin) / 2) + 1, fin);
		merge(sec, ini, fin);
	}
}
template <class Key_t>
void MergeSort_t<Key_t>::merge(vector<Key_t>& sec, int ini, int fin){
	vector<Key_t> aux;
	int i = ini;
	int j = ((ini + fin) / 2) + 1;
	int k = 0;

	while (i <= ((ini + fin) / 2) && j <= fin) {
		if (sec[i] < sec[j]){
			aux.push_back(sec[i]);
			i++;
		}
		else {
			aux.push_back(sec[j]);
			j++;
		}
	}

	if (i > ((ini + fin) / 2)){
		while (j <= fin){
			aux.push_back(sec[j]);
			j++;
		}
	}
	else{
		while (i <= ((ini + fin) / 2)){
			aux.push_back(sec[i]);
			i++;
		}
	}
	for (int h = ini; h <= fin; h++) {
		sec[h] = aux[k];
		k++;
	}

}
