#include <stdio.h>
#include <stdlib.h>

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

                printf("População: CARTA 1 = %d | CARTA 2 = %d\n", Populacao1, Populacao2);
                if (Populacao1 > Populacao2)
                {
                    printf("→ CARTA 1 venceu!\n");
                }
                else if (Populacao1 < Populacao2)
                {
                    printf("→ CARTA 2 venceu!\n");
                }
                else 
                {
                    printf("→ Empate!\n");
                }
                printf("Área: CARTA 1 = %.2f | CARTA 2 = %.2f\n", Area1, Area2);
                if (Area1 > Area2)
                {
                    printf("→ CARTA 1 venceu!\n");
                }
                else if (Area1 < Area2){

                
                    printf("→ CARTA 2 venceu!\n");
                }
                else
                {
                    printf("→ Empate!\n");
                }
                printf("PIB: CARTA 1 = %.2f | CARTA 2 = %.2f\n", PIB1, PIB2);
                if (PIB1 > PIB2)
                {
                    printf("→ CARTA 1 venceu!\n");
                }
                else if (PIB1 < PIB2)
                {
                    printf("→ CARTA 2 venceu!\n");
                }
                else {
                    printf("→ Empate!\n");
                }
                printf("Pontos Turísticos: CARTA 1 = %d | CARTA 2 = %d\n", turistico1, turistico2);
                if (turistico1 > turistico2)
                {
                    printf("→ CARTA 1 venceu!\n");
                }
                else if (turistico1 < turistico2)
                {
                    printf("→ CARTA 2 venceu!\n");
                }
                else
                {
                    printf("→ Empate!\n");
                }
                printf("Densidade Demográfica: CARTA 1 = %.2f | CARTA 2 = %.2f\n", DensidadePopulacional, DensidadePopulacional2);
                if (DensidadePopulacional < DensidadePopulacional2)
                {
                    printf("→ CARTA 1 venceu (menor densidade)!\n");
                }
                else if (DensidadePopulacional > DensidadePopulacional2)
                {
                    printf("→ CARTA 2 venceu (menor densidade)!\n");
                }
                else{
                    printf("→ Empate!\n");
                }
                break;
             

                case 2:
                  printf("\nAnalisando...............................\n\n");

                 printf("==== VAMOS COMPARAR ATRIBUTOS DE CADA CARTA ====\n");
                 printf("COMPARAÇÕES DISPONÍVEIS: \n");
                 printf("1. População\n");
                 printf("2. Área\n");
                 printf("3. PIB \n");
                 printf("4. Pontos Turísticos \n");
                 printf("5. Densidade Demográfica \n\n");

                 printf("Qual sua opção? \n");
                 scanf("%d",&opcao4);

                 switch (opcao4)
                 {
                 case 1:
                    printf("População CARTA 1 = %d | População CARTA 2 = %d \n",Populacao1,Populacao2);
                    if (Populacao1 > Populacao2)
                    {
                        printf("CARTA 1 VENCEU !!");
                    } else if (Populacao1 == Populacao2)
                    {
                        printf("Ambas tem o mesmo valor de população(EMPATE !!)\n");

                    }else 
                    {
                        printf("CARTA 2 VENCEU !!\n");
                    }
                    break;
                 case 2:
                    printf("ÁREA(km²) CARTA 1 = %.2f |ÁREA(km²) CARTA 2 = %.2f \n",Area1,Area2);
                    if (Area1 > Area2)
                    {
                        printf("CARTA 1 VENCEU !!\n");
                    } else if (Area1 == Area2)
                    {
                        printf("Ambas tem o mesmo valor de Área em km²(EMPATE !!)\n");

                    } else 
                    {
                        printf("CARTA 2 VENCEU !!\n");
                    }
                    break;
                 case 3:
                    printf("PIB CARTA 1 = R$ %.2f(Milhões ou Bilhões de Reais) |PIB CARTA 2 = R$ %.2f(Milhões ou Bilhões de Reais) \n", PIB1, PIB2);
                    if (PIB1 > PIB2)
                    {
                        printf("CARTA 1 VENCEU !!\n");
                    } else if (PIB1 == PIB2)
                    {
                        printf("Ambas tem o mesmo valor em PIB(EMPATE !!)\n");

                    } else
                    {
                        printf("CARTA 2 VENCEU !!\n");
                    }
                    break;
                 case 4:
                    printf("Pontos Turísticos CARTA 1 == %d |Pontos Turísticos CARTA 2 == %d \n",turistico1,turistico2);
                    if (turistico1 > turistico2)
                    {
                        printf("CARTA 1 VENCEU !!\n");
                    }else if (turistico1 == turistico2)
                    {
                        printf("Ambas tem o mesmo valor em Pontos Turísticos(EMPATE !!)\n");
                    } else
                    {
                       printf("CARTA 2 VENCEU !!\n");
                    }
                    
                    break;
                 case 5:
                    printf("Densidade Demografica CARTA 1 = %.2f | Densidade Demografica CARTA 2 = %.2f \n", DensidadePopulacional,DensidadePopulacional2);
                    if (DensidadePopulacional < DensidadePopulacional2)
                    {
                        printf("Carta 1 tem menos densidade(VENCEU !!)\n");
                    } else if (DensidadePopulacional == DensidadePopulacional2)
                    {
                        printf("Ambas tem a mesma Densidade Demografica(EMPATE !!)\n");
                    } else
                    {
                        printf("CARTA 2 VENCEU !!\n");    
                    }
                    break;
                 }

                 break;
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

                 printf("\n====================================\n");
                 printf("        OBRIGADO POR JOGAR !!");
                 printf("\n====================================\n\n");

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
