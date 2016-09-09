/*
 * derivada.cpp
 *
 *  Created on: 22/07/2016
 *      Author: Prof.Armando Sulbaran
 */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int numero[5], total[5],i;
	char sign2[4],sign[5];

	for(i=0;i<5;i++)
	{

		do
		{
			cout<<"ingrese el signo de "<<" x"<<"^"<<i<<": ";
			cin>>sign[i];
		}
		while((sign[i]!='+')&&(sign[i]!='-'));

		cout<<"ingrese el coeficiente literal"<<" x"<<"^"<<i<<": ";
		cin>>numero[i];
	}
	for(i=0;i<5;i++)
	{
		total[i]=numero[i]*i;
	}

	cout<<"Primera Derivada:"<<endl;
	for(i=1;i<4;i++)
	{
		numero[i-1]=total[i];
		sign2[i-1]=sign[i-1];
		if(i==2)
			cout<<total[i]<<"x"<<sign[i+1];
		else
			if(i==1)
				cout<<sign[i]<<total[i]<<sign[i+1];
			else
				cout<<total[i]<<"x^"<<(i-1)<<sign[i+1];
	}
	for(i=4;i<5;i++)
	{
		numero[i-1]=total[i];
		cout<<total[i]<<"x^"<<(i-1);
	}
	cout<<endl;

	for(i=0;i<4;i++)
		{
			total[i]=numero[i]*i;
		}

		cout<<"Segunda Derivada:"<<endl;
		for(i=1;i<3;i++)
		{
			if(i==2)
				cout<<total[i]<<"x"<<sign2[i];
			else
				if(i==1)
					cout<<sign2[i-1]<<total[i]<<sign2[i];
				else
					cout<<total[i]<<"x^"<<(i-1)<<sign2[i];
		}
		for(i=3;i<4;i++)
			cout<<total[i]<<"x^"<<(i-1);
		cout<<endl;
	return 0;
}



