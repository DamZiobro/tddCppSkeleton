/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2014-06-26 22:51 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <Calculator.h>

using namespace std;

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    Calculator calculator;

    cout << "calculator.add(3,5) =" << calculator.add(3,5) << endl;    
    cout << "calculator.multiply(3,5) =" << calculator.multiply(3,5) << endl;    
    cout << "calculator.subtract(10,5) =" << calculator.subtract(10,5) << endl;    
    cout << "calculator.add(10,5) =" << calculator.add(10,5) << endl;    

    return 0;
}


