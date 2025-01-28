int isValid(char *str){
    int tam = strlen(str);
    Pilha* pilha = Stack();

    for(int i = 0 ; i < tam ; i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            push(pilha,(int) str[i]);
        }else if(str[i] == ')' || str[i] == ']' || str[i] == '}'){
            if(isEmpty(pilha)){
                free(pilha);
                return 0;
            }
            char c = (char)pop(pilha);
            if((c == '(' && str[i] != ')') || (c == '[' && str[i] != ']') || (c == '{' && str[i] != '}')){
                free(pilha);
                return 0;
            }
        }
    }
    if(isEmpty(pilha)){
        free(pilha);
        return 1;
    }
    free(pilha);
    return 0;
}