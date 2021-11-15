#include "IntData.h"
#include "DoubleData.h"
#include "iostream"

int main()
{
	DoubleData ddata = DoubleData(0);
	ddata.ConsoleEnterData();
	ddata.print();
	
	auto a1 = new IntData[3] { IntData(1), IntData(2), IntData(3) };
	auto a2 = new DoubleData[3] { DoubleData(2), DoubleData(3), DoubleData(4) };
	
	for (int i = 0; i < 3; i++)
	{
		a2[i].SetData(IntData(a1[i]).GetData()*a2[i].GetData()));
		a2[i].print();
	}
	
	system("pause");
	return 0;
}