#pragma once
#include "Sort.h"

template<class Key_t>
class InsertionSort_t: public Sort_t<Key_t>{
public:
	void sort(vector<Key_t>&);
};

template <class Key_t>
void InsertionSort_t<Key_t>::sort(vector<Key_t>& sec){
	Key_t x;
	int j;

	for (int i = 1; i < sec.size(); i++){
		x = sec[i];
		j = i - 1;
		while (j >= 0 && sec[j] > x){
			sec[j + 1] = sec[j];
			j--;
		}
		sec[j + 1] = x;
	}
}
