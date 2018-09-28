/*
 * STl3_map.hh
 *
 *  Created on: 22-Sep-2018
 *      Author: shishirpandey
 */

#ifndef STL3_MAP_HH_
#define STL3_MAP_HH_

#include<map>
//#include<iterator>


void testMap(){

	map<char, int> mymap;
	mymap.insert(pair<char, int>('a', 100));
	mymap.insert(make_pair('z',200));

	map<char, int>::iterator it = mymap.begin();
	mymap.insert(it, pair<char, int>('b', 300));

	it = mymap.find('z');

	for(it=mymap.begin(); it!=mymap.end(); it++)
		cout<<(*it).first << "=>" << (*it).second<<endl;
}



#endif /* STL3_MAP_HH_ */
