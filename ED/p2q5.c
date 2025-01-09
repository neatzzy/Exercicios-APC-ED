int isValid(char* s){
    Stack* parenteses = createStack();
    Stack* chaves = createStack();
    Stack* colchetes = createStack();

    for(int i = 0 ; s[i] != '\0' ; i++){
        if(s[i] == '('){
            push(parenteses, 'a');
        }
        else if(s[i] == ')'){
            if(!isEmpty(parenteses)){
                pop(parenteses);
            }
            else{
                return 0;
            }
        }
        else if(s[i] == '{'){
            push(chaves, 'a');
        }
        else if(s[i] == '}'){
            if(!isEmpty(chaves)){
                pop(chaves);
            }
            else{
                return 0;
            }
        }
        else if(s[i] == '['){
            push(colchetes, 'a');
        }
        else if(s[i] == ']'){
            if(!isEmpty(colchetes)){
                pop(colchetes);
            }
            else{
                return 0;
            }
        }
    }
    if(isEmpty(parenteses) && isEmpty(chaves) && isEmpty(colchetes)){
        return 1;
    }
    else{
        return 0;
    }
}

