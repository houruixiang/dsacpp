#pragma once


template<typename T> //��������
void Vector<T>::insertSort(Rank lo, Rank hi) {
	for (Rank i = lo + 1; i <= hi; ++i) {
		T curr = _elem[i]; //��¼��ǰ��Ҫ�����Ԫ��
		Rank j = i-1; //��ѡ��Ĳ�������[lo, j]
		while (j >= lo && curr < _elem[j]) { //��ǰԪ��С��ѡ��Rank��Ӧ��Ԫ��
			_elem[j + 1] = _elem[j]; //�ƶ�Ԫ��
			--j;
		}
		_elem[j + 1] = curr; //����ǰԪ�ز��������λ��
	}
}