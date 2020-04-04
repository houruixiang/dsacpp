#pragma once


template<typename T> //插入排序
void Vector<T>::insertSort(Rank lo, Rank hi) {
	for (Rank i = lo + 1; i <= hi; ++i) {
		T curr = _elem[i]; //记录当前需要插入的元素
		Rank j = i-1; //待选择的插入区域[lo, j]
		while (j >= lo && curr < _elem[j]) { //当前元素小于选择Rank对应的元素
			_elem[j + 1] = _elem[j]; //移动元素
			--j;
		}
		_elem[j + 1] = curr; //讲当前元素插入待插入位置
	}
}