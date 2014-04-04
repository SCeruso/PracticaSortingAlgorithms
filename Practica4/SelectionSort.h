#pragma once
#include "Sort.h"

template<class Key_t>
class SelectionSort_t : public Sort_t<Key_t>{
public:
	void sort(vector<Key_t>&);
};

template <class Key_t>
void SelectionSort_t<Key_t>::sort(vector<Key_t>& sec){
	Key_t x;
	int min;

	for (int j = 0; j < sec.size(); j++){
		min = j;
		for (int i = j; i < sec.size(); i++){
			if (sec[i] < sec[min]) {
				min = i;
			}
		}
		x = sec[j];
		sec[j] = sec[min];
		sec[min] = x;
	}
}
