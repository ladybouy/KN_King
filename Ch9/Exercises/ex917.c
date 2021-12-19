
int fact(int n) 
{
    int factorial = 1;
    while (n >= 1) {
       factorial *= n;
       n--;
    }
    return factorial;
}
