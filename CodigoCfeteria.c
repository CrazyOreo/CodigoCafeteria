#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    //Area onde já deixei a opção aberta de tanto ler quanto escrever no TXT enquanto roda o codigo.
FILE *arquivo;
arquivo = fopen("lista.txt", "a+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    //Aqui é onde dei valores aos itens, para serem colocados no TXT
int comando=0;
float valor_total = 0.0;
char char1[] = "agua               |R$3,50";
char char2[] = "aguaCoco           |R$3,00";
char char3[] = "aguaGas            |R$4,50";
char char4[] = "assados            |R$7,00";
char char5[] = "balas              |R$0,30";
char char6[] = "bananinha          |R$3,00";
char char7[] = "belvita            |R$3,00";
char char8[] = "bolo de pote       |R$9,00";
char char9[] = "brincos            |R$10,00";
char char10[] = "brigadeirounid    |R$3,50";
char char11[] = "bizbarrinha       |R$4,00";
char char12[] = "cafeG             |R$8,00";
char char13[] = "cafe/leiteG       |R$9,00";
char char14[] = "cafe/leiteP       |R$7,00";
char char15[] = "capuccino         |R$8,00";
char char16[] = "chaG              |R$3,50";
char char17[] = "chaQ              |R$5,00";
char char18[] = "chocomenta        |R$0,50";
char char19[] = "clubesocial       |R$3,50";
char char20[] = "folhata           |R$5,00";
char char21[] = "fosforos          |R$2,00";
char char22[] = "fofura            |R$4,00";
char char23[] = "guaraviton        |R$4,50";
char char24[] = "H2O               |R$8,00";
char char25[] = "halls             |R$3,00";
char char26[] = "kitkat            |R$3,50";
char char27[] = "mousse            |R$8,00";
char char28[] = "negresco          |R$5,00";
char char29[] = "pacoquinha        |R$1,00";
char char30[] = "paochapa          |R$4,00";
char char31[] = "paoqueijo         |R$4,00";
char char32[] = "passatempo        |R$5,00";
char char33[] = "pastelzinho doce  |R$6,00";
char char34[] = "pedemoca          |R$3,00";
char char35[] = "pelucia           |R$20,00";
char char36[] = "refri600          |R$9,00";
char char37[] = "refriLata         |R$6,00";
char char38[] = "refricacu         |R$3,00";
char char39[] = "sanduichenatural  |R$11,00";
char char40[] = "sonho de valsa    |R$2,00";
char char41[] = "suco              |R$3,00";
char char42[] = "toddynho          |R$4,00";
char char43[] = "trident           |R$4,00";
char char44[] = "wafer             |R$6,00";
char char45[] = "caixinha";
char char46[] = "assados           |R$7,00";
char char47[] = "cafeP             |R$6,00";



    system("cls");
    int opcao;
    do {
            //Tela inicial do codigo.
        system ("color f4");
        system("cls");
        printf ("BEM VINDOS AO PROGRAMA DA SUA CAFETERIA!\n");
        printf("      +----------------------+\n");
        printf("      |         Menu         |\n");
        printf("      |1.   Exibir lista     |\n");
        printf("      |2.  Adicionar item    |\n");
        printf("      |3.       Sair         |\n");
        printf("      |  Escolha uma opcao:  |\n");
        printf("      +----------------------+\n");
        printf ("->");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                system("cls");
    printf("Seus itens:\n");
    printf("1: %s\n", char1);
    printf("2: %s\n", char2);
    printf("3: %s\n", char3);
    printf("4: %s\n", char4);
    printf("5: %s\n", char5);
    printf("6: %s\n", char6);
    printf("7: %s\n", char7);
    printf("8: %s\n", char8);
    printf("9: %s\n", char9);
    printf("10: %s\n", char10);
    printf("11: %s\n", char11);
    printf("12: %s\n", char12);
    printf("13: %s\n", char13);
    printf("14: %s\n", char14);
    printf("15: %s\n", char15);
    printf("16: %s\n", char16);
    printf("17: %s\n", char17);
    printf("18: %s\n", char18);
    printf("19: %s\n", char19);
    printf("20: %s\n", char20);
    printf("21: %s\n", char21);
    printf("22: %s\n", char22);
    printf("23: %s\n", char23);
    printf("24: %s\n", char24);
    printf("25: %s\n", char25);
    printf("26: %s\n", char26);
    printf("27: %s\n", char27);
    printf("28: %s\n", char28);
    printf("29: %s\n", char29);
    printf("30: %s\n", char30);
    printf("31: %s\n", char31);
    printf("32: %s\n", char32);
    printf("33: %s\n", char33);
    printf("34: %s\n", char34);
    printf("35: %s\n", char35);
    printf("36: %s\n", char36);
    printf("37: %s\n", char37);
    printf("38: %s\n", char38);
    printf("39: %s\n", char39);
    printf("40: %s\n", char40);
    printf("41: %s\n", char41);
    printf("42: %s\n", char42);
    printf("43: %s\n", char43);
    printf("44: %s\n", char44);
    printf("45: %s\n", char45);
    printf("46: %s\n", char46);
    printf("47: %s\n", char47);
printf("Deseja sair da lista? Se sim digite 1\n");
scanf("%i", &comando);
    if (comando=1){
                break;
                comando=0;}
            case 2:
               // Adicionar um item à lista
                printf("Digite o numero do item que deseja adicionar: ");
                scanf("%d", &opcao);
                if (opcao < 1 || opcao > 47) {
                    printf("Numero invalido!\n");
                } else {
                    // Adiciona o item correspondente ao número escolhido ao arquivo
                    switch (opcao) {
                        case 1:
                            fprintf(arquivo, "agua              |R$3,50\n");
                            valor_total += 3.50;
                            break;
                        case 2:
                            fprintf(arquivo, "aguaCoco          |R$3,00\n");
                            valor_total += 3.00;
                            break;
                        case 3:
                            fprintf(arquivo, "aguaGas           |R$4,50\n");
                            valor_total += 4.50;
                            break;
                        case 4:
                            fprintf(arquivo, "assados           |R$7,00\n");
                            valor_total += 7.00;
                            break;
                        case 5:
                            fprintf(arquivo, "balas             |R$0,30\n");
                            valor_total += 0.30;
                            break;
                        case 6:
                            fprintf(arquivo, "bananinha         |R$3,00\n");
                            valor_total += 3.00;
                            break;
                        case 7:
                            fprintf(arquivo, "belvita           |R$3,00\n");
                            valor_total += 3.00;
                            break;
                        case 8:
                            fprintf(arquivo, "bolo de pote      |R$9,00\n");
                            valor_total += 9.00;
                            break;
                    case 9:
    fprintf(arquivo, "brincos           |R$10,00\n");
    valor_total += 10.00;
    break;
case 10:
    fprintf(arquivo, "brigadeirounid    |R$3,50\n");
    valor_total += 3.50;
    break;
case 11:
    fprintf(arquivo, "bizbarrinha       |R$4,00\n");
    valor_total += 4.00;
    break;
case 12:
    fprintf(arquivo, "cafeG             |R$8,00\n");
    valor_total += 8.00;
    break;
case 13:
    fprintf(arquivo, "cafe/leiteG       |R$9,00\n");
    valor_total += 9.00;
    break;
case 14:
    fprintf(arquivo, "cafe/leiteP       |R$7,00\n");
    valor_total += 7.00;
    break;
case 15:
    fprintf(arquivo, "capuccino         |R$8,00\n");
    valor_total += 8.00;
    break;
case 16:
    fprintf(arquivo, "chaG              |R$3,50\n");
    valor_total += 3.50;
    break;
case 17:
    fprintf(arquivo, "chaQ              |R$5,00\n");
    valor_total += 5.00;
    break;
case 18:
    fprintf(arquivo, "chocomenta        |R$0,50\n");
    valor_total += 0.50;
    break;
case 19:
    fprintf(arquivo, "clubesocial       |R$3,50\n");
    valor_total += 3.50;
    break;
case 20:
    fprintf(arquivo, "folhata           |R$5,00\n");
    valor_total += 5.00;
    break;
case 21:
    fprintf(arquivo, "fosforos          |R$2,00\n");
    valor_total += 2.00;
    break;
case 22:
    fprintf(arquivo, "fofura            |R$4,00\n");
    valor_total += 4.00;
    break;
case 23:
    fprintf(arquivo, "guaraviton        |R$4,50\n");
    valor_total += 4.50;
    break;
case 24:
    fprintf(arquivo, "H2O               |R$8,00\n");
    valor_total += 8.00;
    break;
case 25:
    fprintf(arquivo, "halls             |R$3,00\n");
    valor_total += 3.00;
    break;
case 26:
    fprintf(arquivo, "kitkat            |R$3,50\n");
    valor_total += 3.50;
    break;
case 27:
    fprintf(arquivo, "mousse            |R$8,00\n");
    valor_total += 8.00;
    break;
case 28:
    fprintf(arquivo, "negresco          |R$5,00\n");
    valor_total += 5.00;
    break;
case 29:
    fprintf(arquivo, "pacoquinha        |R$1,00\n");
    valor_total += 1.00;
    break;
case 30:
    fprintf(arquivo, "paochapa          |R$4,00\n");
    valor_total += 4.00;
    break;
case 31:
    fprintf(arquivo, "paoqueijo         |R$4,00\n");
    valor_total += 4.00;
    break;
case 32:
    fprintf(arquivo, "passatempo        |R$5,00\n");
    valor_total += 5.00;
    break;
case 33:
    fprintf(arquivo, "pastelzinho doce  |R$6,00\n");
    valor_total += 6.00;
    break;
case 34:
    fprintf(arquivo, "pedemoca          |R$3,00\n");
    valor_total += 3.00;
    break;
case 35:
    fprintf(arquivo, "pelucia           |R$20,00\n");
    valor_total += 20.00;
    break;
case 36:
    fprintf(arquivo, "refri600          |R$9,00\n");
    valor_total += 9.00;
    break;
case 37:
    fprintf(arquivo, "refriLata         |R$6,00\n");
    valor_total += 6.00;
    break;
case 38:
    fprintf(arquivo, "refricacu         |R$3,00\n");
    valor_total += 3.00;
    break;
case 39:
    fprintf(arquivo, "sanduichenatural  |R$11,00\n");
    valor_total += 11.00;
    break;
case 40:
    fprintf(arquivo, "sonho de valsa    |R$2,00\n");
    valor_total += 2.00;
    break;
case 41:
    fprintf(arquivo, "suco              |R$3,00\n");
    valor_total += 3.00;
    break;
case 42:
    fprintf(arquivo, "toddynho          |R$4,00\n");
    valor_total += 4.00;
    break;
case 43:
    fprintf(arquivo, "trident           |R$4,00\n");
    valor_total += 4.00;
    break;
case 44:
    fprintf(arquivo, "wafer             |R$6,00\n");
    valor_total += 6.00;
    break;
case 45:
    fprintf(arquivo, "caixinha\n");
    break;
case 46:
    fprintf(arquivo, "assados           |R$7,00\n");
    valor_total += 7.00;
    break;
case 47:
    fprintf(arquivo, "cafeP             |R$6,00\n");
    valor_total += 6.00;
    break;
                        default:
                            printf("Opcao invalida.\n");
                    }
                    printf("Item adicionado com sucesso!\n");
                }
                break;
            case 3:
                printf("Encerrando o programa.\n");
                printf("Eu te amo amor, um bom descanso!\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 3);
    fprintf(arquivo, "\nTotal: %.2f$\n", valor_total);
   fclose(arquivo);

    return 0;
}
