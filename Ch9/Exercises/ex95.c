
int num_digits(int n) 
{
    int divisors = 0;
    while (n > 0) {
       n /= 10;
       divisors++;
    }
    return divisors;
}
