### 🧮 🔢 Sistemas de Numeração

1. A representação numérica.
Os números são a base da matemática moderna. Mas, o que é número?
Um número pode ser representado por um algarismo. Sendo que o algarismo é um símbolo gráfico (um dígito) utilizado para representar quantidades.
Criados pela mente humana para contar objetos em coleções diversas, os números não contém qualquer referência às características individuais dos objetos contados. O número 6 por exemplo, é uma abstração de todos os conjuntos envolvendo seis coisas. Neste sentido, é notável que o caráter abstrato da ideia de número torna-se claro.
Aceitamos os números naturais como dados, juntamente com as duas operações fundamentais - adição e multiplicação.

No mundo moderno, o sistema de representação numérica utilizado é a notação de valor posicional. A invenção da notação posicional atribuída aos sumérios ou aos babilônios e desenvolvida pelos hindus, foi de enorme importância para a civilização.
O sistema posicional possui a agradável propriedade de que todos os números, quer sejam grandes ou pequenos, podem ser representados utilizando-se um reduzido conjunto de diferentes algarismos (No sistema decimal, são os "algarismos arábicos" 0, 1, 2, 3, ... , 9). 
De modo geral, qualquer quantidade pode ser representada utilizando um conjunto finito de símbolos.


1.1 A representação dos inteiros.

Utilizando como exemplo o número 372, podemos expressá-lo da seguinte forma:
$$
300 + 70 + 2 = 3 \times 10^2 + 7 \times 10^1 + 2 \times 10^0
$$
Deste modo, a regra para expressar um número inteiro com 4 algarismos seria:
$$
$z = a \times 10^3 + b \times 10^2 + c \times 10^1 + d \times 10^0
$$
Onde os algarismos $a$, $b$, $c$ e $d$ são também chamados de coeficientes e correspondem aos inteiros de zero a nove. Nota-se ainda, que os coeficientes correspondem aos restos da divisão sucessiva com a base numérica aplicada. Nesse caso, a base numérica é o $10$ (Sistema de Numeração Decimal). 

| Passo | Divisão | Quociente | Resto (Coeficiente) | Potência de 10 |
| :--- | :--- | :--- | :--- | :--- |
| 1 | $\frac{372}{10}$ | $37$ | **$2$** | $10^0$ (Unidade) |
| 2 | $\frac{37}{10}$ | $3$ | **$7$** | $10^1$ (Dezena) |
| 3 | $\frac{3}{10}$ | $0$ | **$3$** | $10^2$ (Centena) |

Assim, o método geral para representar um inteiro $z$ no sistema decimal consiste em expressar $z$ na forma:
$$
z = a_n \times 10^n + a_n-1 \times 10^n-1 + ... + a_1 \times 10^1 + a_0 \times 10^0
$$

**Referência Bibliográfica**
* COURANT, Richard; ROBBINS, Herbert. O que é matemática?: uma abordagem elementar de métodos e conceitos. Tradução de Adalberto da Silva Brito. Rio de Janeiro: Ciência Moderna, 2000.
