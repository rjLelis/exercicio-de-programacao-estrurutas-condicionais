# Exercicio de programação com estrurura condicionais
Lista de Exercícios da Disciplina de Programação 1

Prof. Sidney Cunha

1. Algoritmo que receba dois valores e calcule a expressão abaixo:

                x-3
               ----- + sen(y)
                y+4

        Condições para a realização do cálculo:
              “y+4” diferente de zero

2. Algoritmo que receba três valores e calcule a expressão abaixo:
             
              x          3
            ----- +  ----------
             ²√y     cos(2) - 2
       
        Condições para a realização do cálculo:
              “y” maior que zero
              “cos(z)-2” diferente de zero

3. Algoritmo que receba os três coeficientes de uma equação do segundo
grau e calcule as suas raízes reais:

          x1 = -b + √b²-4ac       x2 = -b - √b²-4ac
               --------------         --------------
                    2a                     2a

        Condições para a realização do cálculo:
              “a” diferente de zero
              “b*b-4*a*c” maior ou igual a zero

4. Calcule a média aritmética das 3 notas de um aluno e mostre, além do
valor da média, uma mensagem de "Aprovado", caso a média seja igual
ou superior a 6, ou a mensagem "reprovado", caso contrário.

5. Elabore um algoritmo que dada a idade de um nadador classifica-o em
uma das seguintes categorias:

           infantil A = 5 - 7 anos
           infantil B = 8-10 anos
           juvenil A = 11-13 anos
           juvenil B = 14-17 anos
           adulto = maiores de 18 anos
           
6. O cardápio de uma lanchonete é o seguinte:


| Especificação | Código | Preço |
| ------------- | ------ | ----- |
| Cachorro-quente | 100 | 1,20 |
| Bauru simples | 101 | 1,30 |
| Bauru com ovo | 102 | 1,50 |
| Hambúrguer | 103 | 1,20 |
| Cheeseburguer | 104 | 1,30 |
| Refrigerante | 105 | 1,00 |

Escrever um algoritmo que leia o código do item pedido, a quantidade e
calcule o valor a ser pago por aquele lanche. Considere que a cada
execução somente será calculado um item


7. Tendo como dados de entrada a altura e o sexo de uma pessoa
(M=masculino e F=feminino), construa um algoritmo que calcule seu
peso ideal, utilizando as seguintes fórmulas:

  - para homens: (72.7*h)-58
  
  - para mulheres: (62.1*h)-44.7
  
8. Um vendedor precisa de um algoritmo que calcule o preço total devido
por um cliente. O algoritmo deve receber o código de um produto e a
quantidade comprada e calcular o preço total, usando a tabela abaixo.
Mostre uma mensagem no caso de código inválido:


| Código | Preço unitário | 
| ------ | -------------- |
| 'ABCD' | R$ 5,30 | 1,20 |
| 'XYPK' | R$ 6,00 | 1,30 |
| 'KLMP' | R$ 3,20 | 1,50 |
| 'QRST' | R$ 2,50 | 1,20 |

9. Escrever um algoritmo que lê o número de identificação, as 3 notas
obtidas por um aluno nas 3 verificações e a média dos exercícios que
fazem parte da avaliação. Calcular a média de aproveitamento, usando
a fórmula:

            MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME )/7
            
A atribuição de conceitos obedece a tabela abaixo:

| Média de Aproveitamento | Conceito | 
| ----------------------- | -------- |
| 9,0 | A |
| 7,5 e < 9,0 | B |
| 6,0 e < 7,5 | C |
| 4,0 e < 6,0 | D |
| < 4,0 | E | 

O algoritmo deve escrever o número do aluno, suas notas, a média dos
exercícios, a média de aproveitamento, o conceito correspondente e a
mensagem: APROVADO se o conceito for A, B ou C e REPROVADO se
o conceito for D ou E.

10. Algoritmo que receba três valores correspondentes aos lados de um
triângulo e verifique primeiro se estes valores formam um triângulo,
obedecendo as condições abaixo:
A&lt;B+C, B&lt;A+C e C&lt;A+B

Caso os valores formem um triângulo, informe qual o tipo deste triângulo

        Três lados iguais: Equilátero
        Três lados diferentes: Escaleno
        Dois lados iguais: Isósceles

11. Algoritmo que receba três valores e encontre qual é o maior.
