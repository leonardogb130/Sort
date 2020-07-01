#sort


## Informações
 
  1. vetor com elementos aleatórios
  2. vetor ja ordenado
  3. vetor ordenado de forma decrescente
  4. vetor 90% ordenado
  
  
  
	
> Algoritmos implementados
  >
  1. Selection sort
  2. Insertion sort
  3. Shell sort
  4. Quick sort
  5. Heap sort
  6. Merge sort

## Requirements

-GCC
-Unity Framework
- Conta GitHub/Travis-CI

https://github.com/leonardogb130/Sort/issues/1#issue-649289221

## Compilando

Executar o arquivo MAKEFILE dentro do projeto

## Instruções
 
Para executar o programa, ir na pasta raiz do projeto e executar o comando:

```c
./app -a $algorithm -n $number_of_elements -s $state [-P]
```
### Paramettros

 1. -a = algoritmo de sort desejado
2. -n  = número de elementos
3. -s = ordenamento desejado
4. -P = para printar os resultados

| Param         | Value         | 
| ------------- |:-------------:| 
| -a            | selection     |
|               |  insertion    |
|               |   shell       | 
|               | quick         | 
|               | heap          | 
|               | merge         |   
| -n            | int > 0       |
| -s            | random        |
|               | ascending     |
|               | descending    | 
|               | almost        | 
| -P            |

### Testes

 test_selection_array_random1: [{4,3,7,9,1},{1,3,4,7,9}]
 
 test_insertion_array_random: [{4,3,7,9,1,5,5,0},{0,1,3,4,5,5,7,9}]
 
 test_quick_array_random: [{4,3,7,9,1,5,5,0,7,2},{0,1,2,3,4,5,5,7,7,9}]
 
 test_selection_array_ascending: [{1,2,3},{1,2,3}]
 
 test_insertion_array_ascending: [{1,2,3,4,5,6},{1,2,3,4,5,6}]
 
 test_shell_array_ascending: [{1,2,3,4,5,6,7},{1,2,3,4,5,6,7}]
 
 test_insertion_array_descending: [{5,8,4,2},{8,5,4,2}]
 
 test_insertion_array_almost: [{5,8,2,4,1},{1,2,4,5,8}]
