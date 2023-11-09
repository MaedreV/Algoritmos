#include <iostream>
#include "veiculo.h"
using namespace std;







int main() {




	{
//			 Veiculo veiculo1("v1");
			Veiculo* obj1 = new Veiculo("v1");
			obj1->setNumRodas(3);
			obj1->setNumRodas(3);
			int rodas1 = obj1->getNumRodas();
			cout << rodas1 << endl;
//
			delete obj1;
		{

		}}
////				Veiculo veiculo2("v2");
//				Veiculo* obj2 = new Veiculo("v2");
//				obj2->setNumRodas(2);
//						int rodas2 = obj2->getNumRodas();
//						cout << rodas2 << endl;
//				delete obj2;
//		{
////					 Veiculo veiculo3("v3");
//					Veiculo* obj3 = new Veiculo("v3");
//					obj3->setNumRodas(4);
//										int rodas3 = obj3->getNumRodas();
//										cout << rodas3 << endl;
//					delete obj3;
//		}
//		}
//		}



}
