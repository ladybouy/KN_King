
int gcd(int m, int n) 
{
    while (n !=0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}

