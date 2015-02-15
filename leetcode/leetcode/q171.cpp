//
//  q171.cpp
//  leetcode
//
//  Created by 蒋秉洁 on 15/1/28.
//  Copyright (c) 2015年 蒋秉洁. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
//#include <algorithm>
#include <math.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int n4a=1;
        int base=26;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
//        cout<<s<<endl;
        
       
            int num=0;
            for(int i=0;i<s.length();i++){
                char c=s.substr(i,1)[0];
                int cur=n4a+c-'A';
                num+=pow(base,s.length()-i-1)*cur;
            }
            return num;
        
    }
    
    
};
