int main()
{
    int N, Fat;
    printf("Digite um número: ");
    scanf("%d",&N);
    Fat = 1;
    for (int i=N; i>0; i--) {
        Fat *=i;
    }
    
    printf("O fatorial de %d é %d", N,Fat);
}