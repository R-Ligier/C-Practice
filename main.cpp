
#include "hashTables.h"
#include <iostream> 
#include <string> 


using namespace std; 

int main(){

int index;
hashTable hashObj;

index = hashObj.Hash("Paula");

cout <<"index = " << index <<endl;

return 0;

}