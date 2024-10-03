class Solution {
public:
    int calculate(string s) {
        stack<int> number;
        stack<int> operators;
        int num = 0;
        int ans = 0;
        int sign = 1;
        for (char c : s) 
        { 
            if (isdigit(c)) 
            {
                num = num * 10 + (c - '0');
            }
            else 
            {
                ans += sign * num;
                num = 0;
                if (c == '+') 
                    sign = 1;
                if (c == '-') 
                    sign = -1;
                if (c == '(') 
                {
                    number.push(ans);
                    operators.push(sign);
                    ans = 0;
                    sign = 1;
                }
                if (c == ')' && operators.size()) 
                {
                    ans = operators.top() * ans + number.top();
                    operators.pop(); 
                    number.pop();
                }
            }
        }
        ans += sign * num;
        return ans;
    }
};