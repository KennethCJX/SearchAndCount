#include "unity.h"
#include "ReadLine.h"
#include "SearchAndCount.h"


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
    TEST_ASSERT_EQUAL(3, count);
}

void test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_good_expect_count_to_be_6(void)
{
    int count;
    char *filename = "./test/data/my_file.txt";
    char *word = "good";
    count = searchAndCountWordInLines(word, filename);
    TEST_ASSERT_EQUAL(6, count);
}

void test_SearchAndCountWordInLines_given_a_file_with_6_lines_and_FindTheWord_me_expect_count_to_be_0(void)
{
    int count;
    char *filename = "./test/data/my_file.txt";
    char *word = "me";
    count = searchAndCountWordInLines(word, filename);
    TEST_ASSERT_EQUAL(0, count);
}

