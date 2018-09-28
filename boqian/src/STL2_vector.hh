/*
 * STL1_vector.hh
 *
 *  Created on: 21-Sep-2018
 *      Author: shishirpandey
 */

#ifndef STL2_VECTOR_HH_
#define STL2_VECTOR_HH_

#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

void testVector(){
	vector<int> vec;
	vec.push_back(4);
	vec.push_back(3);
	vec.push_back(9);

	cout<<vec[3]<<endl;
	//cout<<vec.at(3)<<endl;

	vector<int>::iterator itr1 = vec.begin(); //half open [begin,end)
	vector<int>::iterator itr2 = vec.end();

	for(int itr = 0; itr<vec.size(); ++itr)
			cout<<vec[itr]<<" ";
			cout<<endl;

	for(vector<int>::iterator itr = itr1; itr!=itr2; ++itr)
		cout<<*itr<<" ";
		cout<<endl;
	sort(itr1, itr2);
	for(vector<int>::iterator itr = itr1; itr!=itr2; ++itr)
			cout<<*itr<<" ";
	cout<<endl;

	//for(vector<int>::iterator it: vec)
	//	cout<<it<<" ";
}



#endif /* STL2_VECTOR_HH_ */
