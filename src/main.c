#include <stdio.h>
#include <stdlib.h>
#include <est.h>


/*  O programa a seguir foi utilizado como avaliação para a disciplina de Algoritmos e Estrutura de Dados II do curso de ciência da Computação
    e busca apresentar uma maneira de controle e exibiçãoo das figurinhas do album da copa do mundo de 2022 utilizando Arvores binárias para realizar a 
    inserção, controle e a exibição das figurinhas. 
    Nesta versão, estão presentes apenas quatro seleções, mas o raciocínio e lógica poderiam ser aplicada a todas as outras 32 seleções.

    Optou-se por utilizar Árvores como estruturas de dados devido ao fato de atender completamente aos requisitos do trabalho, além de apresentar
    condições de manipulação mais fácil, se comparada as listas, uma vez que pode-se excluir a questão da inserção ordenada, já que que árvores
    permitem a exibição de dados facilitada, utilizando o algorítmo de exibição Em Ordem.

    Em contra-partida, abriu-se mão da possibilidade de um melhor controle das figurinhas ainda não obtidas, problema que foi contornado utilizando
    Arrays, que permite a exibição em tela das figurinhas ainda não obtidas.

    As estruturas dinâmicas de dados estão definidas e detalhadas em projeto2/includes/est.h.
    
    Já quanto as funções, o programa doi dividido em  quatro bibliotecas de funções para controlar a INSERÇÃO (node.c), a PESQUISA (search.c), 
    a EXIBIÇÃO (exhibition.c) e a IMPRESSÃO das figurinhas em arquivo (print.c) das figurinhas já obtidas e as faltantes. Cada uma delas está detalhada
    em seu respectivo arquivo na pasta projeto2/lib.

    A função principal trás a execução basica do código e funciona com um menu switch-case dentro de um laço While, onde estão disponíveis quatro opções para
    o usuário: 1-inserir, 2-pesquisar, 3-exibir e 4-imprimir. para sair, o usuário deve digitar 5.

    Tanto a INSERÇÃO, quanto a PESQUISA também operam com um loop While e um switch-case, para inserir de maneira unitária cada uma das figurinhas das seleções.

    Já as funções de exibir e imprimir não trabalham com loops, mas utilizam-se da recursividade para desenvovler a exibição das figurinhas na tela ou no arquivo fig.txt.

    Cada uma das funções serão mais detalhadas em suas respectivas linhas de execução a seguir.

    O programa também irá trazer uma versão do problema utilizando a biblioteca gráfica de dados, onde são apresentados cada uma das figurinhas, onde basta clicar e ela será
    adicinada ao conrtole. Esta versão do programa foi elaborado para apenas para a seleção do Qatar, mas assim como essa apresentação, a ideia poderia ser extendida para
    todas as 32 seleções presentes no álbum.
*/
 

