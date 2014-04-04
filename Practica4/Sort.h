#pragma once
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>


using namespace std;

enum SMethod { QuickSort, InsertionSort, SelectionSort, MergeSort, ShellSort };

template<class Key_t> 
class Sort_t {
public:
	virtual void sort(vector<Key_t>&) = 0;
};

