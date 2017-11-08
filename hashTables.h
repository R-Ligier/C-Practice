#ifndef HASHTABLES_H
#define HASHTABLES_H

#include <iostream> 
#include <string> 

using namespace std; 

/*
Notes:

- Example: have a key and hash function has a hash value of 453 size of the table is 100
divide 453 / 100 = 4 and end up with a remainder of 53 which = index
- int(x) = type casting, takes ASCII value of the letter


------------------------------------------------------------------
*/


class hashTable{

private:
	
	int tableSize;

public: 

	hashTable(){ tableSize = 100; }

	int Hash(string key){
		int hash = 0;
		int index;


		for(int i = 0; i < key.length(); i++){
			hash = hash + (int)key[i];
			cout << "Hash = " << hash << endl;
		}
		
		//Location of where u want info stored
		// 402 / 100 = 4 w/ remainder 2
		index = hash % tableSize;

		return index; 
	}



};

#endif