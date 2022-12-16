algoritmo "MiniBanco"
var
   SaldoDisponivel, ValorDoSaque, ValorDoDeposito: real
   operacao: inteiro
inicio
      SaldoDisponivel <- 2000.0
      Escreval ( "$$  Banco Ampliar Técnologias $$")
      Escreval ( "Qual operação deseja realizar")
      Escreval ( " 1- Saque ")
      Escreval ( " 2- Depósito ")
      Escreval ( " 3- Consultar Saldo")
      Escreval ( " 0- Sair ")
      Escreva  ( "Digite a operação desejada: ")
      
      Leia ( operacao )

      Se ( operacao = 1 ) entao
         Limpatela
         Escreval ( "$$  Banco Ampliar Técnologias $$")
         Escreval( "  OPERAÇÃO SAQUE ")
                  Se ( SaldoDisponivel <= 0.0 )então
                     Escreva ( " Conta sem saldo disponível para saque")
                  Senão
                     Escreva ( " Qual valor deseja sacar? R$: ")
                     leia ( ValorDoSaque)
                          Se ( ValordoSaque > SaldoDisponivel) entao
                             Escreval ( " Valor do saque excede o limite disponível na conta")
                          Senao
                               SaldoDisponivel <- SaldoDisponivel - ValorDoSaque
                               Escreval ("Saque no valor de R$ ",ValorDoSaque, ",00 efetuado com sucesso!")
                               Escreval ("Seu saldo disponível é de : R$ ", SaldoDisponivel, ",00")
                          Fimse
                  Fimse
      Fimse
      
      Se ( operacao = 2 ) então

         Limpatela
         Escreval ( "$$  Banco Ampliar Técnologias $$")
         Escreval( "  OPERAÇÃO DEPÓSITO ")
         Escreval ( "Qual é o valor que deseja depositar? R$ ")
         Leia ( ValorDoDeposito)
         SaldoDisponivel <- SaldoDisponivel + ValorDoDeposito
         Escreval ("Seu saldo disponível é de : R$ ", SaldoDisponivel )

         Fimse
      Se ( operacao = 3 ) então
         Limpatela
         Escreval ( "$$  Banco Ampliar Técnologias $$")
         Escreval ( "  OPERAÇÃO CONSULTA SALDO ")
         Escreval ("Seu saldo disponível é de : R$ ", SaldoDisponivel )
         Fimse

      Se ( operacao = 0 ) então
         Limpatela
         Escreval ( "$$  Banco Ampliar Técnologias $$")
         Escreval ( "  APLICAÇÃO ENCERRADA PELO USUÁRIO ")
         Escreval ("Obrigado por ser cliente Banco Ampliar Tecnologias" )
         Fimse

Fimalgoritmo