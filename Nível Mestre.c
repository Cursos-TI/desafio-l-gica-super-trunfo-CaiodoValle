#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

      int opcao,opcao2,opcao3,opcao4;
      char Estado1,Estado2;
      char Codigo1[20],Codigo2[20];
      char Cidade1[50],Cidade2[50];
      int Populacao1 ,Populacao2 ;
      float Area1,Area2;
      float PIB1,PIB2;
      int turistico1,turistico2;
      float DensidadePopulacional,DensidadePopulacional2;
      float InversoDensidade1,InversoDensidade2;
      double PIBperCapita,PIBperCapita2;
      float SuperPoderA,SuperPoderB;
      int pontos_carta1 = 0;
      int pontos_carta2 = 0; 

        printf("=======================================\n");
        printf("         BATALHA SUPER TRUNFO 2.0v     \n");
        printf("=======================================\n\n");

        printf("==== MENU PRINCIPAL ====\n");
        printf("1. iniciar o jogo \n");
        printf("2. Regras do jogo \n");
        printf("3. Sair do jogo \n");


        printf("Oque você quer fazer: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n==== CADASTRO DA PRIMEIRA CARTA ==== \n");
            printf("Escolha uma letra em A a G: \n");
            scanf(" %c",&Estado1);
            printf("\n");

            printf("Código da Carta: (ex: A01,A02 )\n");
            scanf("%s", Codigo1);
            printf("\n");

            printf("Digite a Cidade:\n");
            scanf(" %[^\n]", Cidade1);
            printf("\n");

            printf("Quantidade da População: \n");
            scanf("%d", &Populacao1);
            printf("\n");

            printf("Área em km²: \n");
            scanf("%f", &Area1);
            printf("\n");

            printf("PIB da Cidade: \n");
            scanf("%f", &PIB1);
               printf("\n");

               DensidadePopulacional = (double) Populacao1 / Area1;
                InversoDensidade1 = Area1 / (float)Populacao1;

              PIBperCapita = (double) (PIB1 * 1000000000.0) / Populacao1;

            printf("Pontos Turísticos: \n");
            scanf("%d", &turistico1);
            printf(" \n \n");

            SuperPoderA = (float)Populacao1 + Area1 + PIB1 + turistico1 + (float)PIBperCapita + InversoDensidade1;

            printf("Deseja Continuar o Cadastro das Cartas?\n");
            printf("1. sim \n");
            printf("2. Não \n\n");
            
            printf("Digite sua opção: \n");
            scanf("%d",&opcao2);
            switch (opcao2)
            {
            case 1:
                printf("#### CONTINUANDO O CADASTRO ####\n");
                printf("==== CADASTRO DA SEGUNDA CARTA ====\n\n");

             printf("Escolha uma letra entre A a G: \n");
             scanf(" %c", &Estado2);
               printf("\n");
            
             printf("Código da Carta: (ex: A01,A02 )\n");
             scanf("%s", Codigo2);
               printf("\n");

             printf("Digite a Cidade:\n");
             scanf(" %[^\n]", Cidade2);
               printf("\n");
             
             printf("Quantidade da População: \n");
             scanf("%d", &Populacao2);
               printf("\n");
               
             printf("Área em km²: \n");
             scanf("%f", &Area2);
               printf("\n");

               DensidadePopulacional2 = (double) Populacao2 / Area2;
               InversoDensidade2 = Area2 / (float)Populacao2;

             printf("PIB da Cidade: \n");
             scanf("%f", &PIB2);
               printf("\n");

              PIBperCapita2 = (double) (PIB2 * 1000000000.0) / Populacao2;

             printf("Pontos Turísticos: \n");
             scanf("%d", &turistico2);
              

               
               SuperPoderB = (float)Populacao2 + Area2 + PIB2 + turistico2 + (float)PIBperCapita2 + InversoDensidade2;

               printf("Deseja ver o Cadastro das cartas todas comparações disponíveis?\n");
               printf("1. sim (Mostrar todas)\n");
               printf("2. Não (Escolher Atributo específico)\n");

               printf("Digite sua opção: \n");
               scanf("%d",&opcao3);
             switch (opcao3)
              {
            case 1:
                printf("\nMOSTRANDO TODOS OS DADOS E COMPARAÇÕES...\n\n");
                
                 printf("\n ==== CADASTRO COMPLETO DO CARTÃO 1 ====\n");

                 printf("Letra: %c \n", Estado1);
                 printf("Codigo da carta: %s \n", Codigo1);
                 printf("Cidade: %s \n", Cidade1);
                 printf("População: %d de habitantes \n", Populacao1);
                 printf("Área em km²: %.2f km²\n", Area1);
                 printf("PIB da Cidade: %.2f Bilhões de Reais \n",PIB1);
                 printf("Total de Pontos Turísticos: %d\n ",turistico1);
                 printf("Densidade Populacional: %2f hab/km²\n",DensidadePopulacional);
                 printf("PIB per Capita: R$ %2f Reais\n",PIBperCapita);
                 printf("Super Poder: %.2f",SuperPoderA);
                 printf("\n\n");

                 printf("MOSTRANDO CARTA 2....................\n");

                 printf("\n==== CADASTRO COMPLETO DO CARTÃO 2 ====\n");

                 printf("Letra: %c \n", Estado2);
                 printf("Codigo da carta: %s \n", Codigo2);
                 printf("Cidade: %s \n", Cidade2);
                 printf("População: %d  de habitantes \n", Populacao2);
                 printf("Área em km²: %.2f km²\n", Area2);
                 printf("PIB da Cidade: %.2f Bilhões de Reais \n",PIB2);
                 printf("Total de Pontos Turísticos: %d\n ",turistico2);
                 printf("Densidade Populacional: %.2f hab/km²\n",DensidadePopulacional2);
                 printf("PIB per Capita: R$ %.2f Reais\n",PIBperCapita2);
                 printf("Super Poder: %.2f",SuperPoderB);


                printf("População: CARTA 1 = %d | CARTA 2 = %d\n", Populacao1, Populacao2);
                if (Populacao1 > Populacao2)
                {
                    pontos_carta1++;
                    printf("→ CARTA 1 venceu!\n");
                    
                }
                else if (Populacao1 < Populacao2)
                {
                    pontos_carta2++;
                    printf("→ CARTA 2 venceu!\n");
                    
                }
                else 
                {
                    printf("→ Empate!\n");
                }
                printf("Área: CARTA 1 = %.2f | CARTA 2 = %.2f\n", Area1, Area2);
                if (Area1 > Area2)
                {
                    pontos_carta1++;
                    printf("→ CARTA 1 venceu!\n");
                    
                }
                else if (Area1 < Area2)
                {
                    pontos_carta2++;
                    printf("→ CARTA 2 venceu!\n"); 
                }
                else
                {
                    printf("→ Empate!\n");
                }
                printf("PIB: CARTA 1 = %.2f | CARTA 2 = %.2f\n", PIB1, PIB2);
                if (PIB1 > PIB2)
                {
                    pontos_carta1++;
                    printf("→ CARTA 1 venceu!\n");
                    
                }
                else if (PIB1 < PIB2)
                {
                    pontos_carta2++;
                    printf("→ CARTA 2 venceu!\n");
                  
                }
                else {
                    printf("→ Empate!\n");
                }
                printf("Pontos Turísticos: CARTA 1 = %d | CARTA 2 = %d\n", turistico1, turistico2);
                if (turistico1 > turistico2)
                {
                    pontos_carta1++;
                    printf("→ CARTA 1 venceu!\n");
                    
                }
                else if (turistico1 < turistico2)
                {
                    pontos_carta2++;
                    printf("→ CARTA 2 venceu!\n");
                    
                }
                else
                {
                    printf("→ Empate!\n");
                }
                printf("Densidade Demográfica: CARTA 1 = %.2f | CARTA 2 = %.2f\n", DensidadePopulacional, DensidadePopulacional2);
                if (DensidadePopulacional < DensidadePopulacional2)
                {
                    pontos_carta1++;
                    printf("→ CARTA 1 venceu (menor densidade)!\n");
                    
                }
                else if (DensidadePopulacional2 < DensidadePopulacional)
                {
                    pontos_carta2++;
                    printf("→ CARTA 2 venceu (menor densidade)!\n");
                    
                }
                else{
                    printf("→ Empate!\n");
                }
                break;
              

                case 2:
                  printf("\nAnalisando...............................\n\n");

                 printf("==== VAMOS VERIFICAR ATRIBUTOS DA CADA CARTA 1 E 2 ====\n");
                 printf(" ATRIBUTOS DISPONÍVEIS: \n");
                 printf("1. População\n");
                 printf("2. Área\n");
                 printf("3. PIB \n");
                 printf("4. Pontos Turísticos \n");
                 printf("5. Densidade Demográfica \n\n");

                 printf("Qual sua opção? \n");
                 scanf("%d",&opcao4);
                    // Variável local para armazenar o resultado da comparação (0 ou 1)
                  int resultado_comparacao = 0;

                 switch (opcao4)
                 {
                 case 1:
                    printf("População: CARTA 1 = %d | CARTA 2 = %d\n", Populacao1, Populacao2);
                    // Uso da lógica ternária: Se Pop1 > Pop2, resultado é 1 (CARTA 1 vence)
                    resultado_comparacao = Populacao1 > Populacao2 ? 1 : 0; 
                    pontos_carta1 += resultado_comparacao; // Adiciona 1 ou 0
                    pontos_carta2 += (Populacao2 > Populacao1 ? 1 : 0); // Adiciona 1 ou 0
                    break;
                 case 2:
                   printf("Área km²: CARTA 1 = %.2f | CARTA 2 = %.2f\n", Area1, Area2);
                   // Uso da lógica ternária: Se area1 > area2, resultado é 1 (CARTA 1 vence)
                    resultado_comparacao = Area1 > Area2 ? 1 : 0; 
                    pontos_carta1 += resultado_comparacao; // Adiciona 1 ou 0
                    pontos_carta2 += (Area2 > Area1 ? 1 : 0); // Adiciona 1 ou 0
                    break;
                 case 3:
                    printf("PIB: CARTA 1 = %.2f | CARTA 2 = %.2f\n", PIB1, PIB2);
                   // Uso da lógica ternária: Se  PIB1 > PIB2, resultado é 1 (CARTA 1 vence)
                    resultado_comparacao = PIB1 > PIB2 ? 1 : 0; 
                    pontos_carta1 += resultado_comparacao; // Adiciona 1 ou 0
                    pontos_carta2 += (PIB2 > PIB1 ? 1 : 0); // Adiciona 1 ou 0
                    break;
                 case 4:
                    printf("Turísticos : CARTA 1 = %d | CARTA 2 = %d\n", turistico1,turistico2);
                   // Uso da lógica ternária: Se  turísticos1 > turísticos2, resultado é 1 (CARTA 1 vence)
                    resultado_comparacao = turistico1 > turistico2 ? 1 : 0; 
                    pontos_carta1 += resultado_comparacao; // Adiciona 1 ou 0
                    pontos_carta2 += (turistico2 >  turistico1 ? 1 : 0); // Adiciona 1 ou 0
                    break;
                 case 5:
                 printf("Densidade Demográfica : CARTA 1 = %.2f | CARTA 2 = %.2f\n", DensidadePopulacional,DensidadePopulacional2);
                   // Uso da lógica ternária: Se  DensidadePop < DensidadePop2, resultado é 1 (CARTA 1 vence)
                    resultado_comparacao = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0; 
                    pontos_carta1 += resultado_comparacao; // Adiciona 1 ou 0
                    pontos_carta2 += (DensidadePopulacional2 < DensidadePopulacional ? 1 : 0); // Adiciona 1 ou 0
                 break;
                default:
                  printf("Opção de atributo inválida. Nenhum ponto atribuído.\n");
                  break;

                  }

               break; // Sai do switch (opcao3)

              }

                printf("\n#### RESULTADO DA BATALHA ####\n");
                printf("Pontuação Final: CARTA 1 = %d | CARTA 2 = %d\n", pontos_carta1, pontos_carta2);
                
                if (pontos_carta1 == pontos_carta2)
                {
                   printf("Empate !!\n");
                } else if ( pontos_carta1 > pontos_carta2)
                {
                    printf("Parabéns você venceu\n");
                } else if ( pontos_carta1 < pontos_carta2)
                {
                    printf("VOCÉ PERDEU !!!\n");
                }
          break;

            case 2:
                 printf("\n ==== CADASTRO COMPLETO DO CARTÃO 1 ====\n");

                 printf("Letra: %c \n", Estado1);
                 printf("Codigo da carta: %s \n", Codigo1);
                 printf("Cidade: %s \n", Cidade1);
                 printf("População: %d de habitantes \n", Populacao1);
                 printf("Área em km²: %.2f km²\n", Area1);
                 printf("PIB da Cidade: %.2f Bilhões de Reais \n",PIB1);
                 printf("Total de Pontos Turísticos: %d \n ",turistico1);
                 printf("Densidade Populacional: %2f hab/km²\n",DensidadePopulacional);
                 printf("PIB per Capita: R$ %2f Reais\n",PIBperCapita);
                 printf("Super Poder: %.2f",SuperPoderA);
                 printf("\n");

                 printf("\nEncerrando o jogo.........................\n");

                break;
          }
        break;

        case 2:
            printf("        ==== REGRAS DO JOGO ====\n");
            printf("1. Registre suas Cartas(CARTA 1 E CARTA 2)\n\n");
            printf("2. Você tem opção depois do cadastro 1 continuar o jogo ou não...\n");
            printf("...caso não escolha prosseguir ira exibir a carta e consecutivamente encerra o jogo.\n\n");
            printf("3. Após o Registro aparecerá a escolha de exibir o cadastro ou não.\n\n");
            printf("3. Você pode escolher quais atributos disponíveis serão comparados.\n\n ");
            printf("4. Toda escolha de atribuição será feita uma vez...\n");
            printf("... e com isso ocasionando no final o encerramento do jogo.\n\n");
            printf("5. Toda vez que encerrar terá que cadastrar as cartas denovo. \n");
             break;

        case 3:
            printf("\nEncerrando o jogo.........................\n");
           break;
        default:
            printf("Opção invalida!!(escolha a opção 1,2 ou 3)");
            break;
        
          }

            printf("\n====================================\n");
            printf("        OBRIGADO POR JOGAR !!");
            printf("\n====================================\n\n");
    return 0;
    }