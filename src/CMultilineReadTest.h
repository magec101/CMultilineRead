#include <cxxtest/TestSuite.h>

extern const char* cMultilineReadMain(int argc, char** argv);

class CMultilineReadTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
		TS_SKIP("Unit tests are skipped, please author unit tests, if required");
	}
	
}; 