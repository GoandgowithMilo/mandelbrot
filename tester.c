
int main(int argc, char *argv[])
{
	double complex z1 = 0.0 + 0.0 * I;
	double c = -1;
	int max_itr = 1000;
	int escape_lmt = 2;
	int flag = 0;

	for(int i = 0; i < max_itr; i++)
	{
		z1 = z1 * z1 + c;

		// this is testing whether it diverges
		if(sqrt(creal(z1) * creal(z1) + cimag(z1) * cimag(z1)) >= escape_lmt)
		{
			flag = 1;
			break;
		}
	}

	return 0;
}
