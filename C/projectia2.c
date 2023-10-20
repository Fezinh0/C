int main() {
    
    int *pi,*ph;
    int a = 5;
    
    pi = &a;
    ph = malloc(sizeof(int));
    *ph = 3;
    printf("%x %d\n",ph, *ph);
    printf("%x %d",pi,a);
   
    free(ph);

    return 0;
}

