###Topic: Hash Tables

##HASHING BASICS 

Hashing provides O(1) time on average forr inserting, searching, and deleting

Hash function: maps a big number/string to a small int that can be used as an index in the hash table

Collision in hashing: when two values are given the same index
Ex: Hash function h(x)
	
	x = 9864567654 
	h(x) = x mod 7 = 4

	x = 9864567643 
	h(x) = x mod 7 = 4

**Calculations aren't correct, numbers are for showing 

#Techniques to fix collision:

1)Chaining - idea of making each cell of the hash table point to a linked list  
2)Opened Addressing - elements are stored in the hash table itsel. It is divided into the folllowing three types:
			-Linear probing
			-Quadratic probing
			-Double Hashing

##HASHING - SEPARATE CHAINING 

Defintion: make each cell (index) of the hash table point to a linked list

Adantages:
	- Easy to implement
	- Never gets full so you can always add more elements to the chain
	- Less sensitive to the hash function or load factors
	- Can be used easily when aren't aware of operations that need to be done with the keys

Disadvantages:
	- Not good with cache performance b/c keys are stored using linked list
	- Wastage of space - space/slots in the hash table that aren't taken by any of the keys
	- Complexity time - if the chain gets too long, the worst case complexity time for searching can be O(n)
	- Use extra space for links

Performance:
n = number of keys
m = nuumber of slots 
alpha = average keys per slot or load factors = n/m 

**average number of keys per slot given an assumption that each key is equally likely to be hashed to any slot on the table, independent of where the other keys are hashed

Expected time to insert/search/delete become O(1 +alpha)

Example: 

Hash function: h(x) = x mod 7

Keys: 50, 700, 76, 85, 92, 73, 101

//i denotes as index

 50 mod 7 = i 1
 
 700 mod 7 = i 0
 
 76 mod 7 = i 6
 
 85 mod 7 = i 1
 
 92 mod 7 = i 1
 
 73 mod 7 = i 3
 
 101 mod 7 = i 3
 

 Hash Table below (think of it as an array)
 Create a pointer to a linked list

i 0 = 700
i 1 = 50 -> 85 -> 92
i 2 = 
i 3 = 73 -> 101
i 4 = 
i 5 = 
i 6 = 76

