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


