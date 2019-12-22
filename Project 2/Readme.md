Problema:
---------

Suponha que vc queira subir uma escada com N degraus, que liga dois pavimentos. Inicialmente, vc
est´a no andar inferior, ao p´e da escada (ainda n˜ao subiu degrau algum). Ao chegar ao piso superior, vc
acabou de subir ao ´ultimo degrau. A escada da figura abaixo, tem N = 4.
Figure 1: Pe¸ca
Suponha que vc pode subir a escada de duas formas: subindo de degrau em degrau, ou ent˜ao,
de maneira apressada, de 2 em 2 degraus. Este comportamento pode ser representado pelo conjunto
X = {1, 2}, onde 1 representa subir degrau a degrau e 2, pulando-se um degrau.
Escreva um programa que calcule a quantidade de maneiras que se pode subir uma escada com N
degraus, dado um conjunto de restri¸c˜oes X = {r1, r2, . . . rM}. Nota: valores no conjunto X podem
ser maiores que N. Neste caso, deve-se desconsider´a-los pois n˜ao h´a degraus suficientes para realizar o
movimento.
Por exemplo, para N = 2, existem duas maneiras de se subir a escada para chegar ao andar superior:
a) subir degrau a degrau ou b) pular um degrau.
Suponha que N e M s˜ao valores grandes o suficiente para fazer com que uma vers˜ao for¸ca bruta do
problema seja invi´avel.
1
Desafio: depois de terminada esta vers˜ao. Pense no seguinte. E se atribu´ıssemos um peso (valor
positivo) para cada valor de X? Seria poss´ıvel tamb´em computar qual ´e a combina¸c˜ao de movimentos
que maximizam a chegada ao topo?

Como Usar:
----------

Para compilar simplesmente use 
```shell
    > make
``` 
, tendo o [Makefile](Makefile).
Para rodar voce pode usar:
```shell
    > make run case=n
```
, com um n entre 1 e 4, para rodar o programa com um dos 4 casos teste fornecidos na pasta [Cases](Cases)

ou sem definir nenhum n (de fato qualquer n fora do intervalo [1, 4] teria o mesmo resultado) para rodar o programa sem nenhum caso teste, permitindo dar sua propria entrada para o programa.

Para mais informações sobre funcionamento do programa e suas entradas veja o [Relatório](Relatorio.pdf) do mesmo.

Autores:
--------

 * [@alexandregjr](github.com/alexandregjr)
 * [@EdPirro](github.com/EdPirro)
