int USCLN(int a, int b)
{
	a = abs(a); 
	b = abs(b);  
	if (a == 0 && b != 0)
	{
		return b;
	}
	else if (a != 0 && b == 0)
	{
		return a;
	}
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;

}