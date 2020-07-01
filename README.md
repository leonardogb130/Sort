#sort



## Information
> Our program generates and fills arrays in four different ways: 
  > 
  1. arrays with totally random elements
  2. arrays already ordered 
  3. arrays ordered in descending order 
  4. arrays 90% ordered.
	
> Sorting methods implemented
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


