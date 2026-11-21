# 🔢 Matemática & Algoritmos: Lógica Discreta e Implementações em C

Repositório dedicado ao estudo aprofundado de conceitos fundamentais da **Matemática Discreta** e da **Ciência da Computação Teórica**, traduzidos em implementações práticas, limpas e eficientes na linguagem **C**.

O objetivo deste projeto é construir uma ponte sólida entre a abstração matemática e a engenharia de software de baixo nível, explorando estruturas de dados, algoritmos e demonstrações lógicas sob uma perspectiva rigorosa.


## :abacus: Os alicerces da matemática

* **1 - Definições:** Explicam em detalhes específicos os conceitos abordados.
* **2 - Teoremas:** Declarações afirmativas que informam o que é verdadeiro sobre estes conceitos.
* **3 - Provas:** Demonstram, de maneira irrefutável, a verdade dessas proposições.
* **4 - Teoria:** Enquanto o teorema é uma afirmação específica a **teoria** é um conjunto amplo de ideias sobre um assunto em particular.

## 1️⃣ Definição

É por meio das definições que os objetos matemáticos passam a existir. É necessário que o objeto satisfaça condições específicas e precisas sendo que tais condições formam a definição para o conceito. A definição exige precisão absoluta e deve ser inequívoca.

**Algumas definições relevantes a saber:**
* Definição 1.1 - PAR:
Um inteiro é chamado de par se é divisível por 2.

* Definição 1.2 - DIVISÍVEL:
Sejam $a$ e $b$ inteiros, dizemos que $a$ é divisível por $b$ se existe um inteiro $c$ tal que $b \times c = a$. Dizemos também que $b$ divide $a$, ou que $b$ é um fator de $a$, ou que $b$ é um divisor de $a$. A notação correspondente é $b | a$.

* Definição 1.3 - ÍMPAR:
Um inteiro $a$ é chamado ímpar desde que haja um inteiro $x$ tal que $a = 2 \times x + 1$.

* Definição 1.4 - PRIMO:
Um inteiro $p$ é primo se $p > 1$ e se os únicos divisores positivos de $p$ são $1$ e $p$.

* Definição 1.5 - COMPOSTO:
Um número positivo $a$ é chamado composto se existe um inteiro $b$ tal que $1 < b < a$ e $b | a$.

* Definição 1.6 - PERFEITO:
Um número inteiro $n$ é chamado perfeito se é igual a soma de todos os seus divisores que são simultaneamente positivos e inferiores a $n$.

Exerício: Escreva um programa de computador que encontre e liste os divisores de um número $n$ perfeito que são positivos e inferiores a $n$.

Obs_1: A definição 1.3 não afirma que um inteiro é ímpar desde que não seja par. -Este é um fato que pode ser provado.
Obs_2: Todo inteiro positivo pode ser decomposto de maneira única em fatores primos. Ex: $12 = 2 \times 2 \times 3$.
Obs_3: O número $1$ não é nem primo e nem composto. Ele é chamado **unidade**.


## 2️⃣ Teorema

É uma proposição (afirmação declarativa) matemática para a qual existe uma prova. Ou seja, pode ser demonstrada como verdadeira por meio do raciocínio lógico.

Existem diferentes categorias de afirmações declarativas a saber:

* **Teoremas:**  Afirmações que podemos provar e portanto sabemos que são verdadeiras.
* **Conjeturas:** Afirmações que ainda não foram provadas e portanto não podemos dizer se são verdadeiras ou falsas.
* **Erros:** Afirmações falsas.
* **Absurdos:** Afirmações cuja sentença não tem sentido.


> A natureza da verdade: Em matemática, a palavra verdadeiro deve ser considerada como absoluta, incondicional e sem exceção.


### Linguagem matemática (Matematiquês)

Por vezes, os matemáticos modificam determinadas palavras (nomes e adjetivos) e atribuem a estas palavras um novo significado (exemplo: 'ou') para que atenda a finalidades específicas.


* **Se - então**

Na afirmação "Se A, então B", A é chamado hipótese e B, conclusão. A maior parte dos teoremas pode ser enunciada da seguinte maneira: "se A, então B". Por exemplo, o teorema "A soma de dois números inteiros pares é par" pode ser reformulada como: "Se $x$ e $y$ são inteiros pares, então $x + y$ também é par".
A afirmação "Se A, então B" significa que: **sempre que condição A for verdadeira, a condição B também será**.


> A implica B (A => B). A é suficiente para B. B é necessário para A


Exemplo: Se $x$ e $y$ são pares, então $x + y$ também é par.

