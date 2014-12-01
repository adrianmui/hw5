/**
 * Homework 5: Stack and queue exercises
 */

#include <stack>
#include <queue>
#include <string>
#include <cassert>
#include <string>
#include <iostream>
using namespace std;

// Returns true if the string has matched parentheses.
// i.e. "((tes)t)" should return true
//      "((tes)t))" should return false
//      "(tes)t(" should return false
bool checkMatchedParens(string input) {
	// Hints:
	//   input[i] gives you the ith character in the string
	//   input.length() gives you the length of the string
    queue<char> p;
    queue<char> q;
    for (int i = 0; i < input.length(); i++)
    {
        char a = input[i];
        if (a.compare("(") == 0)
            p.push(input[i])
        if (a.compare(")") == 0)
            q.push(input[i]);
    }
    if (p.size() == q.size())
    {
        return true;
    }
    else {
        return false;
    }
    
    // Your code here!
}

// Returns true if the string is a palindrome (the same forwards and backwards).
// You may only use a stack for this, and cannot make any other function calls.
bool isPalindrome(string input)
{
	/**stack<string> s;
    for (int i = 0; i < input.length; i++)
        s.push(input[i]);
    if (s.compare(input) == 0)
        return true;
    else
    {
        return false;
    }
    **/
    
    // Your code here!
}

// Given a Queue of integers, reverses the items in the Queue.
// You may only use a stack for this, and cannot make any other function calls.
queue<int> reverseQueue(queue<int> q) {
	queue<int> q2;
	// Your code here!
	return q2;
}

int main() {
	// Test checkMatchedParens:
	assert(checkMatchedParens("((tes)t)"));
	assert(checkMatchedParens("test"));
	assert(!checkMatchedParens("((tes)t))"));
	assert(!checkMatchedParens("((tes)t("));
	// Test isPalindrome:
	assert(isPalindrome("racecar"));
	assert(isPalindrome("madamimadam"));
	assert(isPalindrome("amanaplanacanalpanama"));
	assert(!isPalindrome("thisisnotapalindrome"));
	assert(!isPalindrome("happythanksgiving"));
	// Test reverseQueue:
	queue<int> q;
	for (int i = 1; i <= 5; i++) {
		q.push(i);
	}
	queue<int> q2 = reverseQueue(q);
	for (int i = 5; i >= 1; i--) {
		assert(q2.front() == i);
		q2.pop();
	}
	assert(q2.empty());
	cout << "Everything checks out!  Great job!" << endl;
}
