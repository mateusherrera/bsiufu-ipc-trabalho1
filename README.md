# Trabalho 1 - IPC

Primeiro trabalho realizado na disciplina de Introdução à Programação de Computadores (IPC).

## Descrição do trabalho

Este trabalho consiste em escrever um programa em C11 que calcule e imprima as áreas e volumes de várias entidades geométricas.

## Para compilar com gcc no terminal do Linux

Com o terminal, vá a pasta em que está o código fonte, e rode o seguinte comando:

```
gcc -c areavolume.c
```

E depois:

```
gcc -o areavolume areavolume.o
```

## Opcional: Organizar '.o' e executável

Na pasta da compilação.

Crie os diretórios 'obj/', para o '.o', e bin/, para o executável:

```
mkdir obj/
mkdir bin/
```

Depois mova o arquivo objeto e o executável para suas pastas:

```
mv areavolume.o obj/
mv areavolume bin/
```

## Para rodar o executável no terminal

Digite o comando na pasta onde está o executável:

```
./areavolume
```
