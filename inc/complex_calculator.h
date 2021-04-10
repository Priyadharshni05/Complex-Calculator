/**
 * @file complex_calculator.h
 * @author Priyadharshni N 
 * @brief Functions to perform Sum, Difference, Division and Multiplication on complex Varibales of \ref complex_t
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _COMPLEX_CALCULATOR_H
#define _COMPLEX_CALCULATOR_H

#include <stdlib.h>

/**
 * @brief Error values for calculator operations
 * 
 */
typedef enum error_t {
    ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0             /**< Compute operation is successful */
}error_t;

/**
 * @brief Structure for Complex number
 * 
 */
typedef struct complex_t {
    float real;         /**< real part of the complex number */
    float imaginary;    /**< real part of the complex number */
} complex_t;


/**
* @brief computes sum of the two complex numbers
 * 
 * @param[in] cnum1 Pointer to complex number1
 * @param[in] cnum2 Pointer to complex number2 
 * @param[out] csum Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t complexAdd(complex_t* cnum1, complex_t* cnum2, complex_t* csum);


/**
* @brief computes difference of the two complex numbers
 * 
 * @param[in] cnum1 Pointer to complex number1
 * @param[in] cnum2 Pointer to complex number2 
 * @param[out] cdiff Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t complexSub(complex_t* cnum1, complex_t* cnum2, complex_t* cdiff);

/**
* @brief computes Multiplication of the two complex numbers
 * 
 * @param[in] cnum1 Pointer to complex number1
 * @param[in] cnum2 Pointer to complex number2 
 * @param[out] cmul Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t complexMul(complex_t* cnum1, complex_t* cnum2, complex_t* cmul);

/**
* @brief computes division of the two complex numbers
 * 
 * @param[in] cnum1 Pointer to complex number1
 * @param[in] cnum2 Pointer to complex number2 
 * @param[out] cdiv Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t complexDiv(complex_t* cnum1, complex_t* cnum2, complex_t* cdiv);

#endif /* _COMPLEX_CALCULATOR_H */