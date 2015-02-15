//
//  main.cpp
//  leetcode
//
//  Created by 蒋秉洁 on 15/1/28.
//  Copyright (c) 2015年 蒋秉洁. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string  convertToTitle(int n);
int main()
    {
//        int i=0,n,a[32];
//        char b[32];
//        printf("请输入一个十进制整数.\n");
//        scanf("%d",&n);
//        int i1=i;
//
//        if(n<26&&n>=1){
//            b[0]=n+'A'-1;
//            return 0;
//
//        }
//        else if (n==26){
//            b[0]='Z';
//            return 0;
//        }
//        
//        while (n>0)
//        {
//            a[i]=n%26;
//            if(a[i]!=0)
//                b[i]=a[i]+'A'-1;
//            else
//                b[i]='Z';
//            i=i+1;
//            n=n/26;
//        }
//        printf("十进制整数转换为二进制数是:\n");
//        for(i--;i>=0;i--)
//            printf("%d",a[i]);
//        
//        for(i1--;i1>=0;i1--)
//            printf("%c",b[i1]);
//        printf("\n");
        
        string s=convertToTitle(28);
        printf("%s", s.c_str());

        
    }

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

