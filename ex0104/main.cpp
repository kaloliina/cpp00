
#include <iostream>
#include <fstream>

#include <bits/stdc++.h>
int main(int argc, char *argv[])
{
	if (argc != 4)
		return(1);
	std::ifstream MyFile(argv[1]);
	std::ofstream MyNewFile("OutputFile.txt");
//do I need t open
	int res = 0;
	std::string line;
	std::string s1, s2;
	s1 = argv[2];
	s2 = argv[3];
	auto first = s1.begin();
	auto last = s1.end();
	
	while (getline(MyFile, line))
	{
	while ((res = line.find(s1, res + 1)) != std::string::npos)
	{
//		int res = line.find(s1, 0);
		line.erase(res, s1.size());
		line.insert(res, s2);

//		line.replace(res, s1.size(), s2);
	}
		MyNewFile << line << std::endl;
	res = 0;
	std::cout << line << std::endl;
	}
//	std::cout << line << std::endl;
}
//is it ok to add newline and i wonder if getline is the smartest way?
//also i need to check for file permissions etc...
