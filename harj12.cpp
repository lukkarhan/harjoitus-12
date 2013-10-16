/*
Tehtävä: Harjoitus 12
Tekijä: Hanna Lukkarinen, IIO13S1
Pvm: 16.10.2013

Kuvaus:
Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):

1
22
333
4444
55555
666666

Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
cout << rivinro;

*/

#include <iostream>
using namespace std;

void main()
{

	int rivit;
	cout<<"Anna kokonaisluku väliltä 1-9:\n";
	cin>>rivit;
	for(int i= 1; i <= rivit; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout<<i;
		}
		cout<<endl;
	}

}