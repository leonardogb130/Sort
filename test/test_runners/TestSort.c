
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

/*
void selection_sort(int *array, int size){
    int i, j, min, aux;
      for (i = 0; i < (size-1); i++){
        min = i;
        for (j = (i+1); j < size; j++) {
            numberOfComparisons++;
            if(array[j] < array[min]){
                min = j;
              }
        }
        if (i != min){
            aux = array[i];
              array[i] = array[min];
              array[min] = aux;
              numberOfSwaps++;
        }
    }
}*/

void test_insertion(void)
{
  /* All of these should pass */
   int vet=(4,3,7,9,1); // entrada
   int expected;
   
   expected = sort_array(vet, 5, INSERTION); // vai executar o vetor de entrada vet, de tamanho 5 e executar o metodo insertion
   

  TEST_ASSERT_EQUAL(1, expected);
  
}

