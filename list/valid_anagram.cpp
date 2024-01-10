// 242. Valid Anagram

/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.
*/

#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false;

        int sT[26];
        int tT[26];

        for (char i = 0; i < s.size(); i++)
            sT[i-97]++;
        for (char i = 0; i < t.size(); i++)
            tT[i-97]++;

        for (char i = 0; i < s.size(); i++) 
            if (sT[i] != tT[i]) return false;          
        return true;
    }
};