A proposição anterior não descarta a possibilidade de a soma $x + y$ resultar em um número par, ainda que $x$ ou $y$ não o sejam. Com efeito, caso $x$ e $y$ sejam ambos ímpares, verifica-se que $x + y$ é par.

<br>

| Condição A | Condição B | SE A, ENTÃO B | 
| :--- | :--- | :--- |
| Verdadeira | Verdadeira | Possível |
| Verdadeira | Falsa | Impossível |
| Falsa | Verdadeira | Possível |
| Falsa | Falsa | Possível |

<br>
<br>

* **Se e somente se**

Alguns teoremas são da forma "Se A, então B, e se B então A". Veja o enunciado: Se um inteiro $x$ é par, então $x + 1$ é ímpar, e se $x + 1$ é ímpar, então $x$ é par. 
Esta afirmação pode ser reescrita na forma: "A se e somente se B".

Exemplo: Um inteiro $x$ é par se e somente se $x + 1$ é ímpar.

A afirmação "se e somente se" significa que: **a condição A só pode ser verdadeira se B também for verdadeira** 


> A é equivalente a B (A <=> B). A é necessário e suficiente para B

<br>

| Condição A | Condição B | SE E SOMENTE SE | 
| :--- | :--- | :--- |
| Verdadeira | Verdadeira | Possível |
| Verdadeira | Falsa | Impossível |
| Falsa | Verdadeira | Impossível |
| Falsa | Falsa | Possível |

<br>
<br>

* **Uso matemático de 'E'**

A afirmação "A e B" significa que ambas as afimrações A e B são verdadeiras.

Exemplo: Todo inteiro cujo algarismos das unidades é 0 é divisível por 2 **e** por 5.

<br>

| Condição A | Condição B | ---- E ---- | 
| :--- | :--- | :--- |
| Verdadeira | Verdadeira | Verdadeira |
| Verdadeira | Falsa | Falsa |
| Falsa | Verdadeira | Falsa |
| Falsa | Falsa | Falsa |

<br>
<br>

* **Uso matemático de 'NÃO'**

A afirmação "não A" é verdadeira se e somente se A é falsa.

Exemplo: 

- Todos os primos são ímpares (FALSA).
- Nem todos os primos são ímpares (VERDADEIRA).

<br>

| Condição A | ---- NÃO A ---- | 
| :--- | :--- |
| Verdadeira | Falsa |
| Falsa | Verdadeira |

<br>
<br>

* **Uso matemático de 'OU'**

A afirmação "A ou B" significa que A é verdadeiro, ou B é verdadeiro, ou ambo, A e B, são verdadeiros.

<br>

| Condição A | Condição B | ---- OU ---- |
| :--- | :--- | :--- |
| Verdadeira | Verdadeira | Verdadeira |
| Verdadeira | Falsa | Verdadeira |
| Falsa | Verdadeira | Verdadeira |
| Falsa | Falsa | Falsa |

<br>
<br>

* **Afirmação verdadeira por vacuidade**

Também conhecida como afirmação vazia. São afirmações do tipo "Se A, então B" em que a hipótese (A) é impossível. Como essas afirmações não admitem exceções, são consideradas verdadeiras.

Exemplo: Se um inteiro é simultaneamente quadrado e primo, então é negativo.

<br>

## 🛠️ Tecnologias e Ferramentas

* **Linguagem:** C (padrão C99/C11)
* **Compilador:** GCC (GNU Compiler Collection)
* **Ferramentas de Apoio:** Make, Git, VS Code
* **Documentação Teórica:** LaTeX (para anotações e demonstrações formais)

<br>

## 📂 Estrutura do Repositório (Em construção...)

A organização do código reflete os módulos de estudo teóricos e práticos:

```text
├── 00_numeros_naturais/        
│   ├── README.md               
│   ├── code.c        
│   └── Makefile 
├── 01_logica_proposicional/    
│   ├── README.md               
│   ├── code.c        
│   └── Makefile 
├── 02_conjuntos_e_relacoes/    
│   ├── README.md               
│   ├── code.c        
│   └── Makefile 
├── 03_combinatoria/            
│   ├── README.md               
│   ├── code.c        
│   └── Makefile 
├── 04_teoria_dos_grafos/
│   ├── README.md               
│   ├── code.c        
│   └── Makefile 

└── README.md

```



## 📚 Referência Bibliográfica

* SCHEINERMAN, Edward R. Matemática Discreta: Uma Introdução. 1. ed. São Paulo: Pioneira Thomson Learning, 2003. 532 p. ISBN 85-221-0291-0.

> *Nota: Parte da estruturação e refinamento textual deste documento foi auxiliada pelo Google Gemini.*
