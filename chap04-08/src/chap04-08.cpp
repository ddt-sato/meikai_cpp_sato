//演習4-8	以下の算術演算を行う格式にsizeof演算子やtypeid演算子を適用した値を表示する
//			プログラムを作成せよ。また、実行結果に対する考察を行うこと。
//			int+int、double+doule、int+double、double+int

//考察		int型とdouble型を足した際、サイズとタイプがdouble型のものが表示された。
//			このことから、int型の変数が暗黙的にdouble型へ型変換されていると思われる。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//typeidを利用するためのライブラリを取り込む
#include <typeinfo>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：演算と型
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2021/01/06
//備考　　　　　　：
//============================================================================
int main()
{
	//int型変数が必要な為。
	int firstValue;

	//double型変数が必要な為。
	double secondValue;

	//int+intの結果を画面に表示させる為。
	cout << "int + int\n";
	cout << "　sizeof：" << sizeof(firstValue + firstValue) << "\n";
	cout << "　typeid：" << typeid(firstValue + firstValue).name() << "\n";

	//double+doubleの結果を画面に表示させる為。
	cout << "double + double\n";
	cout << "　sizeof：" << sizeof(secondValue + secondValue) << "\n";
	cout << "　typeid：" << typeid(secondValue + secondValue).name() << "\n";

	//int+doubleの結果を画面に表示させる為。
	cout << "int + double\n";
	cout << "　sizeof：" << sizeof(firstValue + secondValue) << "\n";
	cout << "　typeid：" << typeid(firstValue + secondValue).name() << "\n";

	//double+intの結果を画面に表示させる為。
	cout << "double + int\n";
	cout << "　sizeof：" << sizeof(secondValue + firstValue) << "\n";
	cout << "　typeid：" << typeid(secondValue + firstValue).name() << "\n";
}
