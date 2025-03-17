int main() { 
    int n, count = 1, number, sum = 0; 
    printf("How many numbers do you want to add? ");     
    scanf("%d", &n); 
    while (count <= n) { 
        printf("Enter number %d: ", count);         
        scanf("%d", &number);         
        sum += number; 
        count++; 
    } 
    printf("The total sum is: %d\n", sum);     return 0; 
} 
