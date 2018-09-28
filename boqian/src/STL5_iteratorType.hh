/*
 * STL5_iteratorType.hh
 *
 *  Created on: 24-Sep-2018
 *      Author: shishirpandey
 */

#ifndef STL5_ITERATORTYPE_HH_
#define STL5_ITERATORTYPE_HH_

#include<vector>
#include<iterator>

void print(int element){
	cout<<element<<" ";
}

void testIteratorType(){
	//Insert Iterator
	vector<int> vec0 = {2,3,4};
	vector<int> vec1 = {12,14,18,32};

	vector<int>::iterator it = find(vec1.begin(), vec1.end(), 18);
	insert_iterator<vector<int>> i_itr(vec1,it);
	copy(vec0.begin(), vec0.end(), i_itr);
	for_each(vec1.begin(), vec1.end(), print);


}



#endif /* STL5_ITERATORTYPE_HH_ */
