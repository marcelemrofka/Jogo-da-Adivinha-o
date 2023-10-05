																		//Marcele :)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
	
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("\t\t\t\t\t\t\t\tSeja bem vindo ao joguinho da adivinhacao!\n\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");

    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;
    int opcao;

    double pontos = 1000;

    srand(time(0));
    int numerosecreto = rand() % 100;
    
    printf(" O QUE VOCE DESEJA?\n\n 1- VER INSTRUCOES \n 2- INICIAR JOGO\n");
    scanf("%i", & opcao);
    
	if(opcao == 1){
		printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("-O jogo consiste em encontrar o numero secreto. Para isso, conforme sao feitos chutes, o programa dara dicas quanto a proximidade do algarismo oculto.\n\n\n"); 
		
		system("pause");
		system("cls");
		
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\t\t\t\t\t\tINFORMACOES IMPORTANTES:\n\n");
		printf("- Ao iniciar o jogo, o usuario devera escolher um dos tres niveis de dificuldade:\n\n"); 
		printf("> NIVEL 1 (FACIL): O jogador tera 20 tentativas de apostas ate que o jogo se encerre;\n\n");
		printf("> NIVEL 2 (MEDIO): O jogador tera 15 tentativas de apostas ate que o jogo se encerre;\n\n"); 
		printf("> NIVEL 3 (DIFICIL): O jogador tera 10 tentativas de apostas ate que o jogo se encerre.\n\n"); 
		printf("- A pontuacao, mostrada ao final da partida, e gerada a partir da quantidade de tentativas do jogador. Quanto menos tentativas feitas, mais serao os pontos adquiridos.\n\n");
		printf("- O chute do usuario nao pode ser um numero negativo!\n\n");
		printf("- Caso o jogador infome uma opcao de nivel diferente das disponiveis, o jogo sera iniciado no nivel 1.\n\n");
		printf("- Caso o jogador insira algum caractere diferente, depois da opcao digitada, o programa ira ser encerrado, aparecendo a mensagem de derrota.");
		printf("- Caso o jogador informe uma opcao diferente no que se diz respeito a visualizacao da intrucao, a partida sera iniciada sem a presenca da mesma.\n\n)");
		printf(" * Dica: o numero secreto esta entre 0-99 *\n\n");

		system("pause");
		system("cls");
	
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\t\t\t\t\tSua partida sera iniciada! Boa sorte!\n\n");
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		
		system("pause");
		system("cls");
		
		}else if( opcao == 2){
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("Sua partida sera iniciada! Boa sorte!\n\n");
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
		
		system("pause");
		system("cls");
		
		}else{
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\t\t\t   Opcao nao identificada! A partida sera iniciado sem as instrucoes.\n"); 
		printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
		}
		
		
		printf("(1) Facil (2) Medio (3) Dificil\n\n");
    	printf("Digite em qual nivel de dificuldade voce deseja jogar:");
    	scanf("%d", &nivel);
    	printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    	
    	if (nivel == 1){
    		totaldetentativas = 20;
			}else if(nivel == 2){
				totaldetentativas = 15;
				}else if (nivel == 3){
					totaldetentativas = 10;
				}else{
					totaldetentativas = 20;
					    printf("Opcao nao identificada. O jogo sera iniciado no nivel 1\n");
				}
				
    for(int i = 1; i <= totaldetentativas; i++) {

        printf("-> Tentativa %d de %d\n", i, totaldetentativas);

        printf("Chute um numero: ");
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Voce nao pode chutar numeros negativos! Essa tentativa nao sera contada!\n");
            i--;
            continue;
        }

        acertou = chute == numerosecreto;

        if(acertou) {
            break;
        } else if(chute > numerosecreto) {
            printf("\nOpa, seu chute foi maior do que o numero secreto, tente com outro!\n\n");
        } else {
            printf("\nOpa, seu chute foi menor do que o numero secreto, tente com outro!\n\n");
        }

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    printf("\n");
    	if(acertou){
    		printf("-------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("PARABENS! VOCE ACERTOU :)\n\n");

        printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("\t\t\t\t\t\t\t\t\t\tVoce fez %.2f pontos. Ate a proxima partida!\n\n", pontos);
        printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
        
    } else {
    	printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
			printf("POXA... NÃO FOI DESSA VEZ :(\n\n");
			printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    }
}