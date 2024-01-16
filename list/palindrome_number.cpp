// 9. Palindrome Number


/* Given an integer x, return true if x is a 
palindrome
, and false otherwise.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        
        unsigned long palindrome = 0;
        unsigned long copy = x;
        while (x > 0)
        {
            unsigned short digit = x%10;
            palindrome = palindrome*10 + digit;
            x /= 10;
        }
        
        return (palindrome == copy);
    }
};