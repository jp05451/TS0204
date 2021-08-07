#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{
				unsigned input=0,i;
				vector<string> name;
				string tempn;
				int n_len = 0;

				vector<string> salary;
				string temps;
				int s_len = 0;

				vector<string> award;
				string tempa;
				int a_len = 0;

				while (cin >> input)
				{
								a_len = 0;
								n_len = 0;
								s_len = 0;
								for (i = 0; i < input; i++)
								{
												cin >> tempn;
												cin >> temps;
												cin >> tempa;
												name.push_back(tempn);
												salary.push_back(temps);
												award.push_back(tempa);			
												if (tempn.length() > n_len)
																n_len = tempn.length();
												if (temps.length()>s_len)
																s_len =temps.length();
												if (tempa.length() > a_len)
																a_len = tempa.length();
								}
												//printf("%d %d %d\n",n_len,s_len,a_len);
								for (i = 0; i < input; i++)
								{
												cout		<< setw(n_len) << name.at(i) << "|  "
																<< setw(s_len) << salary.at(i) << "|  "
																<< setw(a_len) << award.at(i) << endl;
								}
								name.clear();
								award.clear();
								salary.clear();
				}
}