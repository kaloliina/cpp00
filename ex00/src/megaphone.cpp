#include <iostream>
/*What is the difference of toupper and std::toupper*/
int main(int argc, char *argv[])
{
	int	i = 0;
	int	y = 1;
	std::string n = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (y < argc)
	{
		i = 0;
		while (argv[y][i] != '\0')
		{
			if (argv[y][i] >= 'a' && argv[y][i] <= 'z')
				argv[y][i] = toupper(argv[y][i]);
			std::cout << argv[y][i];
			i++;
		}
		y++;
	}
	if (argc ==  1)
		std::cout << n << std::endl;
	else
		std::cout << std::endl;
	return (0);
}
