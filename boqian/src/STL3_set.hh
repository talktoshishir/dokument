/*
 * STL3_set.hh
 *
 *  Created on: 21-Sep-2018
 *      Author: shishirpandey
 */

#ifndef STL3_SET_HH_
#define STL3_SET_HH_

#include<set>

void testSet(){
	set<int> myset;
	myset.insert(4);
	myset.insert(3);
	myset.insert(7);
	myset.insert(9);

	for(int i: myset) cout<<i<<" ";
	cout<<endl;

	set<int>::iterator it;
	it = myset.find(7);

	pair<set<int>::iterator, bool> ret;
	ret = myset.insert(3); //Return false, as no duplicate element allowed
	if(ret.second == false)
		it=ret.first;

	myset.insert(2);
	for(int i: myset) cout<<i<<" ";	cout<<endl;
	myset.erase(it);
	for(int i: myset) cout<<i<<" ";	cout<<endl;
	myset.erase(7);

	for(int i: myset) cout<<i<<" ";	cout<<endl;
}



#endif /* STL3_SET_HH_ */
