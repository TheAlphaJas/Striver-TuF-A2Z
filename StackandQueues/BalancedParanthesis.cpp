class Solution {
public:
    bool isValid(string s) {
        stack<int> S1;
        for(auto x:s) {
            if ((x=='(')||(x=='{')||(x=='[')) {S1.push(x);}
            else {
                if (S1.size()==0) {return 0;}
                if (x==')') {if(S1.top() == '(') {S1.pop();} else {return 0;}}
                if (x==']') {if(S1.top() == '[') {S1.pop();} else {return 0;}}
                if (x=='}') {if(S1.top() == '{') {S1.pop();} else {return 0;}}
            }
        }
        if (S1.size() == 0) {return 1;}
        return 0;
    }
};
