Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 08/08/2022
Var
// Se��o de Declara��es das vari�veis 
rendimentoAnual, INSS, valorDependentes, impostoDevido: real
retidoFonte, salarioBruto, deducaoDespesa, aliquota, resultado : real
dependentes: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
Escreval ("Informe o rendimento anual")
leia (rendimentoAnual)

Escreval ("Informe a quantidade de dependentes")
leia(dependentes)

Escreval ("Informe a quantidade a contribui��o do INSS")
leia(INSS)

Escreval ("Informe o valor das despesas")
leia(deducaoDespesa)

Escreval ("Informe o valor retido na fonte")
leia(retidoFonte)

salarioBruto <- rendimentoAnual / 12 ;
valorDependentes <- dependentes * 2275.08

se ( rendimentoAnual <= 1903.98 )entao

Escreval ("Isento!")
fimse

se ((salarioBruto >= 1903.99) e (salarioBruto <= 2.826,65)) entao

impostoDevido <- ((salarioBruto - (valorDependentes + deducaoDespesa ) - INSS) * 0.075) - dedu��o
fimse


Fimalgoritmo