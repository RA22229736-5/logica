algoritmo "MiniBanco"
var
   SaldoDisponivel, ValorDoSaque, ValorDoDeposito: real
   operacao: inteiro
inicio
      SaldoDisponivel <- 2000.0
      Escreval ( "$$  Banco Ampliar T�cnologias $$")
      Escreval ( "Qual opera��o deseja realizar")
      Escreval ( " 1- Saque ")
      Escreval ( " 2- Dep�sito ")
      Escreval ( " 3- Consultar Saldo")
      Escreval ( " 0- Sair ")
      Escreva  ( "Digite a opera��o desejada: ")
      
      Leia ( operacao )

      Se ( operacao = 1 ) entao
         Limpatela
         Escreval ( "$$  Banco Ampliar T�cnologias $$")
         Escreval( "  OPERA��O SAQUE ")
                  Se ( SaldoDisponivel <= 0.0 )ent�o
                     Escreva ( " Conta sem saldo dispon�vel para saque")
                  Sen�o
                     Escreva ( " Qual valor deseja sacar? R$: ")
                     leia ( ValorDoSaque)
                          Se ( ValordoSaque > SaldoDisponivel) entao
                             Escreval ( " Valor do saque excede o limite dispon�vel na conta")
                          Senao
                               SaldoDisponivel <- SaldoDisponivel - ValorDoSaque
                               Escreval ("Saque no valor de R$ ",ValorDoSaque, ",00 efetuado com sucesso!")
                               Escreval ("Seu saldo dispon�vel � de : R$ ", SaldoDisponivel, ",00")
                          Fimse
                  Fimse
      Fimse
      
      Se ( operacao = 2 ) ent�o

         Limpatela
         Escreval ( "$$  Banco Ampliar T�cnologias $$")
         Escreval( "  OPERA��O DEP�SITO ")
         Escreval ( "Qual � o valor que deseja depositar? R$ ")
         Leia ( ValorDoDeposito)
         SaldoDisponivel <- SaldoDisponivel + ValorDoDeposito
         Escreval ("Seu saldo dispon�vel � de : R$ ", SaldoDisponivel )

         Fimse
      Se ( operacao = 3 ) ent�o
         Limpatela
         Escreval ( "$$  Banco Ampliar T�cnologias $$")
         Escreval ( "  OPERA��O CONSULTA SALDO ")
         Escreval ("Seu saldo dispon�vel � de : R$ ", SaldoDisponivel )
         Fimse

      Se ( operacao = 0 ) ent�o
         Limpatela
         Escreval ( "$$  Banco Ampliar T�cnologias $$")
         Escreval ( "  APLICA��O ENCERRADA PELO USU�RIO ")
         Escreval ("Obrigado por ser cliente Banco Ampliar Tecnologias" )
         Fimse

Fimalgoritmo