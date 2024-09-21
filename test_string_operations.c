#include "test-framework/unity.h"
#include "string_operations.h"

#define STR_MAX_LENGTH 100

void setUp(void)
{
}

void tearDown(void)
{
}

static void test_empty_string_length_is_zero(void)
{
   // TEST_IGNORE();   // delete this line to run test
   TEST_ASSERT_EQUAL(0, demo_strlen(""));
}

static void test_hello_string_length_is_five(void)
{
   // TEST_IGNORE();
   TEST_ASSERT_EQUAL(5, demo_strlen("hello"));
}

static void test_copy_empty_string(void)
{
   // TEST_IGNORE();
   char *source = "";
   char destination[STR_MAX_LENGTH];

   demo_strcpy(destination, source);
   TEST_ASSERT_EQUAL_STRING(source, destination);
}

static void test_copy_hello_world_string(void)
{
   // TEST_IGNORE();
   char *source = "Hello World!";
   char destination[STR_MAX_LENGTH];

   demo_strcpy(destination, source);
   TEST_ASSERT_EQUAL_STRING(source, destination);
}

static void test_compare_empty_string(void)
{
   // TEST_IGNORE();
   char *string_a = "";
   char *string_b = "";
   TEST_ASSERT_EQUAL(0, demo_strcmp(string_a, string_b));
}

static void test_compare_uppercase_before_lowercase(void)
{
   // TEST_IGNORE();
   char *string_a = "Apple";
   char *string_b = "apple";
   TEST_ASSERT_LESS_THAN(0, demo_strcmp(string_a, string_b));
}

static void test_compare_equals(void)
{
   // TEST_IGNORE();
   char *string_a = "apple";
   char *string_b = "apple";
   TEST_ASSERT_EQUAL(0, demo_strcmp(string_a, string_b));
}

static void test_compare_longer_comes_first(void)
{
   // TEST_IGNORE();
   char *string_a = "applecart";
   char *string_b = "apple";
   TEST_ASSERT_GREATER_THAN(0, demo_strcmp(string_a, string_b));
}

int main(void)
{
   UnityBegin("test_string_operations.c");

   RUN_TEST(test_empty_string_length_is_zero);
   RUN_TEST(test_hello_string_length_is_five);
   RUN_TEST(test_copy_empty_string);
   RUN_TEST(test_copy_hello_world_string);
   RUN_TEST(test_compare_empty_string);
   RUN_TEST(test_compare_uppercase_before_lowercase);
   RUN_TEST(test_compare_equals);
   RUN_TEST(test_compare_longer_comes_first);

   return UnityEnd();
}
