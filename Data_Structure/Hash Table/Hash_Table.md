# Hash Tables (Dicionário) - unordered_map

## Conhecimentos prévios

### Dicionários
Na programação, o dicionário é uma lista em que podemos definir o index de cada elemento. Existem 2 valores para cada item de um dicionário, a **chave (KEY)** e o **valor (VALUE)**.

Este é um exemplo de dicionário em Python:
```
aluno_nota = {"Carlos" : 8.1, "Ana" : 7.3, "Maria" : 10}
```

Então ao invés de utilizar 0, 1 e 2 (keys) para acessar as notas dos alunos (values), você deve colocar

```
aluno_nota["Carlos"]
```

### Hash
Antes de aprender sobre os Hash Tables iremos entender o que é um **HASH**.
O hash é um tipo de criptografia onde não é possível descriptografar o resultado final após criptografado.
Dado um input qualquer ele irá passar por uma função hash que sempre retornará um valor com um tamanho fixo de caracteres.
Esta criptografia apenas aplica a função ao valor inserido e o compara com o output esperado, dessa forma, não é necessário saber o conteúdo da mensagem.

---

## Definição

Hash Tables são listas com tamanho pré-definido em que cada elemento possui uma chave e o seu valor associado, ou seja, um dicionário. Sendo que sua posição é definida pelo resultado hash da key inserida.
Para o programador não existe diferença entre utilizar o dicionário e o unordered_map, o que muda são os processos adicionais que o computador faz por trás da criação do unordered_map.

## Como Funciona?
Como dito anteriormente, as hash tables são criadas com tamanhos pré-definidos pelo usuário, isso significa que é necessário atribuir um tamanho inicial (assim como na declaração de uma lista sem dados), porém é possível modificá-lo depois.
Após a chave passar pelo função hash, o programa vai definir a posição desses dados. Esse processo é feito da seguinte maneira:
1. Aplica a função hash na chave inserida pelo usuário
2. Pega o resto da divisão entre o valor hash e o tamanho atual
3. Utiliza o resultado para definir a posição
4. Armazena a chave sem o hash e o valor nesta posição 

## Utilização
Verifique, ao final desta seção, o arquivo `Hash_Table.cpp` para ter um exemplo da aplicação do HASH TABLE.



## Fontes
- Hash
    - [Lisk - What is Hashing? Hash Functions Explained Simply](https://www.youtube.com/watch?v=2BldESGZKB8)
- Hash Tables
  - [Bro Code - Learn Hash Tables in 13 minutes #️⃣](https://www.youtube.com/watch?v=FsfRsGFHuv4&t=9s)