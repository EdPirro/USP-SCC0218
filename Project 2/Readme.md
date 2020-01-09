Problema:
---------

Suponha que você queira subir uma escada com N degraus, que liga dois pavimentos. Inicialmente, você
está no andar inferior, ao pé da escada (ainda não subiu degrau algum). Ao chegar ao piso superior, você
acabou de subir ao último degrau. Uma escada tem 4 degraus, tem N = 4. Suponha que você pode subir a escada de duas formas: subindo de degrau em degrau, ou então,
de maneira apressada, de 2 em 2 degraus. Este comportamento pode ser representado pelo conjunto
X = {1, 2}, onde 1 representa subir degrau a degrau e 2, pulando-se um degrau.
Escreva um programa que calcule a quantidade de maneiras que se pode subir uma escada com N
degraus, dado um conjunto de restrições X = {r1, r2, . . . rM}. Nota: valores no conjunto X podem
ser maiores que N. Neste caso, deve-se desconsiderá-los pois não há degraus suficientes para realizar o
movimento.
Por exemplo, para N = 2, existem duas maneiras de se subir a escada para chegar ao andar superior:
a) subir degrau a degrau ou b) pular um degrau.
Suponha que N e M são valores grandes o suficiente para fazer com que uma versão força bruta do
problema seja inviável.
1
Desafio: depois de terminada esta versão. Pense no seguinte. E se atribuíssemos um peso (valor
positivo) para cada valor de X? Seria possível também computar qual é a combinação de movimentos
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
, com um n entre 1 e 4, para rodar o programa com um dos 4 casos teste fornecidos na pasta [Cases](Cases).
Ou sem definir nenhum n (de fato qualquer n fora do intervalo [1, 4] teria o mesmo resultado) para rodar o programa sem nenhum caso teste, permitindo dar sua propria entrada para o programa.

Para mais informações sobre funcionamento do programa e suas entradas veja o [Relatório](Relatorio.pdf) do mesmo.

Reposiório:
----------

[Voltar à página principal do projeto.](https://github.com/EdPirro/USP-SCC0218)

Autores:
--------

 * [@alexandregjr](https://github.com/alexandregjr)
 * [@EdPirro](https://github.com/EdPirro)
