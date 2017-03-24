//
//  main.cpp
//  CompareNumbers
//
//  Created by Carrie Ward on 3/23/17.
//  Copyright © 2017 Carrie Ward. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // declare interger variables
    int num1, num2;
    
    // request user input
    cout << "Enter any two interger value seperated by a space: " << endl;
    cin >> num1 >> num2;
    
    cout << "\nThe two integers are: " << num1 << " and " << num2 << endl;
    
    // create alagorithm to calcualte the greater number
    if( num1 > num2 )
        cout << num1 << " > " << num2 << endl;
    else if (num2 > num1)
        cout << num2 << " > " << num1 << endl;
    else
        cout << num1 << " = " << num2 << endl;
    
    return 0;
}
