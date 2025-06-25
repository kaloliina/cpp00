#include <iostream>
using namespace std;

//missing newline
int main(int argc, char *argv[])
{
	int	i = 0;
	int	y = 1;
	string n = "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	char c;
	while (y < argc)
	{
		i = 0;
		while (argv[y][i] != '\0')
		{
			if (argv[y][i] >= 97 && argv[y][i] <= 122)
				c = argv[y][i] - 32;
			else
				c = argv[y][i];
			cout << c;
			i++;
		}
		y++;
	}
	if (argc ==  1)
		cout << n;
	return (0);
}
