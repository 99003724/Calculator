#include "unity.h"
#include <conversion.h>
#include <operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_modulous(void);
void test_square1(void);
void test_cube1(void);
void test_square_root(void);
void test_cube_root(void);
void test_Degree(void);//done by shiva for conversion
void test_Radian(void);//done by shiva for conversion

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_division);
  RUN_TEST(test_square1);
  RUN_TEST(test_cube1);
  RUN_TEST(test_square_root);
  RUN_TEST(test_cube_root);
  RUN_TEST(test_Degree);//done by shiva for conversion
  RUN_TEST(test_Radian);//done by shiva for conversion

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_addition(void) {
  TEST_ASSERT_EQUAL(30, addition(10, 20));
  TEST_ASSERT_EQUAL(-10, addition(10, -20));
}

void test_subtraction (void) {
  TEST_ASSERT_EQUAL(-3, subtraction(0, 3));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, subtraction(1000, 900));
}

void test_multiplication(void) {
  TEST_ASSERT_EQUAL(0, multiplication(1, 0));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(2, multiplication(2, 5));
}

void test_division(void) {
  TEST_ASSERT_EQUAL(0, division(1, 0));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(3, division(2, 2));
}
 /* void test_modulous(void) {
    TEST_ASSERT_EQUAL(1, modulous(1, 1));
  }*/
  void test_square1(void) {

    TEST_ASSERT_EQUAL(256, square1(16));
    TEST_ASSERT_EQUAL(121,square1(-11));
    TEST_ASSERT_EQUAL(0,square1(0));
    TEST_ASSERT_EQUAL(841,square1(29));
    TEST_ASSERT_EQUAL(9216,square1(-96));
    }
    void test_cube1(void) {

    TEST_ASSERT_EQUAL(27, cube1(3));
    TEST_ASSERT_EQUAL(-729,cube1(-9));
    TEST_ASSERT_EQUAL(0,cube1(0));
    TEST_ASSERT_EQUAL(24389,cube1(29));
    TEST_ASSERT_EQUAL(-140608,cube1(-52));
    }
    void test_square_root(void) {

    TEST_ASSERT_EQUAL(9, square_root(81));
    TEST_ASSERT_EQUAL(0,square_root(0));
    TEST_ASSERT_EQUAL(4,square_root(16));
    TEST_ASSERT_EQUAL(96,square_root(9216));
    }
    void test_cube_root(void) {

    TEST_ASSERT_EQUAL(3, cube_root(27));
    TEST_ASSERT_EQUAL(0,cube_root(0));
    TEST_ASSERT_EQUAL(4,cube_root(64));
    TEST_ASSERT_EQUAL(99,cube_root(970299));
    }
    
    /*void Area(void) {

    TEST_ASSERT_EQUAL(44, perimeter(7));
    TEST_ASSERT_EQUAL(154,circle(7));
    TEST_ASSERT_EQUAL(100,rectangle(10,10));
    TEST_ASSERT_EQUAL(56.99,triangle(10,12,13));
    }*/
    // void conersion(void)
    // {
    // // TEST_ASSERT_EQUAL(44, Polar to Cartesian coordinate(7));
    // TEST_ASSERT_EQUAL(154,circle(7));
    // TEST_ASSERT_EQUAL(100,rectangle(10,10));
    // TEST_ASSERT_EQUAL(56.99,triangle(10,12,13));
    
    
void test_Degree(void)
{
   TEST_ASSERT_EQUAL(90, Degree(1.5708));
   TEST_ASSERT_EQUAL(180, Degree(3.141593));
 }
void test_Radian(void) 
{                     //written by shiva for testing
  TEST_ASSERT_EQUAL(1.5708, Radian(90));
  TEST_ASSERT_EQUAL(3.141593, Radian(180));
}
