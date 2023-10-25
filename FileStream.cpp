#include "FileStream.hpp"
void write(fstream& file, string info)
{
	file << info << endl;
}

string read(fstream& file, signed int count)
{
	if (file.is_open())
	{
		string line;
#if 0
		file.seekg(0, std::ios::end);

		// получаем текущую позицию чтения (которая является длиной файла)
		std::streampos length = file.tellg();
		if (length < count)
		{
			cout << "Wrong number of lines" << endl;
		}
		else
		{
#endif
			if (!count == NULL)
			{
				while (count >= 0)
				{
					getline(file, line);
					cout << line << endl;
					count--;
				}
				return line;
			}
			else
			{
				while (getline(file, line))
				{
					cout << line << endl;
				}
				return line;
			}
	}
	else
	{
		cout << "Failed to open file. Check path and permissions\n";
	}
}
