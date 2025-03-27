int findJudge(int N, int trust[][2], int trustSize) {
    int confiaEm[N + 1];
    int ehConfiado[N + 1];
    
    for (int i = 0; i <= N; i++) {
        confiaEm[i] = 0;
        ehConfiado[i] = 0;
    }
    
    for (int i = 0; i < trustSize; i++) {
        int a = trust[i][0];
        int b = trust[i][1];
        confiaEm[a]++;
        ehConfiado[b]++;
    }
    
    for (int i = 1; i <= N; i++) {
        if (confiaEm[i] == 0 && ehConfiado[i] == N - 1) {
            return i;
        }
    }
    
    return -1;
}