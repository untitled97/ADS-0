// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
	if (a <= 0 || b <= 0)
		std::cout << "Error! You cannot enter negative numbers!" << std::endl;
	else {
		while (a%b!=0||b%a!=0)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		std::cout << "Your NOD:";
		if (a % b == 0)	std::cout << a << std::endl;
		else std::cout << b << std::endl;
	}
	return 0;
}
