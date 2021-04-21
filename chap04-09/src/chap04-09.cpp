//演習4-9	三つの整数値を読み込んで、その合計と平均を表示するプログラムを作成せよ。
//			平均は実数値で表示すること。キャスト記法を用いるもの、関数的記法を用いるもの、
//			static_cast演算子を用いるものを作成すること。

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
//日付　　　　　　：2021/02/03
//備考　　　　　　：
//============================================================================
int main()
{
	//int型変数が三つ必要な為。
	int firstValue;
	int secondValue;
	int thirdValue;

	//一つ目の整数値の入力を促す為。
	cout << "一つ目の整数値：";

	//一つ目の入力値を格納する為。
	cin >> firstValue;

	//二つ目の整数値の入力を促す為。
	cout << "二つ目の整数値：";

	//二つ目の入力値を格納する為。
	cin >> secondValue;

	//三つ目の整数値の入力を促す為。
	cout << "三つ目の整数値：";

	//三つ目の入力値を格納する為。
	cin >> thirdValue;

	//合計値を表示させる為。
	cout << "合計値：" << (double)(firstValue + secondValue + thirdValue) << "\n";

	//平均値を表示させることを明示する為。
	cout << "平均値\n";

	//キャスト記法を用いて平均値を画面に表示させる為。
	cout << "　キャスト記法：";
	cout << (double)(firstValue + secondValue + thirdValue) / 3 << "\n";

	//関数的記法を用いて平均値を画面に表示させる為。
	cout << "　関数的記法：";
	cout << double(firstValue + secondValue + thirdValue) / 3 << "\n";

	//static_castを用いて平均値を画面に表示させる為。
	cout << "　static_cast：";
	cout << static_cast<double>(firstValue + secondValue + thirdValue) / 3 << "\n";
}
