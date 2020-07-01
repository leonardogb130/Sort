
#include "sort.h"
#include "array.h"
#include "get_opt.h"
#include "unity.h"


void setUp(void)
{
}

void tearDown(void)
{
}


//ORDEM  RANDOM EFICIENCIA METODOS: metrica tempo para 100 elementos
/* 1 - insertion sort 0.000008 
 * 2 - shell sort 0.000008
 * 3 -  quick sort 0.000008
 * 4 - heap sort 0.000010
 * 5 - merge sort  0.000012
 * 6 - selection 0.00015
 * 
 * 
*/

void test_selection_array_random(void)
{
   int resultado[5] = {0,0,0,0,0};	// inicializacao
   int expected[5] = {1,3,4,7,9};
   int actual[5] = {4,3,7,9,1}; // entrada
   //int array(0,0,0,0,0); // array de tamanho 5 inicializacao
   
   //array = generate_array(100, RANDOM_ORDER);// gera uma array de tamanho 100 com ordenamento aleatorio
   
   resultado = sort_array(actual, 5, SELECTION); // metodo sort_array recebe uma array de tamanho 5 com ordem dos elementos aleatoria e as ordena utilizando selection
   
   //printf("Tempo decorrido: %f s\n", get_elapsed_time());

  TEST_ASSERT_EQUAL_INT_ARRAY(expected, resultado, 5); 
  
}


void test_insertion_array_random(void)
{
   int resultado[8] = {0,0,0,0,0,0,0,0};	// inicializacao
   int expected[8] = {0,1,3,4,5,5,7,9};
   int actual[8] = {4,3,7,9,1,5,5,0}; // entrada
   
   resultado = sort_array(actual, 8, INSERTION); // metodo sort_array recebe uma array de tamanho 8 com ordem dos elementos aleatoria e as ordena
   

  TEST_ASSERT_EQUAL_INT_ARRAY(expected, resultado, 8); 
  
}

void test_quick_array_random(void)
{
   int resultado[10] = {0,0,0,0,0,0,0,0,0,0};	// inicializacao
   int expected[10] = {0,1,2,3,4,5,5,7,7,9};
   int actual[10] = {4,3,7,9,1,5,5,0,7,2}; // entrada
   
   resultado = sort_array(actual, 10, INSERTION); // metodo sort_array recebe uma array de tamanho 10 com ordem dos elementos aleatoria e as ordena
   

  TEST_ASSERT_EQUAL_INT_ARRAY(expected, resultado, 10); 
  
}



void test_selection_array_ascending(void)
{

   int resultado[3] = {0,0,0};	// inicializacao
   int array[3] = {0,0,0};
   
   
   array = generate_array(3, ASCENDING_ORDER);// gera uma array de tamanho 3 com ordenamento ja pronto
   
   resultado = sort_array(array, 3, SELECTION); // metodo sort_array recebe uma array de tamanho 3 com ordem dos elementos ja ordenada
   

   TEST_ASSERT_EQUAL_INT_ARRAY(array, resultado, 3); 
  
}



void test_insertion_array_ascending(void)
{

   int resultado[6] = {0,0,0,0,0,0};	// inicializacao
   int array[6] = {0,0,0,0,0,0};
   
   
   array = generate_array(6, ASCENDING_ORDER);// gera uma array de tamanho 6 com ordenamento ja pronto
   
   resultado = sort_array(array, 6, SELECTION); // metodo sort_array recebe uma array de tamanho 6 com ordem dos elementos ja ordenada
   

   TEST_ASSERT_EQUAL_INT_ARRAY(array, resultado, 6); 
  
}

void test_shell_array_ascending(void)
{

   int resultado[7] = {0,0,0,0,0,0,0};	// inicializacao
   int array[7] = {0,0,0,0,0,0,0};
   
   
   array = generate_array(7, ASCENDING_ORDER);// gera uma array de tamanho 7 com ordenamento ja pronto
   
   resultado = sort_array(array, 7, SHELL); // metodo sort_array recebe uma array de tamanho 7 com ordem dos elementos ja ordenada
   

   TEST_ASSERT_EQUAL_INT_ARRAY(array, resultado, 7); 
  
}

void test_insertion_array_descending(void)
{

   int resultado[4] = {0,0,0,0};	// inicializacao
   int array[4] = {5,8,4,2};
   int expected[4] ={8,5,4,2};
   
   
   resultado = sort_array(array, 4, DESCENDING_ORDER); // metodo sort_array recebe uma array de tamanho 4 
   

   TEST_ASSERT_EQUAL_INT_ARRAY(expected, resultado, 4); 
  
}

void test_insertion_array_almost(void)
{

   int resultado[5] = {0,0,0,0,0};	// inicializacao
   int array[5] = {5,8,2,4,1};
   int expected[5] ={1,2,4,5,8};
   
   
   resultado = sort_array(array, 5, ALMOST_ORDERED); // metodo sort_array recebe uma array de tamanho 5 
   
   TEST_ASSERT_EQUAL_INT_ARRAY(expected, resultado, 5); 
  
}





