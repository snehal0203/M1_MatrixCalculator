#include "unity.h"
#include "matrix_operations.h"

#define PROJECT_NAME    "Matrix Calculator"

void test_add_mat(void);

void test_sub_mat(void);

void test_mul_mat(void);


void test_det_mat(void);


void test_inv_mat(void);


void test_pow(void);

void test_transp_mat(void);

void setUp(){}

void tearDown(){}

int main()
{

  UNITY_BEGIN();

  RUN_TEST(test_add_mat);
  RUN_TEST(test_sub_mat);
  RUN_TEST(test_mul_mat);
  RUN_TEST(test_pow);
  RUN_TEST(test_det_mat);
  RUN_TEST(test_inv_mat);
  RUN_TEST(test_transp_mat);

  return UNITY_END();
}

void test_add_mat(void) {

  float **test_mat1, **test_mat2;
  test_mat1 = (float **)calloc(2,sizeof(float));
  test_mat2 = (float **)calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
        test_mat1[i] = (float *)calloc(2,sizeof(float));
        test_mat2[i] = (float *)calloc(2,sizeof(float));
    }

  test_mat1[0][0] = 1;
  test_mat1[0][1] = 2;
  test_mat1[1][0] = 3;
  test_mat1[1][1] = 4;

  test_mat2[0][0] = 1;
  test_mat2[0][1] = 2;
  test_mat2[1][0] = 3;
  test_mat2[1][1] = 4;

  TEST_ASSERT_EQUAL(SUCCESS,add_matrices(test_mat1,test_mat2,2));


  free(test_mat1);
  free(test_mat2);

}

void test_sub_mat(void) {

  float **test_mat1, **test_mat2;
  test_mat1 = (float **)calloc(2,sizeof(float));
  test_mat2 = (float **)calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
        test_mat1[i] = (float *)calloc(2,sizeof(float));
        test_mat2[i] = (float *)calloc(2,sizeof(float));
    }

  test_mat1[0][0] = 2;
  test_mat1[0][1] = 3;
  test_mat1[1][0] = 4;
  test_mat1[1][1] = 6;

  test_mat2[0][0] = 1;
  test_mat2[0][1] = 2;
  test_mat2[1][0] = 3;
  test_mat2[1][1] = 4;

  TEST_ASSERT_EQUAL(SUCCESS,subtract_matrices(test_mat1,test_mat2,2));


  free(test_mat1);
  free(test_mat2);

}

void test_mul_mat(void){
    float **test_mat1, **test_mat2;
  test_mat1 = (float **)calloc(2,sizeof(float));
  test_mat2 = (float **)calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
        test_mat1[i] = (float *)calloc(2,sizeof(float));
        test_mat2[i] = (float *)calloc(2,sizeof(float));
    }

  test_mat1[0][0] = 1;
  test_mat1[0][1] = 2;
  test_mat1[1][0] = 3;
  test_mat1[1][1] = 4;

  test_mat2[0][0] = 1;
  test_mat2[0][1] = 2;
  test_mat2[1][0] = 3;
  test_mat2[1][1] = 4;

  TEST_ASSERT_EQUAL(SUCCESS,product_matrices(test_mat1,test_mat2,2));


  free(test_mat1);
  free(test_mat2);

}


void test_det_mat(void){
      
    float **test_mat1;
    test_mat1 = (float **)calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
        test_mat1[i] = (float *)calloc(2,sizeof(float));
    }

  test_mat1[0][0] = 5;
  test_mat1[0][1] = 3;
  test_mat1[1][0] = 5;
  test_mat1[1][1] = 4;


  TEST_ASSERT_EQUAL(5.0000,determinant(test_mat1,2));


  free(test_mat1);


}

void test_inv_mat(void){
  float **test_mat1;
    test_mat1 = (float **)calloc(3,sizeof(float));
    for(int i=0;i<3;i++){
        test_mat1[i] = (float *)calloc(3,sizeof(float));
    }

  test_mat1[0][0] = 3;
  test_mat1[0][1] = 5;
  test_mat1[0][2] = 2;
  test_mat1[1][0] = 1;
  test_mat1[1][1] = 5;
  test_mat1[1][2] = 8;
  test_mat1[2][0] = 3;
  test_mat1[2][1] = 9;
  test_mat1[2][2] = 2;


  TEST_ASSERT_EQUAL(SUCCESS,inverse(test_mat1,3));

  free(test_mat1);

}

void test_pow(void){


  TEST_ASSERT_EQUAL(1,power(2));
  TEST_ASSERT_EQUAL(-1,power(3));

}

void test_transp_mat(void){
    float **test_mat1;
    test_mat1 = (float **)calloc(3,sizeof(float));
    for(int i=0;i<3;i++){
        test_mat1[i] = (float *)calloc(3,sizeof(float));
    }

  test_mat1[0][0] = 3;
  test_mat1[0][1] = 5;
  test_mat1[0][2] = 2;
  test_mat1[1][0] = 1;
  test_mat1[1][1] = 5;
  test_mat1[1][2] = 8;
  test_mat1[2][0] = 3;
  test_mat1[2][1] = 9;
  test_mat1[2][2] = 2;

TEST_ASSERT_EQUAL(SUCCESS,transpose(test_mat1,3));

free(test_mat1);

}
