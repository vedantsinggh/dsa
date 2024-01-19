//20. Valid Parentheses

/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		std::string stack = "";

		for (char a : s)
		{
			switch (a)
			{
			case '{':
				stack.append("{");
				break;
			case '}':
				if (stack.size() < 1) return false;
				if (stack.at(stack.size() - 1) == '{') stack =  stack.substr(0,stack.size() - 1);
				else return false;
				break;
			case '(':
				stack.append("(");
				break;
			case ')':
				if (stack.size() < 1) return false;
				if (stack.at(stack.size() - 1) == '(') stack =  stack.substr(0,stack.size() - 1);
				else return false;
				break;
			case '[':
				stack.append("[");
				break;
			case ']':
				if (stack.size() < 1) return false;
				if (stack.at(stack.size() - 1) == '[') stack =  stack.substr(0,stack.size() - 1);
				else return false;
				break;
			default:
				break;
			}
		}

		if (stack == "") return true;
		return false;
	}
};