Algoritmo "ConverteTemperatura"
// Algoritmos e L�gica de Programa��o
// Monitor: Maur�cio De Oliveira
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/08/2022
Var
   // Se��o de Declara��es das vari�veis
   Kelvin, Fahrenheit, Celsius, temp : real
   opcao: inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   opcao <- 0
   Kelvin <-0.0
   Fahrenheit<-0.0
   Celsius<-0.0

   Escreval( "Inserir a unidade de temperatura")
   Escreval ( " 1 - Kelvin")
   Escreval ( " 2 - Fahrenheit")
   Escreval ( " 3 - Celsius")
   Escreva( "Inserir a unidade de temperatura : ")

   Leia ( opcao )

   Escreval( "Inserir o valor de temperatura: ")
   Leia (temp)

   limpatela

   Se ( opcao = 1 ) entao
      Celsius <- temp  -273.0
      Fahrenheit <- (((temp - 273.0) * 1.8)+32)
      Escreval ( " A temperatura em Kelvin � : ", temp, "�K")
      Escreval ( " A temperatura em Celsius � : ", Celsius, "�C")
      Escreval ( " A temperatura em Fahrenheit � : ", Fahrenheit, "�F")

   Fimse

   Se ( opcao = 2 ) entao
      Kelvin <- (((temp -32) * (5/9)) + 273)
      Celsius <- ((temp - 32) / 1.8 )

      Escreval ( " A temperatura em Fahrenheit � : ", temp, "�F")
      Escreval ( " A temperatura em Celsius � : ", Celsius, "�C")
      Escreval ( " A temperatura em Kelvin � : ", Kelvin, "�K")

   Fimse
   
   Se ( opcao = 3 ) entao
      Kelvin <- (temp + 273.15)
      Fahrenheit <- ((temp * 1.8) + 32.0 )
      Escreval ( " A temperatura em Celsius � : ", temp, "�C")
      Escreval ( " A temperatura em Fahrenheit � : ", Fahrenheit, "�F")
      Escreval ( " A temperatura em Kelvin � : ", Kelvin, "�K")

   Fimse

Fimalgoritmo