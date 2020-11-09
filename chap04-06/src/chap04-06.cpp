//演習4-6 3種類の浮動小数点型の大きさをsizeof演算子によって表示する
//        プログラムを作成せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//浮動小数点表示させるためのライブラリを取り込む
#include <iomanip>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：浮動小数点型
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2020/11/09
//備考　　　　　　：
//============================================================================
int main()
{
	//float型変数が必要な為。
	float firstValue;

	//double型変数が必要な為。
	double secondValue;

	//long double型変数が必要な為。
	long double thirdValue;

	//結果を画面に表示させる為。
	cout << "float型の変数のサイズ：" << sizeof(firstValue) << "\n";

	//結果を画面に表示させる為。
	cout << "double型の変数のサイズ：" << sizeof(secondValue) << "\n";

	//結果を画面に表示させる為。
	cout << "long double型の変数のサイズ：" << sizeof(thirdValue) << "\n";
}
