struct ListNode{
    int val;
    struct ListNode *next;
}ListNode;

struct ListNode* trocaLista(struct ListNode* head){
    if (head == NULL || head->next == NULL) return head;

    struct ListNode* new_head = head->next;
    struct ListNode* anterior = NULL;
    struct ListNode* aux = head;

    while (aux != NULL && aux->next != NULL) {
        struct ListNode* next = aux->next;
        aux->next = next->next;
        next->next = aux;

        if (anterior != NULL) {
            anterior->next = next;
        }

        anterior = aux;
        aux = aux->next;
    }

    return new_head;
}