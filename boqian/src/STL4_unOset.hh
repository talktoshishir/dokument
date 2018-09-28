/*
 * STL4_unOset.hh
 *
 *  Created on: 23-Sep-2018
 *      Author: shishirpandey
 */

#ifndef STL4_UNOSET_HH_
#define STL4_UNOSET_HH_
#include<unordered_set>

#include<string>
#include<vector>

void printout(string name){
	cout<<name<<" ";
}

void testUnorderedSet(){

	unordered_set<string> myset = {"Shishir","Samarth","Shruti"};
	unordered_set<string>::iterator it = myset.find("Shruti");

	if(it != myset.end()){
		cout<<*it<<endl;
	}
	myset.insert("Samaira");

	vector<string> vec = {"String", "Attached"};
	myset.insert(vec.begin(), vec.end());

	for_each(myset.begin(),myset.end(), printout);


	cout<<"Load factor: "<<myset.load_factor()<<endl;
	string x = "Samarth";
	cout<<x<<" is in bucket #"<<myset.bucket(x)<<endl;
	cout<<"Total bucket count = "<<myset.bucket_count();
}



#endif /* STL4_UNOSET_HH_ */
