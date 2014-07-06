/*
 * =====================================================================================
 *       Filename:  allTests.cpp
 *    Description:  
 *        Created:  2014-06-26 23:06
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <CppUTest/CommandLineTestRunner.h>


/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, char **argv)
{
    /* These checks are here to make sure assertions outside test runs don't crash */
	CHECK(true);
	LONGS_EQUAL(1, 1);

	return CommandLineTestRunner::RunAllTests(argc, argv);
}


