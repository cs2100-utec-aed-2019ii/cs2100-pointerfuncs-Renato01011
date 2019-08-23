/*------DECLARATIONS------*/
#include <iostream>
using namespace std;

/*_bubblesort_ con punteros a funcion*/
void* _bubblesort_(void* _array_, int _tam_, void (*_puntero_) (void*, int _tam_, int _i, int _k)) {
	for (int i = 0; i < _tam_; i++)
		for (int k = 0; k < _tam_ - 1; k++)
			_puntero_(_array_, _tam_, k, i);
	return _array_;
}

/*------FUNCTIONS------*/

void  _b_int_(void* _vector_, int tam, int _i, int _k) {
	int(*arr)[] = (int(*)[]) _vector_;
	if ((*arr)[_i] > (*arr)[_k]) {
		int temp = (*arr)[_i];
		(*arr)[_i] = (*arr)[_k];
		(*arr)[_k] = temp;
	}
}

void  _b_float_(void* _vector_, int tam, int _i, int _k) {
	float(*arr)[] = (float(*)[]) _vector_;
	if ((*arr)[_i] > (*arr)[_k]) {
		float temp = (*arr)[_i];
		(*arr)[_i] = (*arr)[_k];
		(*arr)[_k] = temp;
	}
}

void  _b_double_(void* _vector_, int tam, int _i, int _k) {
	double(*arr)[] = (double(*)[]) _vector_;
	if ((*arr)[_i] > (*arr)[_k]) {
		double temp = (*arr)[_i];
		(*arr)[_i] = (*arr)[_k];
		(*arr)[_k] = temp;
	}
}

void  _b_char_(void* _vector_, int tam, int _i, int _k) {
	char(*arr)[] = (char(*)[]) _vector_;
	if ((*arr)[_i] > (*arr)[_k]) {
		char temp = (*arr)[_i];
		(*arr)[_i] = (*arr)[_k];
		(*arr)[_k] = temp;
	}
}



/*------MAIN------*/
int main() {
	int i = 0;
	int _array_1[5] = { 2,20,7,108,9 };
	float _array_2[5] = { 4,5,9,7,2 };
	double _array_3[5] = { 3.0,8.0,2.0,4.0,15.0 };
	char _array_4[6] = { 'k','a','r','l','o','s' };

	_bubblesort_(_array_1, 5, _b_int_);
	_bubblesort_(_array_2, 5, _b_float_);
	_bubblesort_(_array_3, 5, _b_double_);
	_bubblesort_(_array_4, 6, _b_char_);

	for (auto item : _array_1) {
		cout << item << ' ';
	}
	cout << endl;
	for (auto item : _array_2) {
		cout << item << ' ';
	}
	cout << endl;
	for (auto item : _array_3) {
		cout << item << ' ';
	}
	cout << endl;
	for (auto item : _array_4) {
		cout << item << ' ';
	}

	return 0;
}