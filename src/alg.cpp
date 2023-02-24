// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
	if (a <= 0 || b <= 0)
		cout << "Error! You cannot enter negative numbers!" << endl;
	else {
		while (a%b!=0||b%a!=0)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		cout << "Your NOD:";
		if (a % b == 0)
			cout << a << std::endl;
		else
			cout << b << std::endl;
	}
return 0;
}
