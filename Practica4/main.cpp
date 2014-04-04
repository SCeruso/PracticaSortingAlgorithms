#include "Sort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "ShellSort.h"
#include "Tester.h"
#include <time.h>

int Tester::comp = 0;
int main(void){
	
	InsertionSort_t <Tester> ins;
	vector <Tester> s;
	Tester aux;
	SelectionSort_t <Tester> sel;
	MergeSort_t <Tester> mer;
	QuickSort_t <Tester> quick;
	ShellSort_t <Tester> shell;

	srand(time(NULL));
	
	for (int i = 9; i > 0; i--){
		aux.value() = rand() % 100;
		s.push_back(aux);
	}
	for (int i = 0; i <s.size(); i++){
		cout << s[i].value() << ", ";
	}
	cout << endl;

	shell.sort(s);

	for (int i = 0; i <s.size(); i++){
		cout << s[i].value() << ", ";
	}
	cout << endl;
	//s[0].get_comp() = 12;
	cout << s[0].get_comp() << endl;
	cout << endl;
	system("pause");
}