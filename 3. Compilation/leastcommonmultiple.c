int lcm(int a, int b)
 {    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max=max+1;
    }
}

int main() 
{    int a = 12, b = 18;
    printf("The Least Common Multiple of %d and %d is %d\n", a, b, lcm(a, b));
    return 0;
}
