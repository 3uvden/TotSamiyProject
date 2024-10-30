#include <iostream>
#include <Windows.h>
#include <string>
#include <limits>

#if defined(max)
#undef max
#endif


//������� ������
bool isAdmin = false;
int userCount = 2;
std::string* loginArr = new std::string[userCount]{ "admin", "user" };
std::string* passwordArr = new std::string[userCount]{ "admin123", "user123" };
//----------------------------------------

//�� �������
int size = 10;
int* idArr = new int[size];
int* countArr = new int[size];
double *priceArr = new double[size];
std::string* nameArr = new std::string[size];
//----------------------------------------

//�������
void Start();
bool Login();
void ShopUserMenu();
void ShopAdminMenu();

int main()
{
	Start();
	return 0;
}

void Start()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "\n\n\t\t\tEpic Hydra Store\n\n\n";
	if (Login() == true)
	{
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max());
		if (isAdmin == true)
		{
			ShopAdminMenu();
		}
		else
		{
			ShopUserMenu();
		}
	}
}

bool Login()
{
	while (true)
	{
		std::string login, pass;
		std::cout << "������� �����: ";
		std::getline(std::cin, login, '\n');
		std::cout << "������� ������: ";
		std::getline(std::cin, pass, '\n');
		

		for (int i = 1; i < userCount; i++)
		{
			 if (login == loginArr[i] && pass == passwordArr[i])
			{
				std::cout << "\n����� ���������� " << loginArr[1] << "\n";
				isAdmin = false;
				return true;
			}
		}
		
		if (login == loginArr[0] && pass == passwordArr[0])
		{
			std::cout << "\n����� ���������� " << loginArr[0] << "\n";
			isAdmin = true;
			return true;
		}

		system("cls");
		std::cout << "������� ����� ����� ��� ������!\n\n";
	}
}

void ShopUserMenu()
{
	std::string choose;
	while (true)
	{
		do
		{
			std::cout << "\n1. ������ �������\n";
			std::cout << "2. �������� �����\n";
			std::cout << "3. ����� � �������\n";
			std::cout << "0. ������� �����\n\n\n";

			std::cout << "����: ";
			std::getline(std::cin, choose, '\n');
			system("cls");
		} while (choose.size() > 1 || choose[0] < 48 || choose[0] > 53);

		if (choose == "1")
		{

		}
		else if (choose == "2")
		{

		}
		else if (choose == "3")
		{

		}
		else if (choose == "0")
		{

		}
		else
		{
			std::cout << "UserMenuError";
		}
	}
}

void ShopAdminMenu()
{
	//�������� ��������� �����
	std::string choose;
	while (true)
	{
		do
		{
			std::cout << "\n1. ������ �������\n";
			std::cout << "2. �������� �����\n";
			std::cout << "3. ��������� �����\n";
			std::cout << "4. ������� �� ������\n";
			std::cout << "5. �������� ����\n";
			std::cout << "6. �������� �����\n";
			std::cout << "7. �������� ��������\n";
			std::cout << "8. ����� � �������\n";
			std::cout << "9. ������� �����\n\n\n";

			std::cout << "����: ";
			std::getline(std::cin, choose, '\n');
			system("cls");
		} while (choose.size() > 1 || choose[0] < 48 || choose[0] > 56);

		if (choose == "1")
		{

		}
		else if (choose == "2")
		{

		}
		else if (choose == "3")
		{

		}
		else if (choose == "4")
		{

		}
		else if (choose == "5")
		{

		}
		else if (choose == "6")
		{

		}
		else if (choose == "7")
		{

		}
		else if (choose == "8")
		{

		}
		else if (choose == "9")
		{

		}
		else
		{
			std::cout << "AdminMenuError\n";
		}
	}
}
