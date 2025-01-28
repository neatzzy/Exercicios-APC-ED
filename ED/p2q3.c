typedef struct{
    int codigo;
    char* nome;
} Profissao;

Profissao* aloca_profissao(unsigned int tamanho_nome){
    Profissao* p = (Profissao*)malloc(sizeof(Profissao));
    if (p){
        p->nome = (char*)malloc(tamanho_nome * sizeof(char));
        if (!p->nome) {
            free(p);
            exit(1);
            }
        }

    return p;
}