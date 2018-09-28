/*
 * STL1_deque.hh
 *
 *  Created on: 21-Sep-2018
 *      Author: shishirpandey
 */

#ifndef STL2_DEQUE_HH_
#define STL2_DEQUE_HH_

#include<deque>

void testDeque(){
	deque<int>  deq = { 3, 5, 6};
	deq.push_front(1);
	deq.push_back(1);

	for(deque<int>::iterator itr = deq.begin(); itr!=deq.end(); ++itr)
			cout<<*itr<<" ";
			cout<<endl;
}


#endif /* STL2_DEQUE_HH_ */
