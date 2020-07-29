/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_SearchAndCountWordInLines_given_a_file_with_5_lines_and_FindTheWord_yummy_expect_count_to_be_4(void);
extern void test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_good_expect_count_to_be_6(void);
extern void test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_me_expect_count_to_be_0(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, int line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_SearchAndCount(noMock).c");
  run_test(test_SearchAndCountWordInLines_given_a_file_with_5_lines_and_FindTheWord_yummy_expect_count_to_be_4, "test_SearchAndCountWordInLines_given_a_file_with_5_lines_and_FindTheWord_yummy_expect_count_to_be_4", 14);
  run_test(test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_good_expect_count_to_be_6, "test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_good_expect_count_to_be_6", 23);
  run_test(test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_me_expect_count_to_be_0, "test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_me_expect_count_to_be_0", 32);

  return UnityEnd();
}