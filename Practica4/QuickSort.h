#pragma once
#include "Sort.h"

template<class Key_t>
class QuickSort_t : public Sort_t<Key_t>{
public:
	void sort(vector<Key_t>&);
	void Qsort(vector<Key_t>&, int, int);
	int pivote(vector<Key_t>&, int, int);
};

template <class Key_t>
void QuickSort_t<Key_t>::sort(vector<Key_t>& sec){
	Qsort(sec, 0, sec.size() - 1);
}
template <class Key_t>
void QuickSort_t<Key_t>::Qsort(vector<Key_t>& sec, int ini, int fin){
	int q;

	if (ini < fin) {
		q = pivote(sec, ini, fin);
		Qsort(sec, ini, q - 1);
		Qsort(sec, q + 1, fin);
	}

}

template <class Key_t>
int QuickSort_t<Key_t>::pivote(vector<Key_t>& sec, int ini, int fin){
	Key_t x = sec[ini];
	int i = ini;
	Key_t aux;

	for (int j = ini + 1; j <= fin; j++){
		if (sec[j] <= x){
			i++;
			aux = sec[i];
			sec[i] = sec[j];
			sec[j] = aux;
		}
	}
	aux = sec[ini];
	sec[ini] = sec[i];
	sec[i] = aux;

	return i;
}