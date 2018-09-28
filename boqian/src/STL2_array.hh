/*
 * STL1_array.hh
 *
 *  Created on: 21-Sep-2018
 *      Author: shishirpandey
 */

#ifndef STL2_ARRAY_HH_
#define STL2_ARRAY_HH_

#include<array>
#include<iterator>
#include<algorithm>


void testArr(){

	array<int, 3> myArr = {3, 5, 6};

	for(auto i: myArr)	cout<<i<<" ";
	cout<<endl;

}

#endif /* STL2_ARRAY_HH_ */
