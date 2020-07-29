#include "build/temp/_test_SearchAndCount(noMock).c"
#include "src/SearchAndCount.h"
#include "src/ReadLine.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_SearchAndCountWordInLines_given_a_file_with_5_lines_and_FindTheWord_yummy_expect_count_to_be_4(void)

{

    int count;

    char *filename = "./test/data/my_file.txt";

    char *word = "yummy";

    count = searchAndCountWordInLines(word, filename);

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((count)), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}



void test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_good_expect_count_to_be_6(void)

{

    int count;

    char *filename = "./test/data/my_file.txt";

    char *word = "good";

    count = searchAndCountWordInLines(word, filename);

    UnityAssertEqualNumber((UNITY_INT)((6)), (UNITY_INT)((count)), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

}



void test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_me_expect_count_to_be_0(void)

{

    int count;

    char *filename = "./test/data/my_file.txt";

    char *word = "me";

    count = searchAndCountWordInLines(word, filename);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((count)), (

   ((void *)0)

   ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

}
