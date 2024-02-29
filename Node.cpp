#include<iostream>
#include<cstring>
using namespace std;

void ERA(int, double);
void FIP(int,int,int,int,double);

const double FIPconstant = 3.2;

int main()
{
	int i = 0;
	while (i < 1)
	{
		double innings;
		int earnedRuns, givenHR, HitBP, Walks, strikeouts;
		string response;
		
		cout << "Do you want to calculate ERA?: ";
			cin >> response;
		


			if (response == "Yes" || response == "yes" || response == "YES")
			{
				cout << "\nEnter a pitchers earned runs: ";
				cin >> earnedRuns;
				cout << "\nEnter a pitchers total innings: ";
				cin >> innings;

				ERA(earnedRuns, innings);

				cout << "\nDo you want to keep calculating?: ";
				cin >> response;

				if (response == "Yes" || response == "yes" || response == "YES")
				{
					i = 0;
				}

				else if (response == "No" || response == "NO" || response == "no")
				{
					return 0;
				}

				else
				{
					for (int j = 0; j < 1; j++)
					{
						cout << "\nTry again, do you want to keep calculating?" << endl;

						cin >> response;
						if (response == "Yes" || response == "yes" || response == "YES")
							j = 1;

						else if (response == "No" || response == "NO" || response == "no")
							return 0;

						else
							j = -1;

					}
				}
			}

			else if (response == "No" || response == "NO" || response == "no")
			{
				cout << "Do you want to calculate FIP (Fielding independent pitching)?: ";
				cin >> response;
				if (response == "Yes" || response == "yes" || response == "YES")
				{
					cout << "Enter how many home runs the pitcher has given up: ";
					cin >> givenHR;
					cout << "Enter how many walks the pitcher has given up: ";
					cin >> Walks;
					cout << "Enter how many hit by pitches the pitcher has given up: ";
					cin >> HitBP;
					cout << "Enter how many strikeouts the pitcher has attained: ";
					cin >> strikeouts;
					cout << "Enter how many innings the pitcher has pitched: ";
					cin >> innings;

					FIP(givenHR, Walks, HitBP, strikeouts, innings);

				}
			}
	}
}


void ERA(int runs, double innings)
{
	double ERA = (9 * runs) / innings;
	cout << "\nERA is " << ERA << endl;
}
 
void FIP(int homers, int walks, int HBP, int Ks, double innings)
{
	double FIP = ((13 * homers + 3 * (HBP + walks) - 2 * Ks) / innings) + FIPconstant;
	cout << "\nFIP is " << FIP << endl;
}