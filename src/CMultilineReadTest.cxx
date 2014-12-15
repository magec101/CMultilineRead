/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_CMultilineReadTest_init = false;
#include "/var/www/html/codeit/workspace/CMultilineRead/src/CMultilineReadTest.h"

static CMultilineReadTest suite_CMultilineReadTest;

static CxxTest::List Tests_CMultilineReadTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CMultilineReadTest( "/var/www/html/codeit/workspace/CMultilineRead/src/CMultilineReadTest.h", 5, "CMultilineReadTest", suite_CMultilineReadTest, Tests_CMultilineReadTest );

static class TestDescription_suite_CMultilineReadTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CMultilineReadTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_CMultilineReadTest, suiteDescription_CMultilineReadTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_CMultilineReadTest.test_Unit_Test_1(); }
} testDescription_suite_CMultilineReadTest_test_Unit_Test_1;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
