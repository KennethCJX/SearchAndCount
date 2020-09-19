#include "build/temp/_test_ReadLine.c"
#include "src/ReadLine.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_ReadLine_given_a_file_expect_to_read_correctly()

{

    char **lines;

    char *filename = "C:/Projects/textFile/test_file.txt";

    lines = readLines(filename);

    UnityAssertEqualString((const char*)(("Hello Welcome to my house\n")), (const char*)((lines[7])), (

   ((void *)0)

   ), (UNITY_UINT)(18));

}
