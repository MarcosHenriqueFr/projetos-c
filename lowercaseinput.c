#include <stdio.h>//um programa que pegue um input do usuário e deixe tudo em minúsculo e vice-versa
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	char letra, palavra[15], frase[50], frase1[50];
	
	/*
	printf("Escreva uma letra: ");
	scanf("%c", &letra);
	
	fgets(palavra,15,stdin);
	printf("Escreva uma palavra: ");
	fgets(palavra, 15, stdin);
	palavra[strlen(palavra) - 1] = '\0';
	
	printf("Escreva uma frase: ");
	fgets(frase, 50, stdin);
	frase[strlen(frase) - 1] = '\0';
	
	letra = toupper(letra);
	//letra = tolower(letra);
	
	strupr(palavra);
	//strlwr(palavra);
	
	strupr(frase);
	//strlwr(frase);
	
	system("cls");	
	
	printf("%c, %s e %s\nFoi isso que você escreveu?", letra, palavra, frase);
	*/
	
	printf("Digite qualquer coisa: ");
	fgets(frase, 50, stdin);
	frase[strlen(frase) - 1] = '\0';
	
	strcpy(frase1, frase);
	strupr(frase);
	strlwr(frase1);
	
	printf("\nOlha como ficou: \n%s\n%s\n", frase, frase1);
	return 0;
}
