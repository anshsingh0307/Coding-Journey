//Decode String (Leetcode---->>> 394)

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string decodeString(string s) {
        stack<int> numberStack;
        stack<string> stringStack;

        int number = 0;
        string current = "";

        for(char ch : s) {
            if(isdigit(ch)) {
                number = number * 10 + (ch - '0');
            }
            else if(ch == '[') {
                numberStack.push(number);
                stringStack.push(current);

                number = 0;
                current = "";
            }
            else if(ch == ']') {
                int repeat = numberStack.top();
                numberStack.pop();

                string prev = stringStack.top();
                stringStack.pop();

                while(repeat--) {
                    prev += current;
                }

                current = prev;
            }

            else {
                current += ch;
            }
        }
        return current;
    }
};