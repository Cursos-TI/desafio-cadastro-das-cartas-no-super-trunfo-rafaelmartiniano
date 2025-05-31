# Super Trunfo: Batalha de Países! - Atualizado: 31/05/2025

Olá, entusiasta de jogos! Prepare-se para mergulhar no mundo do **Super Trunfo: Batalha de Países**, um jogo onde o conhecimento geográfico e a estratégia se encontram! Este projeto é a base de um emocionante jogo de cartas digital, desenvolvido em C, onde você pode comparar o poder de diferentes nações com base em seus atributos.

Este sistema foi construído em etapas, desde o simples cadastro de cartas até uma batalha interativa e cheia de estratégia. Ele representa o culminar de três níveis de desafio: Novato, Aventureiro e Mestre.

---

## 🌎 O que o Jogo Faz?

No Super Trunfo: Batalha de Países, você terá duas cartas de países prontas para a batalha. O grande diferencial é que **você decide quais atributos serão usados para determinar o vencedor!**

**Como funciona a Batalha:**

1.  **Conheça os Combatentes:** Ao iniciar o jogo, você verá as informações completas das duas cartas de países que se enfrentarão. Cada carta possui dados como:
    * **Nome do País:** (Ex: "Estados Unidos", "Brasil")
    * **População:** O número de habitantes.
    * **Área (em km²):** A extensão territorial.
    * **PIB (Produto Interno Bruto):** A riqueza gerada pelo país (em trilhões de dólares).
    * **Pontos Turísticos:** Um indicador da atratividade turística.
    * **Densidade Demográfica:** Calculada automaticamente (População / Área).
    * **PIB per Capita:** Calculado automaticamente (PIB Total / População).

2.  **Sua Estratégia de Escolha:** O jogo irá apresentar um menu interativo e inteligente. Nele, você poderá **escolher dois atributos diferentes** para comparar as cartas. O menu é "dinâmico", ou seja, o atributo que você escolher primeiro não aparecerá como opção para a segunda escolha, garantindo uma jogada justa!

3.  **As Regras da Batalha:**
    * **A Maioria Vence, Quase Sempre:** Para a maioria dos atributos (População, Área, PIB, Pontos Turísticos, PIB per Capita), a carta com o **maior valor** no atributo escolhido ganha o ponto.
    * **A Exceção da Densidade:** Cuidado! Para a **Densidade Demográfica**, a regra é invertida: a carta com o **menor valor** é a vencedora!
    * **Empate? Sem Problemas!** Se os valores forem iguais em um atributo, nenhum país ganha ponto naquele atributo.

4.  **A Pontuação Final:** Após a comparação dos dois atributos que você escolheu, o sistema soma os "pontos de vitória" de cada carta (1 ponto por atributo vencido).
    * A carta com a **maior soma de pontos** é declarada a vencedora da rodada!
    * Se a soma de pontos for igual para ambos os países, o resultado é um emocionante **"Empate!"**.

5.  **Resultado Claro e Detalhado:** Ao final da rodada, o jogo exibe de forma organizada:
    * Os nomes dos países.
    * Os dois atributos que você escolheu para a comparação, com os valores de cada país.
    * A soma total dos pontos de cada país.
    * E, claro, o veredito final: qual país venceu a batalha ou se foi um empate!

---

## 🛠️ Como Baixar e Testar o Jogo

Quer colocar as mãos na massa e ver o Super Trunfo: Batalha de Países em ação? Siga estes passos simples:

1.  **Faça o Download do Jogo:**
    * Abra seu **terminal** (ou Prompt de Comando/PowerShell no Windows).
    * Use o comando `git clone` para baixar todo o projeto para o seu computador:
        ```bash
        git clone [https://github.com/SEU_USUARIO_GITHUB/SEU_REPOSITORIO.git](https://github.com/SEU_USUARIO_GITHUB/SEU_REPOSITORIO.git)
        ```
        (Substitua `https://github.com/SEU_USUARIO_GITHUB/SEU_REPOSITORIO.git` pelo **link real do seu repositório GitHub**.)
    * Acesse a pasta do projeto:
        ```bash
        cd SEU_REPOSITORIO
        ```
        (Substitua `SEU_REPOSITORIO` pelo nome da pasta que foi criada, geralmente o nome do seu repositório.)

2.  **Prepare-se para a Batalha (Compilação):**
    * Para que o seu computador entenda o código em C, precisamos compilá-lo. Certifique-se de ter um **compilador C** (como o GCC, que é bem comum e gratuito) instalado no seu sistema.
    * No terminal, digite o seguinte comando para compilar o jogo:
        ```bash
        gcc super_trunfo.c -o super_trunfo
        ```
        *O que isso faz?* Ele pega o arquivo `super_trunfo.c` (seu código fonte) e o transforma em um programa executável chamado `super_trunfo`.

3.  **Hora de Jogar! (Execução):**
    * Com o programa compilado, você já pode iniciar a batalha! Digite no terminal:
        ```bash
        ./super_trunfo
        ```
        *E pronto!* O jogo começará, exibindo as informações das cartas e pedindo para você fazer suas escolhas.

---

## 📈 A Jornada de Desenvolvimento (Para os Curiosos!)

Este projeto foi construído incrementalmente, o que significa que funcionalidades foram adicionadas em etapas, tornando o código mais robusto e completo a cada fase.

* **Nível Novato (Cadastro Básico):** O ponto de partida! Aqui, o foco foi aprender a receber e exibir dados de cartas. Sem complicações, apenas o essencial.
* **Nível Aventureiro (Cálculo de Atributos e Comparação Simples):** O jogo ganhou vida com cálculos de densidade e PIB per capita. Introduzimos a primeira lógica de comparação, onde o computador decide qual atributo comparar.
* **Nível Mestre (Interatividade e Comparações Avançadas):** O nível que você está vendo agora! Aqui, o jogador assume o controle, escolhendo atributos dinamicamente, e a lógica de vitória se torna mais sofisticada, com um sistema de pontuação por atributos.

---

Sinta-se à vontade para explorar o código (`super_trunfo.c`) e ver como cada parte foi construída. Ele está bem comentado para facilitar o entendimento.

Divirta-se na Batalha de Países!

Atenciosamente, 
**Rafael Martinano (Aluno de Gestão em Tecnologia da Informação - Faculdade Estácio)**
