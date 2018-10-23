/*************************************************************************
	> File Name: 1.c
	> Author:gaoyu
	> Mail:2282940822 
	> Created Time: 2018年10月22日 星期一 22时52分25秒
 ************************************************************************/

#include<stdio.h>
for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '(' || s[i] == '[' || s[i] == '{') parentheses.push(s[i]);
        else {
            if (parentheses.empty()) return false;
            if (s[i] == ')' && parentheses.top() != '(') return false;
            if (s[i] == ']' && parentheses.top() != '[') return false;
            if (s[i] == '}' && parentheses.top() != '{') return false;
            parentheses.pop();
        }
    }
    return parentheses.empty();
