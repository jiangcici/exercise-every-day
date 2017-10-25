//
//  swap.cpp
//  CppEx24Oct
//
//  Created by cici Jiang on 10/25/17.
//  Copyright © 2017 Org_name. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int i = 4;
    int j = 5;
    swap(i,j);
    cout<< "before"<< i << j <<endl;
    
    return 0;
}

/*void swap(int& x, int& y);
void swap(int& x, int& y)
{
    int q=0;
    q = x;
    x= y;
    y = q;
    return;
}
*/
