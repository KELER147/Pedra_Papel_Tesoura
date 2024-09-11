#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

for(;;){

	//inicializar gerador de numeros aleatorios
		srand(time(NULL));
    //declaração de variaveis
    	
        int pl;
        int boot = (rand() % 3) + 1;
       
    //saida de informações
        printf("BEM VINDO AO JOGO\n");
        printf("\n");
        printf("--------------------\n");
        printf("-     1_Pedra      -\n");
        printf("-     2_Papel      -\n");
        printf("-     3_Tesoura    -\n");
        printf("--------------------\n\n");

    //entrada de dados
        printf("Digite o numero da opc:");
        scanf("%d",&pl);
        
    //Condicional
        if (pl == 1 && boot == 2){//1pedra x 2papel = 2papel
            printf("");
            printf("!Derrota! \n \n");
            	
    // SAIDA DE INFORMACAO DO USUARIO E BOOT
            	switch (pl){
            		case 1:
            			printf("");
            			printf("Voce escolheu pedra \n");
            			printf("");
            			break;
            			
            		case 2:
            			printf("Voce escolheu papel \n");
                		printf("");
            			break;
            			
            		case 3:
            			printf("Voce escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
				
			    switch (boot){
            		case 1:
            			printf("");
            			printf("O boot escolheu pedra \n");
            			break;
            			
            		case 2:
            			printf("O boot escolheu papel \n");
            			break;
            			printf("");
            			
            		case 3:
            			printf("O boot escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
				
        }
            else if (pl == 2 && boot == 1){//2papel x 1pedra = 2papel
                printf("");
                printf("!VENCEU! \n \n");
                
        // SAIDA DE INFORMACAO DO USUARIO E BOOT
            	switch (pl){
            		case 1:
            			printf("");
            			printf("Voce escolheu pedra \n");
            			printf("");
            			break;
            			
            		case 2:
            			printf("Voce escolheu papel \n");
                		printf("");
            			break;
            			
            		case 3:
            			printf("Voce escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
				
			    switch (boot){
            		case 1:
            			printf("");
            			printf("O boot escolheu pedra \n");
            			break;
            			
            		case 2:
            			printf("O boot escolheu papel \n");
            			break;
            			printf("");
            			
            		case 3:
            			printf("O boot escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
                
                
            }
            else if (pl == 1 && boot == 3){//1pedra x 3tesoura = 1pedra
                printf("");
                printf("!VENCEU! \n \n");
                
    // SAIDA DE INFORMACAO DO USUARIO E BOOT
            	switch (pl){
            		case 1:
            			printf("");
            			printf("Voce escolheu pedra \n");
            			printf("");
            			break;
            			
            		case 2:
            			printf("Voce escolheu papel \n");
                		printf("");
            			break;
            			
            		case 3:
            			printf("Voce escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
				
			    switch (boot){
            		case 1:
            			printf("");
            			printf("O boot escolheu pedra \n");
            			break;
            			
            		case 2:
            			printf("O boot escolheu papel \n");
            			break;
            			printf("");
            			
            		case 3:
            			printf("O boot escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
            }
            else if (pl == 3 && boot == 1){//3tesoura x 1pedra = 3tesoura
                printf("");
                printf("!DERROTA! \n \n");
                
    // SAIDA DE INFORMACAO DO USUARIO E BOOT
            	switch (pl){
            		case 1:
            			printf("");
            			printf("Voce escolheu pedra \n");
            			printf("");
            			break;
            			
            		case 2:
            			printf("Voce escolheu papel \n");
                		printf("");
            			break;
            			
            		case 3:
            			printf("Voce escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
				
			    switch (boot){
            		case 1:
            			printf("");
            			printf("O boot escolheu pedra \n");
            			break;
            			
            		case 2:
            			printf("O boot escolheu papel \n");
            			break;
            			printf("");
            			
            		case 3:
            			printf("O boot escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
            }
            else if (pl == 3 && boot == 2 ){//3tesoura x 2papel = 3tesoura
            	printf("");
            	printf("!VENCEU \n \n");
            	
    // SAIDA DE INFORMACAO DO USUARIO E BOOT
            	switch (pl){
            		case 1:
            			printf("");
            			printf("Voce escolheu pedra \n");
            			printf("");
            			break;
            			
            		case 2:
            			printf("Voce escolheu papel \n");
                		printf("");
            			break;
            			
            		case 3:
            			printf("Voce escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
				
			    switch (boot){
            		case 1:
            			printf("");
            			printf("O boot escolheu pedra \n");
            			break;
            			
            		case 2:
            			printf("O boot escolheu papel \n");
            			break;
            			printf("");
            			
            		case 3:
            			printf("O boot escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
			}
            else if (pl == 2 && boot == 3 ){//2papel x 3tesoura = 3tesoura
            	printf("");
            	printf("!DERROTA \n \n");
            	
        // SAIDA DE INFORMACAO DO USUARIO E BOOT
            	switch (pl){
            		case 1:
            			printf("");
            			printf("Voce escolheu pedra \n");
            			printf("");
            			break;
            			
            		case 2:
            			printf("Voce escolheu papel \n");
                		printf("");
            			break;
            			
            		case 3:
            			printf("Voce escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
				
			    switch (boot){
            		case 1:
            			printf("");
            			printf("O boot escolheu pedra \n");
            			break;
            			
            		case 2:
            			printf("O boot escolheu papel \n");
            			break;
            			printf("");
            			
            		case 3:
            			printf("O boot escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
			}	
			else if (pl == boot){
				printf("!EMPATE! \n \n");
				
    // SAIDA DE INFORMACAO DO USUARIO E BOOT
            	switch (pl){
            		case 1:
            			printf("");
            			printf("Voce escolheu pedra \n");
            			printf("");
            			break;
            			
            		case 2:
            			printf("Voce escolheu papel \n");
                		printf("");
            			break;
            			
            		case 3:
            			printf("Voce escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
				
			    switch (boot){
            		case 1:
            			printf("");
            			printf("O boot escolheu pedra \n");
            			break;
            			
            		case 2:
            			printf("O boot escolheu papel \n");
            			break;
            			printf("");
            			
            		case 3:
            			printf("O boot escolheu tesoura \n");
            			break;
            			printf("");
            			
				}
			}
			else {
				printf("!Voce escolhu uma opc inexistenete!");
			}
}

}



//pedra x papel = papel v
//pedra x tesoura = pedra v
//tesoura x papel = tesoura
//
