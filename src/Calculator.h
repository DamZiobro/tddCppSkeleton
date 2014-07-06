/*
 * =====================================================================================
 *       Filename:  Calculator.h
 *    Description:  
 *        Created:  2014-06-26 22:52
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */


#ifndef Calculator_H
#define Calculator_H

using namespace std;

//=================================================================================
// Class Calculator
//=================================================================================

class Calculator {
    //-----------------------------------------------------------
    public:
        Calculator ();
        virtual ~Calculator ();

        int add (int first, int second);
        int subtract (int first, int second);
        int multiply (int first, int second);
    
    //-----------------------------------------------------------
    protected:
        

    //-----------------------------------------------------------
    private:
        
    
    //-----------------------------------------------------------
    //Getters and setters 
};

//==================================================================================

#endif /* Calculator_H */