int main()
{   
    //Foi considerada uma unica inserção para o usuário, ainda que a maneira mais eficiente de se executar esse programa seria a elaboração de um histórico das figurinhas, entretanto,
    //dado tempo disponível para a elaboração, e a complexidade desta implementação, optou-se por não realizar essa atividade.
    //Neste ponto, considera-se a arvore vazia, portanto, raiz aponta para NULL, assim inicia-se uma nova inserção para o usuário
    nodeQatar* rootQatar = NULL; 
    nodeEquador* rootEquador = NULL;
    nodeSenegal* rootSenegal = NULL;
    nodeHolanda* rootHolanda = NULL;

    int n; //variável que recebe o valor da figurinha a ser inserida
    int pesq; //variável que recebe o valor a ser pesquisado dentro da árvore de cada país
    int menu, start=0; //variáveis de movimentação e acesso ao menu 
    int c = 0; //variável contadora do array da seleção, que deverá indicar se aquele país já está completo ou não na seção exibir;
    char ch = 'S'; //variável de contole dos loops de inserção e pesquisa

    //Os Arrays a seguir realizam um controle intermediario das figurinhas, permitindo definir, de maneira simples, as figurinhas ainda não obtidas pelo usuário
    int figQatar[20]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int figEquador[20]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int figSenegal[20]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int figHolanda[20]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    //A partir deste ponto, inicia-se a execução da função principal, com a execução dos menus e as respectivas funções de inserção, pesquisa, exibição e impressão em arquivo
    //O menu deve funcionar enquanto a opção 5-Sair não for escolhida, que encerra a execução do programa.
    //Aqui a ideia é apresentar uma prévia do que seria o trabalho para um dos grupos das seleções participantes da copa, que poderia ser extendida a todas as outras 28 participantes do torneio
    while (start != 5)
    {  
        printf("\nVocê deseja: \n");
        printf("1<Inserir>\n");
        printf("2<Buscar>\n");
        printf("3<Exibir>\n");
        printf("4<Imprimir em Arquivo>\n");
        printf("Digite sua escolha ou 5 para sair  ");
        scanf("%d", &start);

        switch (start)
        {
        case 1:
        //Esta parte trabalha a inserção de um elemento na sua respectiva árvore. 
        //O usuário deve escolher uma entre 4 opções ou então digitar 5 para retornar ao menu inicial.
        //O código mantém a mesma estrutura para todas as seleções, portanto os comentário realizados para a seleção do catar também são aplicados para as outras seleções.
        {
            printf("\nVocê está na página de Inserção das figurinhas obtidas!\n");
            printf("Qual selecao voce deseja inserir?\n");
            printf("1<Qatar>\n");
            printf("2<Equador>\n");
            printf("3<Senegal>\n");
            printf("4<Países Baixos>\n");
            printf("Digite o numero da selecao escolhida, ou 5 para voltar ao menu inicial:  ");
            scanf("%d", &menu);

            switch (menu)
            {   //O programa opera com a função insert definida pelo grupo, apresentada na pasta lib/node.c
                //Inicialmente o programa solicita ao usuário para que uma figurinha seja inserida, e depois pergunta se ele deseja fazer uma nova inserção.
                //Caso a resposta seja não, o usuário pressiona a tecla N(n) e retorna ao menu inicial.
                //Após receber o valor, é necessário chamar a função de inserção na árvore binária, adicionando um novo nó.
                //A função irá receber o valor do ENDEREÇO da raiz e o DADO (n) a ser inserido na árvore em questão do respectivo país.
                //Após inserido na árvore, o programa realiza uma verificação com if-else, com o objetivo de garantir a exibição das figurinhas não obtidas pelo usuário.
                //Como foram identificados alguns problemas referentes à continuidade do programa, os comandos getchar(linha 98) e fflush(stdin)(110) foram inseridos para
                //garantir a continuidade e a operação correta do programa (foram os que resolveram o problema de passar direto pelas perguntas seguintes)

                case 1: //Inserção Qatar
                        
                    printf("\n Realizando a Inserção para a seleção do Qatar!");
                    printf("\n Não se preocupe com a ordem! O programa ordena pra você!");
                    printf("\n ----------------------------------------------------------------");

                    do{
                        printf("\nDigite o número da figurinha:  "); 
                        scanf("%d", &n);
                        rootQatar = insertQatar(rootQatar, n); 
                        getchar(); 

                        //Este laço realiza a seguinte verificação: Caso a figurinha 10 seja inserida, o vetor é percorrido até encontrá-la, e então a substitui por 0, para garantir que ela já foi obtida
                        for (int i = 0; i <=20; i++)
                        {
                            if (n == figQatar[i])
                            {
                                figQatar[i] = 0;
                            }
                        }
                        printf("\nDeseja inserir outra figurinha? (S/N)  ");
                        ch = getchar();
                        fflush(stdin);        

                    } while (ch == 'S' || ch != 'N');
                break;

                case 2: //Inserção Equador
                    
                    printf("\n Realizando a Inserção para a seleção do Equador!");
                    printf("\n Não se preocupe com a ordem! O programa ordena pra você!");
                    printf("\n ----------------------------------------------------------------");
                    
                    do{
                        
                        printf("\nDigite o número da figurinha:  ");
                        scanf("%d", &n);
                        rootEquador = insertEquador(rootEquador, n); 
                        getchar();

                         for (int i = 0; i <=20; i++)
                        {
                            if (n == figEquador[i])
                            {
                                figEquador[i] = 0;
                            }
                            
                        }

                        printf("\nDeseja inserir outra figurinha? (S/N)  ");
                        ch = getchar();
                        fflush(stdin);        

                    } while (ch == 'S' || ch != 'N');
                break;

                case 3: //Inserção Senegal

                    printf("\n Realizando a Inserção para a seleção do Senegal!");
                    printf("\n Não se preocupe com a ordem! O programa ordena pra você!");
                    printf("\n ----------------------------------------------------------------");
                    
                    do{
                        printf("\nDigite o número da figurinha:  ");
                        scanf("%d", &n);
                        rootSenegal = insertSenegal(rootSenegal, n);
                        getchar();

                         for (int i = 0; i <=20; i++)
                        {
                            if (n == figSenegal[i])
                            {
                                figSenegal[i] = 0;
                            }
                            
                        }

                        printf("\nDeseja inserir outra figurinha? (S/N)  ");
                        ch = getchar();
                        fflush(stdin);        

                    } while (ch == 'S' || ch != 'N');
                break;
                            
                case 4: //Inserção Holanda

                    printf("\n Realizando a Inserção para a seleção dos Países Baixos!");
                    printf("\n Não se preocupe com a ordem! O programa ordena pra você!");
                    printf("\n ----------------------------------------------------------------");

                    do{
                        printf("\nDigite o número da figurinha:  ");
                        scanf("%d", &n);
                        rootHolanda = insertHolanda(rootHolanda, n);
                        getchar();

                         for (int i = 0; i <=20; i++)
                        {
                            if (n == figHolanda[i])
                            {
                                figHolanda[i] = 0;
                            }
                        }

                        printf("\nDeseja inserir outra figurinha? (S/N)  ");
                        ch = getchar();
                        fflush(stdin);        

                    } while (ch == 'S' || ch != 'N');
                break;

                default:
                    break;
            } 
        }break;
        
        case 2:
        //Esta parte trabalha a pesquisa de um elemento na sua respectiva árvore. 
        //O usuário deve escolher uma entre 4 opções ou então digitar 5 para retornar ao menu inicial.
        //O código mantém a mesma estrutura para todas as seleções, portanto os comentário realizados para a seleção do catar também são aplicados para as outras seleções.
        {
            //O programa opera com a função insert definida pelo grupo, apresentada na pasta lib/search.c
            //Inicialmente o programa solicita ao usuário para que um numero para ser pesquisado, e depois pergunta a ele deseja fazer uma nova pesquisa.
            //Caso a resposta seja não, o usuário pressiona a tecla N e retorna ao menu inicial.
            //Após receber o valor, é necessário chamar a função de pesquisa na árvore binária.
            //A função irá receber o valor do ENDEREÇO da raiz e o DADO (n) a ser pesquisado na árvore em questão do respectivo país.
            //Conforme o retorno da função de pesquisa (1 ou 0), será feita a exibição de que se a figurinha existe ou não na árvore, para então apresentr ao usuario.
            //Como foram identificados alguns problemas referentes à continuidade do programa, os comandos getchar(linha 238) e fflush(stdin)(248) foram inseridos para
            //garantir a continuidade e a operação correta do programa (foram os que resolveram o problema de passar direto pelas perguntas seguintes).
            
            printf("Qual selecao voce deseja Buscar?\n");
            printf("1<Qatar>\n");
            printf("2<Equador>\n");
            printf("3<Senegal>\n");
            printf("4<Países Baixos>\n");
            printf("Digite o numero da seleção escolhida, ou 5 para voltar ao menu inicial:  ");
            scanf("%d", &menu);
                switch (menu)
                {
                    case 1: //Pesquisa Qatar
                        do{
                            printf("\n Realizando a busca de figurinhas para a seleção do Qatar!");
                            printf("\nDigite o número da figurinha:  ");
                            scanf("%d", &pesq);
                            searchQatar(rootQatar, pesq);
                            getchar();
                            if (searchQatar(rootQatar, pesq) == 1)
                            {
                                printf("\n\nVoce já tem a figurinha QAT-%d", pesq);
                            }else
                            {
                                printf("\n\nVoce não tem a figurinha QAT-%d", pesq);
                            }
                            printf("\nDeseja buscar outra figurinha? (S/N)?  ");
                            ch = getchar();
                            fflush(stdin);

                        }while (ch == 'S' || ch != 'N');
                    break;

                    case 2: //Pesquisa Equador
                        do{
                            printf("\n Realizando a busca de figurinhas para a seleção do Equador");
                            printf("\nDigite o número da figurinha:  ");
                            scanf("%d", &pesq);
                            searchEquador(rootEquador, pesq);
                            getchar();

                            if (searchEquador(rootEquador, pesq) == 1)
                            {
                                printf("\n\nVoce já tem a figurinha EQU-%d", pesq);
                            }else
                            {
                                printf("\n\nVoce não tem a figurinha EQU-%d", pesq);
                            }
                            
                            printf("\nDeseja buscar outra figurinha? (S/N)?  ");
                            ch = getchar();
                            fflush(stdin);

                        }while (ch == 'S' || ch != 'N');
                    break;

                    case 3: //Pesquisa Senegal
                        do{
                            printf("\n Realizando a Busca de Figurinhas para a seleção do Senegal!");
                            printf("\nDigite o número da figurinha:  ");
                            scanf("%d", &pesq);
                            searchSenegal(rootSenegal, pesq);
                            getchar();

                            if (searchSenegal(rootSenegal, pesq) == 1)
                            {
                                printf("\n\nVoce já tem a figurinha SEN-%d", pesq);
                            }else
                            {
                                printf("\n\nVoce não tem a figurinha SEN-%d", pesq);
                            }
                            
                            printf("\nDeseja buscar outra figurinha? (S/N)?  ");
                            ch = getchar();
                            fflush(stdin);

                        }while (ch == 'S' || ch != 'N');
                    break;
                                   
                    case 4://Pesquisa Holanda
                        do{
                            printf("\n Realizando a Busca de Figurinhas para a seleção dos Países Baixos!");
                            printf("\nDigite o número da figurinha:  ");
                            scanf("%d", &pesq);
                            searchHolanda(rootHolanda, pesq);
                            getchar();

                            if (searchHolanda(rootHolanda, pesq) == 1)
                            {
                                printf("\n\nVoce já tem a figurinha HOL-%d", pesq);
                            }else
                            {
                                printf("\n\nVoce não tem a figurinha HOL-%d", pesq);
                            }
                            
                            printf("\nDeseja buscar outra figurinha? (S/N)?  ");
                            ch = getchar();
                            fflush(stdin);

                        }while (ch == 'S' || ch != 'N');
                    break;
                    
                break;
                }
        }break; 

        case 3: 
        //Seleciona a opção de exibição das figurinhas.
        //O programa opera com a função inorder definida pelo grupo e apresentadas na pasta lib/exhibition.c.
        //A função inorder é recursiva e trabalha com a seguinte ordenação: ESQ - NÓ - DIR, permitindo a exibição em ordem das figurinhas.
        //Neste ponto também é realizada a exibição das figurinhas não obtidas, controladas pelo vetor definido inicialmente no primeiro caso de inserção
        //As figurinhas ainda não obtidas são aquelas em que a sua posição no vetor é diferente de zero, definidas conforme o algoritmo apresentado no case 1 - Inserção.
        //A exibição é realizada de maneira tradicional, com um laço for auxiliado por uma estrutura condicional IF.
        //Os laços são seguidos de uma outra verrificação condicional, que será realizada apenas se todos os elementos do vetor da respectiva seleção forem iguais a zero,
        //indicando assim que aquela seleção já está completa.
        { 
            printf("\nVocê já obteve as seguintes figurinhas: \n");
            printf("Qatar: \n");
            inorderQatar(rootQatar);
            printf("\n--------------------------------------------------\n");
            printf("Equador: \n");
            inorderEquador(rootEquador);
            printf("\n--------------------------------------------------\n");
            printf("Senegal: \n");
            inorderSenegal(rootSenegal);
            printf("\n--------------------------------------------------\n");
            printf("Holanda: \n");
            inorderHolanda(rootHolanda);
            printf("\n--------------------------------------------------\n");

            printf("\nVocê ainda não obteve as seguintes figurinhas: \n");
            printf("----->Qatar<----- \n");
                for (int i = 0; i < 20; i++)
                {
                    if (figQatar[i] != 0)
                    {
                        printf("%d - ", figQatar[i]);
                        
                    }else {c++;}
                }if (c == 20){
                    printf("\nVocê completou a selecão do Qatar!\n");
                }

            c = 0;
            printf("\n----->Equador<----- \n");
                for (int j = 0; j < 20; j++)
                {
                    if (figEquador[j] != 0)
                    {
                        printf("%d - ", figEquador[j]);
                    }else {c++;}
                }if (c == 20){
                        printf("\nVocê completou a selecão do Equador!\n");
                    }

            c = 0;
            printf("\n----->Senegal<----- \n");
                for (int k = 0; k < 20; k++)
                {
                    if (figSenegal[k] != 0)
                    {
                        printf("%d - ", figSenegal[k]);
                    }else {c++;}
                }if (c == 20){
                        printf("\nVocê completou a selecão do Senegal!\n");
                    } 
            c = 0;          
            printf("\n----->Países Baixos<----- \n");
                for (int l = 0; l < 20; l++)
                {
                    if (figHolanda[l] != 0)
                    {
                        printf("%d - ", figHolanda[l]);
                    }else {c++;}
                    
                }if (c == 20){
                        printf("\nVocê completou a selecão dos Países Baixos!\n");
                    } 
        }break;

        case 4: 
        //Seleciona a opção de exibição das figurinhas.
        //O programa opera com a função export definida pelo grupo e apresentada na pasta lib/print.c.
        //A função recebe a árvore a ser trabalhada e exporta separadamente cada um dos elementos presentes nela para cada país.
        //Por uma questão de tempo, não foi possível elaborar em conjunto a esse conceito, no qual deveriam ser exibidas as figurinhas ainda não obtidas
        //pelo usuário do programa. 
        {
            printf("\nGerando arquivo fig.txt....\n");
            exportQatar(rootQatar);
            exportEquador(rootEquador);
            exportSenegal(rootSenegal);
            exportHolanda(rootHolanda);

        }break;

        case 5: //seleciona a opção de saída do programa
        {
            printf("\nSaíndo do Programa....\n");
        }break;

        default:
            break;
        }
    }
}