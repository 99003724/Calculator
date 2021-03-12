#include "unity.h"
#include <conversion.h>
#include <inbuild_functions.h>
#include <operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
<<<<<<< HEAD
void test_addition(void);
//void test_add_testcase2(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_modulous(void);
void test_square(void);
void test_cube(void);
void test_square_root(void);
void test_cube_root(void);
void test_factorial(void);
=======
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
/*void test_modulous(void);
void test_square(void);
void test_cube(void);
void test_squareroot(void);
void test_cuberoot(void);
void test_factorial(void);*/
>>>>>>> 6dbdf59bec908b731366c8fa5a545480a128a335
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
<<<<<<< HEAD
  RUN_TEST(test_addition);
  //RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtraction);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_division);
  //RUN_TEST(test_square);
  //RUN_TEST(test_cube);
  //RUN_TEST(test_square_root);
  //RUN_TEST(test_cube_root);
  //RUN_TEST(test_factorial);
=======
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  /*RUN_TEST(test_square);
  RUN_TEST(test_cube);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_cuberoot);
  RUN_TEST(test_factorial);*/
>>>>>>> 6dbdf59bec908b731366c8fa5a545480a128a335
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
/*void test_add_testcase2(void) {
 
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1500, add(750, 7500));
//}
void test_subtraction (void) {
  TEST_ASSERT_EQUAL(-3, subtraction(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, subtraction(1000, 900));
}

void test_multiplication(void) {
  TEST_ASSERT_EQUAL(0, multiplication(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, multiplication(2, 5));
}

void test_division(void) {
  TEST_ASSERT_EQUAL(0, division(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, division(2, 2));
}
 /* void test_modulous(void) {
    TEST_ASSERT_EQUAL(1, modulous(1, 1));
  }
  void test_square(void) {

    TEST_ASSERT_EQUAL(4, square(16));
    TEST_ASSERT_EQUAL(121,square(-11));
    TEST_ASSERT_EQUAL(0,square(0));
    TEST_ASSERT_EQUAL(841,square(29));
    TEST_ASSERT_EQUAL(9216,square(-96));
    }
    void test_cube(void) {

    TEST_ASSERT_EQUAL(27, cube(3));
    TEST_ASSERT_EQUAL(-729,cube(-9));
    TEST_ASSERT_EQUAL(0,cube(0));
    TEST_ASSERT_EQUAL(24389,cube(29));
    TEST_ASSERT_EQUAL(-14608,cube(-52));
    }
    void test_square_root(void) {

    TEST_ASSERT_EQUAL(81, square_root(9));
    TEST_ASSERT_EQUAL(0,square_root(0));
    TEST_ASSERT_EQUAL(0,square_root(-13));
    TEST_ASSERT_EQUAL(96,square_root(9216));
    }
    void test_cube_root(void) {

    TEST_ASSERT_EQUAL(3, cube_root(27));
    TEST_ASSERT_EQUAL(0,cube_root(0));
    TEST_ASSERT_EQUAL(0,cube_root(-15));
    TEST_ASSERT_EQUAL(99,cube_root(970299));
    }
    
    void Area(void) {

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
    
<<<<<<< HEAD
    
void test_Degree(void)
{
=======
    }*/
void test_Degree(void) {                 //written by shiva for testing
>>>>>>> 6dbdf59bec908b731366c8fa5a545480a128a335
  TEST_ASSERT_EQUAL(1.570796, Degree(90));
  TEST_ASSERT_EQUAL(3.141593, Degree(180));
}
void test_Radian(void) 
{                     //written by shiva for testing
  TEST_ASSERT_EQUAL(90, Radian(1.570796));
  TEST_ASSERT_EQUAL(180, Radian(3.141593));
}
