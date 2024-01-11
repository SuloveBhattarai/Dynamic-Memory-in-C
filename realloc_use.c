// Write a program in C to compute the sum of all
// elements in an array using pointer.

int main(){
    int i,*ptr, sum=0;
    int arr[5] = {1,2,3,4};
    ptr = &sum;
    for (i=0; i<5; i++){
        sum = sum +arr[i];
    }
    
    printf("%d",*ptr);
}
