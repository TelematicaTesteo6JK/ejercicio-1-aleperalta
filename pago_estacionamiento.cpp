#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if(horas == 0)
	    cant = 0;
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>10)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    cout << endl << "------- EP -------" << endl;
    cout << "Test Data | Expected Result | Actual Result | Pass/Fail" << endl;
    cout << 3 << "         |       " << 30 << "        |   " << pago_estacionamiento(3); if(pago_estacionamiento(3) == 30) cout << "          |  Pass" << endl; else cout << "  Fail" << endl;
    cout << 8 << "         |       " << 72 << "        |   " << pago_estacionamiento(8); if(pago_estacionamiento(8) == 72) cout << "          |  Pass" << endl; else cout << "  Fail" << endl;
    cout << 23 << "        |       " << 161 << "       |   " << pago_estacionamiento(23); if(pago_estacionamiento(23) == 161) cout << "         |  Pass" << endl; else cout << "  Fail" << endl;

    cout << endl << "------- BVA -------" << endl;
    cout << "Test Data | Expected Result | Actual Result | Pass/Fail" << endl;
    cout << 0 << "         |       " << "Error" << "     |   " << pago_estacionamiento(0); if(pago_estacionamiento(0) == 0) cout << "           |  Pass" << endl; else cout << "  Fail" << endl;
    cout << 1 << "         |       " << 10 << "        |   " << pago_estacionamiento(1); if(pago_estacionamiento(1) == 10) cout << "          |  Pass" << endl; else cout << "  Fail" << endl;
    cout << 5 << "         |       " << 50 << "        |   " << pago_estacionamiento(5); if(pago_estacionamiento(5) == 50) cout << "          |  Pass" << endl; else cout << "  Fail" << endl;
    cout << 6 << "         |       " << 54 << "        |   " << pago_estacionamiento(6); if(pago_estacionamiento(6) == 54) cout << "          |  Pass" << endl; else cout << "  Fail" << endl;
    cout << 10 << "        |       " << 90 << "        |   " << pago_estacionamiento(10); if(pago_estacionamiento(10) == 90) cout << "          |  Pass" << endl; else cout << "  Fail" << endl;
    cout << 11 << "        |       " << 77 << "        |   " << pago_estacionamiento(11); if(pago_estacionamiento(11) == 77) cout << "          |  Pass" << endl; else cout << "  Fail" << endl;

    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
