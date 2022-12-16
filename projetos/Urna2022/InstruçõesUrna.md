Olá, aluno!

As Eleições estão se aproximando e o(a) Juiz(a) do TSE (Tribunal Superior Eleitoral), convocou alunos de vários cursos na área de técnologia para integrar o time de desenvolvimento da urna eletrônica em linguagem C.

Você, aluno com os conhecimentos em algoritmo e lógica de programação e graduando de um curso de técnologia esta listado nesta convocação, sendo assim, não pode rejeitar esta convocação, pois ela foi expedida por um(a) Juiz(a) Eleitoral.


A tarefa é bem simples, conforme os passos citados abaixo:

1-) Os candidatos que pleiteiam os cargos de Governador e Presidente serão inclusos manualmente pois, como todos sabemos, a urna eletronica não possui conexão com a internet, impossibilitando acesso a um banco de dados externo. Os dados necessários para a inserção dos candidatos são:

  Cargo Pleiteado.
  Nome do Candidato.
  Numero do Candidato/Partido.
  Legenda do Partido.

2-) Os eleitores de cada seção também serão inclusos manualmente e os dados para inserção são:
  Numero do Titulo.
  Nome do Eleitor.

3-) Ao iniciar a urna eletrônica ela devera fazer a impressão da zerésima, que é um documento oficial onde os fiscais de partido registram  suas assinaturas juntamente com o presidente, mesários e secretário da seção. Na zerésima deverá constar todos os candidatos para os cargos pleiteados e a quantidade de votos deverá ser igual a 0(zero). Criar o arquivo para posterior verificação.

4-) Abertura e encerramento da urna eletronica.

  4.1-) Liberar Urna: solicitará ao mesário que insira o número do título do eleitor.
    A urna é liberada para a registro de voto apenas se o eleitor for registrado naquela Zona - Seção Eleitoral. Caso o título não esteja registrado a urna eletronica não é liberada e uma mensagem no painel do mesário é exibida, informado que o eleitor não faz parte daquela Zona - Seção eleitoral. Se por ventura o mesário digitar o numero do titulo do eleitor errado retorna ao menu mesário e ele repetira o passo novamente.
    Caso seja um eleitor válido para aquela Zona - Seção Eleitoral, uma mensagem com o nome do eleitor é exibida no painel do mesário. E liberará a urna.
    Caso o eleitor ja realizou o registro do voto uma mensagem com o nome do eleitor e a informação de que ele ja votou será exibida no painel do mesário.

    4.2-) Encerrar Urna: Caso esta opção seja selecionada pelo mesário a urna eletronica imprimirá a apuração dos votos registrados. Após o encerramento da urna eletronica não será mais possivel acessar o menu do mesário. Criar arquivo com a apuração dos votos. Travar a urna para que não inicie novamente.

5-) Registro dos votos.

  Tendo um eleitor válido para Zona-Seção Eleitoral e que ainda não registrou o voto a urna eletrônica esta liberada para a votação , primeiro registro será para o cargo de governador e o segundo registro será para o cargo de presidente.


  Na tela do eleitor deverá aparecer a seguinte mensagem:

            Eleições 2022 - Ampliar
                  Governador

  O cursor aguarda a inserção do numero do candidato.
  Caso o número do candidato seja um número válido exibira na tela do eleitor o nome do candidato e a qual partido este candidato pertence e solicitará para que o eleitor confirme com Sim[S] ou Não[N]. Caso a opção escolhida seja Sim[S] computa-se o voto para o candidato escolhido. Caso a opção escolhida seja Não[N], os dados inseridos são limpos da tela e retorna para a tela principal.

             Eleições 2022 - Ampliar
                  Governador

  Caso o numero do candidato seja um número inválido exibira na tela que o voto será nulo e solicitará para que o eleitor confirme com Sim[S] ou Não[N]. Caso a opção escolhida seja Sim[S] computa-se o voto como Voto Nulo. Caso a opção escolhida seja Não[N], os dados inseridos são limpos da tela e retorna para a tela principal.

              Eleições 2022 - Ampliar
                  Governador

  Caso o eleitor deseje votar em branco ele devera inserir a letra b ou a letra B ,  uma mensagem aparecera da tela informando voto em branco e solicitará para que o eleitor confirme com Sim[S] ou Não[N]. Caso a opção escolhida seja Sim[S] computa-se o voto como Voto Branco. Caso a opção escolhida seja Não[N], os dados inseridos são limpos da tela e retorna para a tela principal.

              Eleições 2022 - Ampliar
                  Governador

  Quado o eleitor confirmar Sim[S] em qualquer uma das situações anteriores a urna passa para a solicitação do numero candidato a presidente.
  Na tela do eleitor deverá aparecer a seguinte mensagem:

            Eleições 2022 - Ampliar
                  Presidente

  O cursor aguarda a inserção do numero do candidato.
  Caso o número do candidato seja um número válido exibira na tela do eleitor o nome do candidato e a qual partido este candidato pertence e solicitará para que o eleitor confirme com Sim[S] ou Não[N]. Caso a opção escolhida seja Sim[S] computa-se o voto para o candidato escolhido. Caso a opção escolhida seja Não[N], os dados inseridos são limpos da tela e retorna para a tela principal.

             Eleições 2022 - Ampliar
                  Presidente

  Caso o numero do candidato seja um número inválido exibira na tela que o voto será nulo e solicitará para que o eleitor confirme com Sim[S] ou Não[N]. Caso a opção escolhida seja Sim[S] computa-se o voto como Voto Nulo. Caso a opção escolhida seja Não[N], os dados inseridos são limpos da tela e retorna para a tela principal.

              Eleições 2022 - Ampliar
                  Presidente

  Caso o eleitor deseje votar em branco ele devera inserir a letra b ou a letra B ,  uma mensagem aparecera da tela informando voto em branco e solicitará para que o eleitor confirme com Sim[S] ou Não[N]. Caso a opção escolhida seja Sim[S] computa-se o voto como Voto Branco. Caso a opção escolhida seja Não[N], os dados inseridos são limpos da tela e retorna para a tela principal.

              Eleições 2022 - Ampliar
                  Presidente

  Quado o eleitor confirmar Sim[S] em qualquer uma das situações anteriores a urna exibirá a seguinte mensagem:

                'FIM'

E o processo retorna para o menu do mesário.







