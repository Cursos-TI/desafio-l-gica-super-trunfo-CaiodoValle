#include <stdio.h>

 
             // Desafio Super Trunfo - Países
         // Tema 4 - Logica das Cartas Super Trunfo

        int main(){

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




              printf("-----Cadrasto Carta 1:----- \n \n");
                
              printf("Escolha uma letra entre A a G: \n");
             scanf(" %c", &Estado1);
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

               printf("-----Cadrasto Carta 2:----- \n \n");


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
              

               SuperPoderA = (float)Populacao1 + Area1 + PIB1 + turistico1 + (float)PIBperCapita + InversoDensidade1;
               SuperPoderB = (float)Populacao2 + Area2 + PIB2 + turistico2 + (float)PIBperCapita2 + InversoDensidade2;





                  printf("\n----CADASTRO COMPLETO DO CARTÃO 1----\n");

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

                  printf("\n----CADASTRO COMPLETO DO CARTÃO 2----\n");

                printf("Letra: %c \n", Estado2);
                printf("Codigo da carta: %s \n", Codigo2);
                printf("Cidade: %s \n", Cidade2);
                printf("População: %d  de habitantes \n", Populacao2);
                printf("Área em km²: %.2f km²\n", Area2);
                printf("PIB da Cidade: %.2f Bilhões de Reais \n",PIB2);
                printf("Total de Pontos Turísticos: %d \n ",turistico2);
                printf("Densidade Populacional: %.2f hab/km²\n",DensidadePopulacional2);
                printf("PIB per Capita: R$ %.2f Reais\n",PIBperCapita2);
                printf("Super Poder: %.2f",SuperPoderB);
                


                 printf("\n\n====RESULTADOS====\n\n");

                 printf(" Ganhador de cada modalidade:(CARTA 1) OU (CARTA 2) \n \n");
                 printf(" População: Carta 1: %d  | CARTA 2 = %d\n ",Populacao1,Populacao2);
                 if (Populacao1 > Populacao2)
                 {
                   printf("Carta 1 Venceu !! \n\n");
                 } else {
                   printf("Carta 2 Venceu !!  \n\n");
                 }
                 
                  
                  printf(" Área: CARTA 1 = %.2f  km² | CARTA 2 = %2.f  km²\n",Area1,Area2);
                  if (Area1 > Area2)
                  {
                    printf("Carta 1 Venceu !! \n\n");
                  } else {
                    printf("Carta 2 Venceu !!  \n\n");
                  }
                  

                  printf(" PIB: CARTA 1 = %.2f | CARTA 2 = %.2f  \n",PIB1,PIB2);
                  if (PIB1 >= PIB2)
                  {
                    printf("Carta 1 Venceu !! \n\n");
                  } else{
                    printf("Carta 2 Venceu !! \n\n");
                  }
                  

                  printf(" PIB per Capita: CARTA 1 = %.2f | CARTA 2 = %.2f\n",PIBperCapita,PIBperCapita2);
                  if (PIBperCapita > PIBperCapita2)
                  {
                    printf("Carta 1 Venceu !! \n\n");
                  } else{
                    printf("Carta 2 Venceu !!  \n\n");
                  }
                  

                  printf("Densidade Populacional: CARTA 1 = %.2f | CARTA 2 = %.2f\n",DensidadePopulacional,DensidadePopulacional2);
                  if (DensidadePopulacional < DensidadePopulacional2)
                  {
                    printf("Carta 1 Venceu !! \n\n");
                  } else{
                    printf("Carta 2 Venceu !!  \n\n");
                  }
                  

                  printf(" Super Poder: CARTA 1 = %.2f | CARTA 2 = %.2f\n ",SuperPoderA,SuperPoderB);
                  if ( SuperPoderA > SuperPoderB)
                  {
                    printf("Carta 1 é mais poderosa !! \n\n");
                  } else {
                    printf(" Carta 2 é mais poderosa !! \n\n");
                  }
                  

                  printf("Pontos Turísticos: CARTA 1 = %d | CARTA 2 = %d\n ",turistico1,turistico2);
                  if (turistico1 > turistico2)
                  {
                    printf("Carta 1 Ganhou !! \n\n");
                  } else{
                    printf("Carta 2 Ganhou !! \n\n");
                  }
                  
                  



                



                  // percebe-se que está tudo organizado e tendo uma funcionalidade expecional.
                  // O projeito feito para o Nível Novato Lógica do Super Trunfo

                return 0;
        }
