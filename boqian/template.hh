/*
 * template.hh
 *
 *  Created on: 19-Sep-2018
 *      Author: shishirpandey
 */

#ifndef TEMPLATE_HH_
#define TEMPLATE_HH_

#include <iostream>

template<typename T>
const T square(T num){
	return num*num;
}

void test0(){
	std::cout<<square(5)<<std::endl;
	std::cout<<square(5.5)<<std::endl;
}

template <class T>
class nArray{
	int aSize;
	int index;
	T* arr;
public:
	nArray(int size):aSize(size), index(0){
		arr = new T[aSize];
	}
	~nArray(){
		if(arr != NULL)
		delete[] arr;
	}
	void push(T element){
		arr[index] = element;
		index++;
	}
	void printArr() const {
		for(int i=0;i<index;i++)
			std::cout<<arr[i]<<std::endl;
	}

	T operator [](int index) const {
		return arr[index];
	}
	int getSize() const {
		return index;
	}

};

template<typename T>
nArray<T> operator *(const nArray<T>& rhs1, nArray<T>& rhs2){
	nArray<T> ret(rhs1.getSize());
	for(int i=0;i<rhs1.getSize();i++){
		ret.push(rhs1[i]*rhs2[i]);
	}
	return ret;
}

void test1(){
	nArray<int> intArr(5);
	intArr.push(3);
	intArr.push(7);
	intArr.push(8);
	intArr.printArr();

	intArr = intArr*intArr;
	intArr.printArr();
}

#endif /* TEMPLATE_HH_ */
