/*
 * STL5_iterator.hh
 *
 *  Created on: 23-Sep-2018
 *      Author: shishirpandey
 */

#ifndef STL5_ITERATOR_HH_
#define STL5_ITERATOR_HH_

#include<set>

//template<typename T>
void print(int element){
	cout<<element<<" ";
}


void testIterator(){
	set<int> myset = {3, 4, 5, 6};
	set<int>::iterator itr;
	set<int>::const_iterator citr;

	for_each(myset.cbegin(), myset.cend(), print);
	cout<<endl;
	itr = myset.begin();
	citr = myset.begin();
	advance(citr, 2);
	cout<<*citr<<endl;
	cout<<distance(itr, citr);

}



#endif /* STL5_ITERATOR_HH_ */
