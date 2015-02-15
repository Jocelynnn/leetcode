//
//  q168.cpp
//  leetcode
//
//  Created by 蒋秉洁 on 15/1/29.
//  Copyright (c) 2015年 蒋秉洁. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        if(n<1)
            return "";
        else{
            string result="";
            while(n>0){
                char c=(n-1)%26+'A';
                result+=c;
                n=n/26;
            }
            reverse(result.begin(),result.end());
            return result;
            
        }
    }

};
