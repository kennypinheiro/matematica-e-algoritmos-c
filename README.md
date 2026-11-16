# Matemática & Algoritmos: Lógica Discreta e Implementações em C

Repositório dedicado ao estudo aprofundado de conceitos fundamentais da **Matemática Discreta** e da **Ciência da Computação Teórica**, traduzidos em implementações práticas, limpas e eficientes na linguagem **C**.

O objetivo deste projeto é construir uma ponte sólida entre a abstração matemática e a engenharia de software de baixo nível, explorando estruturas de dados, algoritmos e demonstrações lógicas sob uma perspectiva rigorosa.

---

## :abacus: Os alicerces da matemática

* **1 - Definições:** Explicam em detalhes específicos os conceitos abordados.
* **2 - Teoremas:** Declarações afirmativas que informam o que é verdadeiro sobre estes conceitos.
* **3 - Provas:** Demonstram, de maneira irrefutável, a verdade dessas proposições.

* Obs: Os objetos matemáticos adquirem existência por meio das definições.

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

Obs_1: A definição 1.3 não afirma que um inteiro é ímpar desde que não seja par. -Este é um fato que pode ser provado.
Obs_2: Todo inteiro positivo pode ser decomposto de maneira única em fatores primos. Ex: $12 = 2 \times 2 \times 3$. 
Obs_3: O número $1$ não é nem primo e nem composto. Ele é chamado **unidade**.

**Referência Bibliográfica**

* SCHEINERMAN, Edward R. Matemática Discreta: Uma Introdução. 1. ed. São Paulo: Pioneira Thomson Learning, 2003. 532 p. ISBN 85-221-0291-0.

---

## 🛠️ Tecnologias e Ferramentas

* **Linguagem:** C (padrão C99/C11)
* **Compilador:** GCC (GNU Compiler Collection)
* **Ferramentas de Apoio:** Make, Git, VS Code
* **Documentação Teórica:** LaTeX (para anotações e demonstrações formais)

---

## 📂 Estrutura do Repositório

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
