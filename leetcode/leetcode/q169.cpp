//
//  q169.cpp
//  leetcode
//
//  Created by 蒋秉洁 on 15/1/28.
//  Copyright (c) 2015年 蒋秉洁. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <map>
#include <math.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &num) {
        int n=num.size();
        int majority=floor(n/2.0);
        
        map<int,int> count;
        vector<int>::iterator num_iter;
        map<int,int>::iterator map_iter;
        
        for(num_iter=num.begin();num_iter!=num.end();num_iter++){
            map_iter=count.find(*num_iter);
            if(map_iter==count.end())
                count.insert( pair <int, int>  ( *num_iter, 1 ));
            else
                map_iter->second++;
        }
        
        for(map_iter=count.begin();map_iter!=count.end();map_iter++){
            if(map_iter->second>majority)
                return map_iter->first;
        }
        
        return 0;
    }
};
