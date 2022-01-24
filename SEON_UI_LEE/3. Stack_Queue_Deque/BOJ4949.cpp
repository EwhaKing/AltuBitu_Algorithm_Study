#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {

	string input;
	


	while (true) {
		
		getline(cin, input);
		if (input == ".") {
			break;
		}

		stack<char> s;
		int isBalanced = 1;

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '(' || input[i] == '[') {
				s.push(input[i]);
			}

			else if (input[i] == ')') {
				if (s.empty()) {

					isBalanced = 0;
					break;

				}
				else if (s.top() == '(') {
					s.pop();
					continue;
				}				
				else {

					isBalanced = 0;
					break;
				}
			}

			else if (input[i] == ']') {
				if (s.empty()) {
					isBalanced = 0;
					break;

				}
				else if (s.top() == '[') {
					s.pop();
					continue;
				}
				else {

					isBalanced = 0;
					break;
				}
			}
			
		}

		if (!s.empty()) {
			cout << "no" << endl;
		}
		else if (isBalanced == 1 && s.empty()) {
			cout << "yes" << "\n";
		}
		else if (isBalanced == 0) {
			cout << "no" << endl;
		}

	}
	

	return 0;
}