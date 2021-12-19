
int digit(int n, int k)
{
    int digit;
    int num_digits = 0;
    int temp = n;

    while (temp > 0) {
        temp /= 10;
        num_digits++;
    }

    if (k > num_digits) {
        return 0;
    } else { 
        for (int i = 1; i < k; i++) {
            n = n / 10;
        }
        digit = n % 10;
    }
    return digit;
}
