#include <stdio.h>
#include <stdlib.h>

// i needed to include stdlib.h for the ATOI func

int main() {
	 //(i know that... it is obvious but... just in case...
	 //C_idade = CHAR_idade
	 //I_idade = INT_idade
	 //i just converted C_idade to the I_idade 
	
	char nome[16];
	char C_idade;
	int I_idade;
	// the mensage reads... "Hello, what's your name and what's your age?"
	printf("Olá, qual é o seu nome e quantos anos você tem?\n");
<<<<<<< HEAD
	scanf("%s",&nome);
=======
	scanf("%s, %d",&nome);
>>>>>>> 17cf4696724a2539e8bafdd3366c7813807e086e
	scanf("%s",&C_idade);

	I_idade = atoi(&C_idade);
	//     "Oh [nome], what a beatiful name that you got! And you have [I_idade] years..."
	printf("Oh '%s' que nome legal que você tem! E você tem %d anos\n", nome, I_idade);
}
