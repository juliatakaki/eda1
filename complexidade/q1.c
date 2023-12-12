MaxMin(int v[]){
    int max = v[1]; //O(1)
    int min = v[1]; // O(1)
    int n; // O(1)
    for (int i = 2; i < n; i++) // O(n-1)
    {
        if(v[i] > max) 
            max = v[i];
        if(v[1] < min)
            min = v[i];
    } // tudo que está dentro do for é O(n-1)
    
}
// a ordem de complexidade do algoritmo é O(n)