//
//  main.cpp
//  CppEx24Oct
//
//  Created by 茜茜小公举 on 10/24/17.
//  Copyright © 2017 Org_name. All rights reserved.
//

#include <iostream>
using namespace std;
/*int main()
{
    int i = 1;
    int j = 2;
    swap(i,j);
    cout<< "before"<< i << j <<endl;
    
    return 0;
}*/

void swap(int& x, int& y);
void swap(int& x, int& y)
{
    int q=0;
    q = x;
    x= y;
    y = q;
    return;
}
