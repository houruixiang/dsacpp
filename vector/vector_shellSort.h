#pragma once


// 希尔排序中用到的插入排序
template <typename T>
void  Vector<T>:: groupSort(Rank i, Rank gap) {
	for (Rank j = i + gap; j < _size; j += gap) {
		if (_elem[j] < _elem[j - gap]) {
			Rank k = j - gap;
			T temp = _elem[j];
			while (k >= 0 && temp < _elem[k]) {
				_elem[k + gap] = _elem[k];
				k -= gap;
			}
			_elem[k + gap] = temp;
		}
	}
}

template<typename T>
void Vector<T>::shellSort(Rank lo, Rank hi) {
	for (Rank gap = _size / 2; gap > 0; gap /= 2) {
		for (Rank i = 0; i < gap; ++i)
			groupSort(i, gap);
	}
}