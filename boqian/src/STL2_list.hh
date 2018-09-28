/*
 * STL1_list.hh
 *
 *  Created on: 21-Sep-2018
 *      Author: shishirpandey
 */

#ifndef STL2_LIST_HH_
#define STL2_LIST_HH_

#include<list>
#include<iterator>
#include<algorithm>


void testList(){

	list<int> mylist = { 3, 5, 6};
	list<int> mylist1 = { 4, 2, 7, 8};
	mylist.push_back(3);
	mylist.push_front(3);

	for(auto i: mylist)	cout<<i<<" ";
	cout<<endl;

	list<int>::iterator itr0 = mylist1.begin();
	list<int>::iterator itr1 = find(mylist.begin(), mylist.end(), 5);
	mylist1.splice(itr0, mylist, itr1, mylist.end());
	for(auto i: mylist1)	cout<<i<<" ";
	cout<<endl;
	for(auto i: mylist)	cout<<i<<" ";
	cout<<endl;

	list<int>::iterator itr = find(mylist.begin(), mylist.end(), 3);
	mylist.insert(itr, 9);
	for(auto i: mylist)	cout<<i<<" ";
	cout<<endl;

	itr++;
	mylist.erase(itr);
	for(auto i: mylist)	cout<<i<<" ";

}




#endif /* STL2_LIST_HH_ */
