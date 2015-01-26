//
//  q20.cpp
//  leetcode
//
//  Created by 蒋秉洁 on 15/1/26.
//  Copyright (c) 2015年 蒋秉洁. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;

class Solution{
public:
    bool isValid(string const& s) {
        string left="([{]";
        string right=")]}";
        stack<char> stk;
        
        for(auto c:s){
            if(left.find(c)!=string::npos){
                stk.push(c);
            }
            else{
                if(stk.empty()||stk.top()!=left[right.find(c)])
                    return false;
                else
                    stk.pop();
            }
            
        }
        
        
        return stk.empty();
        
    }
};
