Algoritmo "ConverteTemperatura"
// Algoritmos e Lógica de Programação
// Monitor: Maurício De Oliveira
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 03/08/2022
Var
   // Seção de Declarações das variáveis
   Kelvin, Fahrenheit, Celsius, temp : real
   opcao: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
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
      Escreval ( " A temperatura em Kelvin é : ", temp, "ºK")
      Escreval ( " A temperatura em Celsius é : ", Celsius, "ºC")
      Escreval ( " A temperatura em Fahrenheit é : ", Fahrenheit, "ºF")

   Fimse

   Se ( opcao = 2 ) entao
      Kelvin <- (((temp -32) * (5/9)) + 273)
      Celsius <- ((temp - 32) / 1.8 )

      Escreval ( " A temperatura em Fahrenheit é : ", temp, "ºF")
      Escreval ( " A temperatura em Celsius é : ", Celsius, "ºC")
      Escreval ( " A temperatura em Kelvin é : ", Kelvin, "ºK")

   Fimse
   
   Se ( opcao = 3 ) entao
      Kelvin <- (temp + 273.15)
      Fahrenheit <- ((temp * 1.8) + 32.0 )
      Escreval ( " A temperatura em Celsius é : ", temp, "ºC")
      Escreval ( " A temperatura em Fahrenheit é : ", Fahrenheit, "ºF")
      Escreval ( " A temperatura em Kelvin é : ", Kelvin, "ºK")

   Fimse

Fimalgoritmo