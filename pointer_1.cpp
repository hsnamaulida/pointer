#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

//pointer adalah suatu variabel penunjuk yang dapat mengindikasikan alamat serta merubah nilai secara permanen
//dangling pointer, pointer yang tidak mengarah kenilai apapun
//float hitung (float*, float*);
//float hitung2 (float,float);

float hitung(float*a, float*b)
{
	*a+=5;
	*b+=7;
	cout<<"Nilai dalam fungsi = "<<*a<<" dan "<<*b<<endl;
}

float hitung2(float a, float b)
{
	a+=5; b+=7;
	cout<<"Nilai dalam fungsi 2 = "<<a<<" dan "<<b<<endl;
}

main()
{
	float x, y;
	x=4, y=8l;
	cout<<"Nilai sebelum fungsi "<<x<<" dan "<<y<<endl;
	hitung (&x, &y);
	cout<<"Nilai setelah fungsi "<<x<<" dan "<<y<<endl;
	hitung2 (x, y);
	cout<<"Nilai setelah fungsi 2 "<<x<<" dan "<<y<<endl;

	getch();
}
