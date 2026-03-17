int* game_with_number(int arr[], int n) {

    // Complete the function
    if(n%2==0){
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i]^arr[i+1];
        }
    }
    else {
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i]^arr[i+1];
        }

    }
    return arr;
    
}
