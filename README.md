# 1910.Remove All Occurrences of a Substring 

## Intuition
We need to loop through string to find and erase all possible combinations of given substring using inbuilt functions.

## Naive Approach
- Declare a function to find the valid positions of given substring.
    - Loop through all string values using *while*
    - Use ***Find*** function, which returns *npos* value (no position) if given substring has not been found OR returns the *first occurence* of the substring
    - Return -1 if no position for the substring is available in the string
- In the main function, again loop over the entire string
- Use the above constructed function to check if the substring is present in the string.
- Here another function, ***Erase*** comes in handy. 
    - Erase removes the substring in a given substring, taking 2 parameters: 
    *first index*, and *length of the substring* to be erased.
    - The first index is returned by the Find function, and second parameter is calculated.

## Complexity
- Time complexity:
$$O(n^2)$$

- Space complexity:
$$O(1)$$

## Code
```
class Solution {
public:

    int foundpart(string s, string part){
        int i=0;
        int len=s.length();
        while(i<len){
            if(s.find( part)!=string::npos){
                return s.find(part);
            }
            i++;
        }
        return -1;
    }

    string removeOccurrences(string s, string part) {
        int i=0;
        int len=s.length();
        int plen= part.length();
    
        while(i<len){
            if(foundpart(s, part)!= -1){
                s.erase(foundpart(s, part), plen);
            }
            i++;
        }
        return s;
    }
};
```
