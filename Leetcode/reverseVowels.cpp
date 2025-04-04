/* Reverse Vowels of a String
Solved
Easy
Topics
Companies
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"   */

class Solution {
 public:
  string reverseVowels(string s) {
    int l = 0;
    int r = s.length() - 1;

    while (l < r) {
        while (l < r && !isVowel(s[l]))
        ++l;
      while (l < r && !isVowel(s[r]))
        --r;
      swap(s[l++], s[r--]);
    }

    return s;
  }

 private:
  bool isVowel(char c) {
    static constexpr string_view kVowels = "aeiouAEIOU";
    return kVowels.find(c) != string_view::npos;
  }
};
