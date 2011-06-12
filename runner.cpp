/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#define _CXXTEST_ABORT_TEST_ON_FAIL
#include "tests/test_common.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "tests/test_revwalk.h"

static RevwalkTest suite_RevwalkTest;

static CxxTest::List Tests_RevwalkTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RevwalkTest( "tests/test_revwalk.h", 45, "RevwalkTest", suite_RevwalkTest, Tests_RevwalkTest );

static class TestDescription_RevwalkTest_test_walk0 : public CxxTest::RealTestDescription {
public:
 TestDescription_RevwalkTest_test_walk0() : CxxTest::RealTestDescription( Tests_RevwalkTest, suiteDescription_RevwalkTest, 49, "test_walk0" ) {}
 void runTest() { suite_RevwalkTest.test_walk0(); }
} testDescription_RevwalkTest_test_walk0;

#include <cxxtest/Root.cpp>
