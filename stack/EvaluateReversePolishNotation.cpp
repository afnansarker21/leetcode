class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // acknowledge the stack
        // loop - for each integer in the token
        // list the operations "+, -, /, *"
        // list some conditions using those operations
        // use a,b for - and / operations 

        stack<int> stk;
        for (const string& i : tokens) {
            if (i == "+" || i == "-" || i == "*" || i == "/") {
                int b = stk.top(); stk.pop();
                int a = stk.top(); stk.pop();
                int result = 0;

                if (i == "+") result = a + b;
                else if (i == "-") result = a - b;
                else if (i == "/") result = a / b;
                else if (i == "*") result = a * b;

                stk.push(result);
            }

            else {
                stk.push(stoi(i));
            }

        }

        return stk.top();

    }
};