# Topic: Recursion

Definition: a function α either calls itself directly or calls a function β that in turn calls the original function α.

#### **Example:**

int function(int value){
    if(value < 1){
    return function(value-1);
    }
}


### Properties
- Base Criteria: Must be at least one base criteria/condition that when this condition is met the function stops caling itsdelf recursively
- Progressive Approach: The recursive calls should progress in such a way that each call comes closer to the base criteria


### Time and Space Complexity
- TIME: A general call made to a function is O(1),  hence the (n) number of times a recursive call is made makes the recursive function Ο(n).
- SPACE: Because the system needs to store activation record of each time a recursive call is made, the space complexity may go higher than a fuction with iteration (iteration just needs to update values)
