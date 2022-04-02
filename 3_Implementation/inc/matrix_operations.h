#ifndef __MATRIX_OPERATIONS_H__
#define __MATRIX_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>

typedef enum{SUCCESS=1,FAILURE=0}error_t;

typedef struct{

float **matrix_1;
float **matrix_2;
float result;

}mat;

float ** alloc_input_matrix(float **matrix, int n);

void dynamic_alloc_mat(float **matrix,int n);

void output_matrix(float **matrix,int n);

void free_matrix_structure(mat *m);

error_t add_matrices(float **matrix1,float **matrix2,int n);

error_t subtract_matrices(float **matrix1,float **matrix2, int n);

error_t product_matrices(float **matrix1,float **matrix2, int n);

float determinant(float **matrix,int k);

error_t transpose(float **matrix,int n);

error_t inverse(float **num, int f);

float power(int exp);

#endif  /* #define __MATRIX_OPERATIONS_H__ */
