# Requirements
## Introduction
  * We use mathematical procedures on a daily basis. Every day, we will be surrounded by many forms of computations. Matrices are mathematical structures in which integers are organised in columns and rows. In actual life, matrices are used in a variety of applications. The software industry's main use is the creation of algorithms such as path finding algorithms, image processing algorithms, and so on.
  * Some basic matrix operations are covered in this project, and the user may choose which operation to conduct on the matrix. The matrices and their sizes are then input. It's worth noting that the project only considers square matrices.

## Research

### Objective
Matrix operations on square matrices are the subject of this study. Addition, subtraction, and multiplication are the operations that are done on two square matrices. Transpose, determinant, and inverse are the operations that may be applied to a single square matrix.

### Benefits

This tool might be useful for a user who is working on a laptop or a desktop computer and has to do matrix-based computations. A person can determine the output values of a matrix of up to 3 X 3 dimensions, or 3 rows and 3 columns. When they try to solve the matrix for dimensions greater than three, the time spent is considerable, and verifying whether the result is valid or not takes much longer. As a result, you may use this tool to double-check your matrix operations.


## Cost and Features

 * The cost of performing a matrix computations project is little to none. However, research and development will be done to extend matrix applications to other state-of-the-art sectors such as machine learning, image processing, encryption, path finding techniques, and so on. This application is also useful for doing matrices-related calculations.
 
 ### Some of The features of the project

 * For allocating memory for the matrices, i.e. 2 dimensional arrays, this software uses dynamic memory allocation. For storing the input matrices, a structure is implemented. By selecting a number on the keyboard, the user can pick the operation to be done. During the program's execution, the meaning of each number, i.e. the action it performs, will be displayed on the screen.


## Defining Our System
* The system is considered as a blackbox that only accepts a single number as input. The number is then mapped in order to conduct the proper function. The user will next be asked to specify the matrix size. The user is next asked to enter the matrix elements. The data is saved in two-dimensional arrays that are dynamically created and provided to the appropriate routines. The result is then shown on the screen. This procedure will continue until the user pushes a key to exit the software.

## SWOT ANALYSIS

![SWOT-Sample](https://github.com/snehal0203/M1_MatrixCalculator/blob/main/1_Requirements/SWOT.jpg)

# 4 W's and 1 H

## Who:
 * Students who need to answer issues with matrices as part of their academic work.
 * Workers in the datascience field work on machine learning and deep learning applications that heavily rely on matrices.
 * Software engineers
 * Researchers and mathematicians

## What:
 * Calculate the determinant, transpose, and inverse of a single matrix, as well as the sum, differemce, and product of two matrices.


## When:
 * Students who are having trouble solving a matrix-related problem might use this application to align their results.
 * It may be used by researchers to achieve a rapid computation result.
 * When computing for matrices of large order, this feature comes in handy.

## Where:
 * Students, employees and researchers all over the world.

## How:
 * This program may run on either a Linux or Windows PC.

## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| H01 | The user will be able to define the matrix's size. |Technical| IMPLEMENTED |
| H02 | The user should be able to combine the matrices. | Techincal | IMPLEMENTED | 
| H03 | The user must be able to subtract matrices. | Techincal |  IMPLEMENTED  |
| H04 | The user must be able to multiply matrices. | Techincal |  IMPLEMENTED  |
| H05 | A user must be able to find a matrix's determinant, transpose, and inverse. | Techincal |  IMPLEMENTED  |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| L01 | The matrix's size must be specified by the user. The dimensions of the square matrix are defined as the size. | H01 |  IMPLEMENTED  |
| L02 | It is possible to combine two matrices. Both matrices must have the same size. For both matrices, the size entered at the start is the same. | H02 |  IMPLEMENTED |
| L03 | Subtraction of two matrices is done in the same way that addition is done.| H03 | IMPLEMENTED |
| L04 | Two square matrices of a specific size are used to multiply two matrices. | H04 |  IMPLEMENTED  |
| L05 | The determinant of a single matrix of a specified size is implemented. | H05 |  IMPLEMENTED  |
| L06 | The transpose of a single matrix operation is implemented | H05 |  IMPLEMENTED  |
| L07 | The determinant function and the transpose functions are both used to discover the inverse of a matrix. Checking if the determinant of a matrix is equal to 0 is a criterion that a matrix is invertible. | H05 |  IMPLEMENTED  |
