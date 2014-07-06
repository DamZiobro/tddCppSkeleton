/*
 * =====================================================================================
 *       Filename:  CalculatorTest.cpp
 *    Description:  
 *        Created:  2014-06-26 23:12
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <Calculator.h>
#include <CppUTest/TestHarness.h>

TEST_GROUP (CalculatorTest) {

    Calculator* calculator;

    void setup() {
        calculator = new Calculator();
    }

    void teardown() {
        delete calculator;
        calculator = NULL;
    }

};

TEST (CalculatorTest, AddTest) {
    LONGS_EQUAL(10, calculator->add(3,7));
};


TEST (CalculatorTest, MultiplyTest) {
    LONGS_EQUAL(21, calculator->multiply(3,7));
};

TEST (CalculatorTest, SubtractTest) {
    LONGS_EQUAL(1, calculator->subtract(8,7));
};


