//
//  q88.cpp
//  leetcode
//
//  Created by 蒋秉洁 on 15/1/27.
//  Copyright (c) 2015年 蒋秉洁. All rights reserved.
//
#include <stdio.h>
#include <iostream>


class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int ia=m-1;
        int ib=n-1;
        int im=m+n-1;
        
        while(ia>=0&&ib>=0)
        {
            A[im--]=A[ia]>=B[ib]?A[ia--]:B[ib--];
        }
        while(ib>=0)
            A[im--]=B[ib--];
        
    }
    
    
};