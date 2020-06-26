
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

  //TEST_ASSERT_EQUAL(1, selection_sort(2,7));
}

