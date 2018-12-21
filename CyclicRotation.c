struct Results solution(int A[], int N, int K) {
    struct Results result;
    if(N==0){
        result.A=A;
        result.N=N;
        return result;
    }
    int temp[N];
    int i;
    int j;
    int index=0;
    for(i=0;i<N;i++) temp[i]=A[i];
    
    j = K%N;
    for(i=N-j;i<N;i++){
        A[index++]=temp[i];
    }
    if(N-j>0){
        for(i=0;i<N-j;i++){
            A[index++]=temp[i];    
        }
    }
     result.A=A;
     result.N=N;
     return result;
}
