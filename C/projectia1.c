int main()
{
   char S[50];
   int idade;
    printf("Digite seu nome: ");
    scanf("%s",&S);
    printf("Hello %s\n",S);
    printf("," "Digite sua idade: ");
    scanf("%d", &idade);
    
    if ((0<=idade) && (idade<=3)){
        printf("BABY");
        }
        
    else if (idade<=12){
        printf("Criança");
        }
        
    else if (idade<=18){
        printf("Adolescente");
        }
        
    else
        printf("Adulto" ","); {
        }
        
        for (int i=0; i<10; i++){
            printf("%d ", i);
        }
        
        return 0;
    
}
        