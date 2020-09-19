#include "unity.h"

#include "SearchAndCount.h"
#include "mock_ReadLine.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_SearchAndCount_given_2_same_words_of_how_expect_count_to_be_2(void)
{
 int count = searchAndCountWordInLine("How","How are you today.How about you");
 TEST_ASSERT_EQUAL(2,count); 
}

void test_SearchAndCount_given_3_same_words_of_if_expect_count_to_be_3(void)
{
 int count = searchAndCountWordInLine("if","if im a boy. Only if i have deep voice,if im not a girl");
 TEST_ASSERT_EQUAL(3,count); 
}

void test_SearchAndCount_given_Hi_but_no_same_words_are_to_be_compare_expect_count_to_be_0(void)
{
 int count = searchAndCountWordInLine("Hi","How are you today.How about you");
 TEST_ASSERT_EQUAL(0,count); 
}

void test_SearchAndCount_given_scientist_word_and_expect_count_to_be_0(void)
{
 int count = searchAndCountWordInLine("scientist","Modern scien are helping people, scien develop fast ");
 TEST_ASSERT_EQUAL(0,count); 
}


void searchAndCountWordInLines_given_a_file_with_5_line_and_FindTheWord_yummy_expect_a_count_to_be_4(void){
 int count;
 char **Lines = malloc(sizeof(char *) * 1024);
 char *filename =  "./test/data/my_file.txt";
 char *word = "yummy";
 char *lines[] = {
   "yummy oh so yummy, it is so yummy!",
   "This dish is super yummy!";
   "The duck look so yum"
   "The fish is so yumm"
   "The dish look delicious!"
   NULL
 };
 for(int i = 0; lines[i] != NULL; i++)
    Lines[i] = lines[i];
 //Mock
 readLines_ExpectAndReturn(filename,lines);
 //run the code under test
 count = searchAndCountWordInLines(word,filename);
 //Test
 TEST_ASSERT_EQUAL(4,count);
}

void searchAndCountWordInLines_given_a_file_with_6_line_and_FindTheWord_good_expect_a_count_to_be_6(void){
 int count;
 char **Lines = malloc(sizeof(char *) * 1024);
 char *filename =  "./test/data/my_file.txt";
 char *word = "yummy";
 char *lines[] = {
   "good oh so good, it is so good!",
   "This dish is super good!";
   "The duck look so goo"
   "He is very good"
   "The dish look good and delicious!"
   "She is not a go person"
   NULL
 };
 for(int i = 0; lines[i] != NULL; i++)
    Lines[i] = lines[i];
 //Mock
 readLines_ExpectAndReturn(filename,lines);
 //run the code under test
 count = searchAndCountWordInLines(word,filename);
 //Test
 TEST_ASSERT_EQUAL(6,count);
}

void searchAndCountWordInLines_given_a_file_with_6_line_and_FindTheWord_good_expect_a_count_to_be_0(){
 int count;
 char **Lines = malloc(sizeof(char *) * 1024);
 char *filename =  "./test/data/my_file.txt";
 char *word = "yummy";
 char *lines[] = {
   "yummy oh so yummy, it is so yummy!",
   "This dish is super yummy!";
   "The duck look so yum"
   "The fish is so yumm"
   "The dish look delicious!"
   "Hello,how are you ?"
   NULL
 };
 for(int i = 0; lines[i] != NULL; i++)
    Lines[i] = lines[i];
 //Mock
 readLines_ExpectAndReturn(filename,lines);
 //run the code under test
 count = searchAndCountWordInLines(word,filename);
 //Test
 TEST_ASSERT_EQUAL(0,count);
}


