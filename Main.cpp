#include <iostream>

std::string s;//14 espacios para el espacio en blanco.
std::string h;

void letter(int p, char l) //Letra A
{
	std::string f;
		f = s;

	switch (l)
	{
		//p es la posición
	case 'A':
	case 'a':
		switch (p)
		{
		case 0: printf("%s%s%s", f, h, s); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, h, h); break;
		case 3:	printf("%s%s%s", h, s, h); break;
		case 4:	printf("%s%s%s", h, s, h); break;
		} break;

		//p es la posición
	case 'B':
	case 'b':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, s); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, h, s); break;
		case 3:	printf("%s%s%s", h, s, h); break;
		case 4:	printf("%s%s%s", h, h, s); break;
		} break;

		//p es la posición
	case 'C':
	case 'c':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", h, s, s); break;
		case 2:	printf("%s%s%s", h, s, s); break;
		case 3:	printf("%s%s%s", h, s, s); break;
		case 4:	printf("%s%s%s", h, h, h); break;
		} break;

		//p es la posición
	case 'D':
	case 'd':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, s); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, s, h); break;
		case 3:	printf("%s%s%s", h, s, h); break;
		case 4:	printf("%s%s%s", h, h, s); break;
		} break;

		//p es la posición
	case 'E':
	case 'e':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", h, s, s); break;
		case 2:	printf("%s%s%s", h, h, h); break;
		case 3:	printf("%s%s%s", h, s, s); break;
		case 4:	printf("%s%s%s", h, h, h); break;
		} break;

		//p es la posición
	case 'F':
	case 'f':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", h, s, s); break;
		case 2:	printf("%s%s%s", h, h, h); break;
		case 3:	printf("%s%s%s", h, s, s); break;
		case 4:	printf("%s%s%s", h, s, s); break;
		} break;

		//p es la posición
	case 'G':
	case 'g':
		switch (p)
		{
		case 0: printf("%s%s%s%s", h, h, h, h); break;
		case 1:	printf("%s%s%s%s", h, s, s, s); break;
		case 2:	printf("%s%s%s%s", h, s, h, h); break;
		case 3:	printf("%s%s%s%s", h, s, s, h); break;
		case 4:	printf("%s%s%s%s", h, h, h, h); break;
		} break;

		//p es la posición
	case 'H':
	case 'h':
		switch (p)
		{
		case 0: printf("%s%s%s", h, s, h);  break;
		case 1:	printf("%s%s%s", h, s, h);  break;
		case 2:	printf("%s%s%s", h, h, h);  break;
		case 3:	printf("%s%s%s", h, s, h);  break;
		case 4:	printf("%s%s%s", h, s, h);  break;
		} break;

		//p es la posición
	case 'I':
	case 'i':
		switch (p)
		{
		case 0: printf("%s%s%s", f, h, s);  break;
		case 1:	printf("%s%s%s", s, h, s);  break;
		case 2:	printf("%s%s%s", s, h, s);  break;
		case 3:	printf("%s%s%s", s, h, s);  break;
		case 4:	printf("%s%s%s", s, h, s);  break;
		} break;

		//p es la posición

	case 'J':
	case 'j':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", s, h, s); break;
		case 2:	printf("%s%s%s", s, h, s); break;
		case 3:	printf("%s%s%s", s, h, s); break;
		case 4:	printf("%s%s%s", h, h, s); break;
		} break;

	case 'K':
	case 'k':
		switch (p)
		{
		case 0: printf("%s%s%s", h, s, h); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, h, s); break;
		case 3:	printf("%s%s%s", h, s, h); break;
		case 4:	printf("%s%s%s", h, s, h); break;
		} break;
	case 'L':
	case 'l':
		switch (p)
		{
		case 0: printf("%s%s%s", h, s, s); break;
		case 1:	printf("%s%s%s", h, s, s); break;
		case 2:	printf("%s%s%s", h, s, s); break;
		case 3:	printf("%s%s%s", h, s, s); break;
		case 4:	printf("%s%s%s", h, h, h); break;
		} break;
	case 'M':
	case 'm':
		switch (p)
		{
		case 0: printf("%s%s%s%s%s", h, s, s, s, h); break;
		case 1:	printf("%s%s%s%s%s", h, h, s, h, h); break;
		case 2:	printf("%s%s%s%s%s", h, s, h, s, h); break;
		case 3:	printf("%s%s%s%s%s", h, s, s, s, h); break;
		case 4:	printf("%s%s%s%s%s", h, s, s, s, h); break;
		} break;
	case 'N':
	case 'n':
		switch (p)
		{
		case 0: printf("%s%s%s%s", h, s, s, h); break;
		case 1:	printf("%s%s%s%s", h, h, s, h); break;
		case 2:	printf("%s%s%s%s", h, s, h, h); break;
		case 3:	printf("%s%s%s%s", h, s, s, h); break;
		case 4:	printf("%s%s%s%s", h, s, s, h); break;
		} break;
	case 'O':
	case 'o':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, s, h); break;
		case 3:	printf("%s%s%s", h, s, h); break;
		case 4:	printf("%s%s%s", h, h, h); break;
		} break;
	case 'P':
	case 'p':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, h, h); break;
		case 3:	printf("%s%s%s", h, s, s); break;
		case 4:	printf("%s%s%s", h, s, s); break;
		} break;
	case 'Q':
	case 'q':
		switch (p)
		{
		case 0: printf("%s%s%s%s", h, h, h, s); break;
		case 1:	printf("%s%s%s%s", h, s, h, s); break;
		case 2:	printf("%s%s%s%s", h, s, h, s); break;
		case 3:	printf("%s%s%s%s", h, h, h, s); break;
		case 4:	printf("%s%s%s%s", s, s, h, h); break;
		} break;
	case 'R':
	case 'r':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, h, s); break;
		case 3:	printf("%s%s%s", h, s, h); break;
		case 4:	printf("%s%s%s", h, s, h); break;
		} break;
	case 'S':
	case 's':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", h, s, s); break;
		case 2:	printf("%s%s%s", h, h, h); break;
		case 3:	printf("%s%s%s", s, s, h); break;
		case 4:	printf("%s%s%s", h, h, h); break;
		} break;
	case 'T':
	case 't':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", s, h, s); break;
		case 2:	printf("%s%s%s", s, h, s); break;
		case 3:	printf("%s%s%s", s, h, s); break;
		case 4:	printf("%s%s%s", s, h, s); break;
		} break;
	case 'U':
	case 'u':
		switch (p)
		{
		case 0: printf("%s%s%s", h, s, h); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, s, h); break;
		case 3:	printf("%s%s%s", h, s, h); break;
		case 4:	printf("%s%s%s", h, h, h); break;
		} break;
	case 'V':
	case 'v':
		switch (p)
		{
		case 0: printf("%s%s%s", h, s, h); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, s, h); break;
		case 3:	printf("%s%s%s", h, s, h); break;
		case 4:	printf("%s%s%s", s, h, s); break;
		} break;
	case 'W':
	case 'w':
		switch (p)
		{
		case 0: printf("%s%s%s%s%s", h, s, s, s, h); break;
		case 1:	printf("%s%s%s%s%s", h, s, s, s, h); break;
		case 2:	printf("%s%s%s%s%s", h, s, h, s, h); break;
		case 3:	printf("%s%s%s%s%s", h, h, h, h, h); break;
		case 4:	printf("%s%s%s%s%s", s, h, s, h, s); break;
		} break;
	case 'X':
	case 'x':
		switch (p)
		{
		case 0: printf("%s%s%s", h, s, h); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", s, h, s); break;
		case 3:	printf("%s%s%s", h, s, h); break;
		case 4:	printf("%s%s%s", h, s, h); break;
		} break;
	case 'Y':
	case 'y':
		switch (p)
		{
		case 0: printf("%s%s%s", h, s, h); break;
		case 1:	printf("%s%s%s", h, s, h); break;
		case 2:	printf("%s%s%s", h, h, h); break;
		case 3:	printf("%s%s%s", s, h, s); break;
		case 4:	printf("%s%s%s", s, h, s); break;
		} break;
	case 'Z':
	case 'z':
		switch (p)
		{
		case 0: printf("%s%s%s", h, h, h); break;
		case 1:	printf("%s%s%s", s, s, h); break;
		case 2:	printf("%s%s%s", s, h, s); break;
		case 3:	printf("%s%s%s", h, s, s); break;
		case 4:	printf("%s%s%s", h, h, h); break;
		} break;
	case ' ':
		switch (p)
		{
		case 0: printf("%s%s%s", s, s, s); break;
		case 1:	printf("%s%s%s", s, s, s); break;
		case 2:	printf("%s%s%s", s, s, s); break;
		case 3:	printf("%s%s%s", s, s, s); break;
		case 4:	printf("%s%s%s", s, s, s); break;
		} break;
	}
}

int main()
{
	int ln;
	std::string text;
	std::string type;
	std::string tp[2] = { "Emoji", "Letra"};
	printf("Ingrese una palabra: "); std::cin >> text;
	do
	{
		printf("Seleccione el tipo a convertir (Emoji / Letra): "); std::cin >> type;
	} while (!(type == tp[0] || type == tp[1]));
	printf("%s 1 (Para la letra): ", type); std::cin >> h;
	printf("%s 2 (Para el fondo de la palabra): ", type); std::cin >> s;
	ln = text.length();
	char* strchars = new char[ln];
	strcpy(strchars, text.c_str());
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < ln; j++)
		{
			letter(i, strchars[j]); 
			if (j < ln - 1)
				printf("%s", s);
			else
			{
				for (int z = 0; z < 28 - (ln * 3); z++)
				{
					if(type == "emoji")
					printf("%s", s);
				}

				if (type == tp[0])
					printf("\n");

				printf("\n");
			}
		}
	}
	printf("\n");
	delete[] strchars;
	system("pause");
}
