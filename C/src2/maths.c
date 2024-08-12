#define M_E			2.7182818284590452354
#define M_LOG2E 	1.4426950408889634074
#define M_LOG10E	0.43429448190325182765
#define M_LN2		0.69314718055994530942
#define M_LN10		2.30258509299404568402
#define M_PI		3.14159265358979323846
#define M_PI_2		1.57079632679489661923
#define M_PI_4		0.78539816339744830962
#define M_1_PI		0.31830988618379067154
#define M_2_PI		0.63661977236758134308
#define M_2_SQRTPI	1.12837916709551257390
#define M_SQRT2 	1.41421356237309504880
#define M_SQRT1_2	0.70710678118654752440

float calculator()
{
	char test = 0;
	int i = 1;

	while(i == 1)																			/* Boucle de menu */
		{
			printf("Voulez vous executer un calcul ? \nOui -> 1 \nNon -> 0 \n");
			scanf("%d", &test);

			if (test == 1)																	/* App loop */
			{
				float x;
				float y;
				float result;
				char op;

				printf("Calculatrice ouverte !\n");
				printf("Entrez votre calcul !\n");
				scanf("%f%c%f", &x, &op, &y);

				switch (op)
				{
					case '+':
					printf("Le resultat de %f + %f est %f !\n", x, y, x + y);
					break;

					case '-':	
					printf("Le resultat de %f - %f est %f !\n", x, y, x - y);
					break;

					case '*':
					printf("Le resultat de %f * %f est %f !\n", x, y, x * y);
					break;

					case '/':
					printf("Le resultat de %f / %f est %f !\n", x, y, x / y);
					break;

					default:
					printf("Erreur, entrez 1 - 2 - 3 - 4 - 5 !\n");
					break;
				}
				i = 1;
			}

			else if (test == 0)																/* App loop exit */
			{
				printf("Calculatrice fermee !\nA bientot !\n");
				i--;
			}

			else 																			/* Entry check */
			{
				printf("Entree incorrecte, entrez 0 ou 1 \n\n");
				i--;
			}
		}	
	
}

int power(int x, int y)
{
    int temp;
        

    if(y == 0)
    {
        return 1;
    }

    temp = power(x, y/2);
    if (y%2 == 0)
    {
        return temp*temp;
    }
    
    else
    {
        if(y > 0)
            {
                return x*temp*temp;
            }
        else
            {
            return (temp*temp)/x;
            }
    }
} 

float spherevolume( float radius)
{
	return M_PI*power(radius, 3)*4/3;
}

int area( int length, int width)
{
	return length*width;
}

int circlearea( int radius)
{
	return M_PI*power(radius, 2);
}

int volume( int length, int width, int height)
{
	return length*width*height;
}

int Fact(int n) 
{
    if (n>=1)
        return n*Fact(n-1);

    else
        return 1;
}

int Comb(int n, int k)
{
    return Fact(n)/(Fact(k)*Fact(n - k));
}

int Pascal(int i, int j, int rows, int space, int coef)
{
    for (i = 0; i < rows; i++) 
        {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
            for (j = 0; j <= i; j++) 
            {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
            }
        printf("\n");
        }
}