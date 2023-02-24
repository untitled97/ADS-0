// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
if (a <= 0 || b <= 0) {
        return 0;
} else {
        while (a % b != 0 || b % a != 0) {
                if (a > b)
                        a -= b;
                else
                        b -= a;
        }
        if (a % b == 0)
                return a;
        else
                return b;
}
        return 0;
}
