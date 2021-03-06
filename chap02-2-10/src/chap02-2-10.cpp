//演習2-10 キーボードから読み込んだ三つの整数の最小値を求めて表示するプログラムを作成せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：アルゴリズムについて
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/06/04
//備考　　　　　　：
//============================================================================
int main()
{
	//キーボードから入力される3つの値を格納する変数を用意する。
	int firstValue, secondValue, thirdValue;

	//一つ目の整数値の入力を促す為にcoutで画面に「一つ目の整数値：」と表示。
	cout << "一つ目の整数値：";

	//キーボードから入力をする為に標準入力ストリームcinを使う。
	cin >> firstValue;

	//二つ目の整数値の入力を促す為にcoutで画面に「二つ目の整数値：」と表示。
	cout << "二つ目の整数値：";

	//キーボードから入力をする為に標準入力ストリームcinを使う。
	cin >> secondValue;

	//三つ目の整数値の入力を促す為にcoutで画面に「三つ目の整数値：」と表示。
	cout << "三つ目の整数値：";

	//キーボードから入力をする為に標準入力ストリームcinを使う。
	cin >> thirdValue;

	//入力した三つの値の最小値を格納する為に変数を用意し、一つ目の値で初期化する。
	int minimumValue = firstValue;

	//まず一つ目と二つ目のどちらの値が小さいかを判別する為、if文を使用する。
	if (minimumValue > secondValue)

		//次に三つ目の値と小さかった方の値を比較する為、最小値格納用の変数に二つ目の値を格納する。
		minimumValue = secondValue;

	//上記条件にて小さかった方と三つ目のどちらの値が小さいかを判別する為、if文を使用する。
	if (minimumValue > thirdValue)

		//三つ目の値の方が小さい為、最小値用の変数に三つ目の値を格納する。
		minimumValue = thirdValue;

	//どの値が最小値か確認する為に変数に代入した値を画面表示させる。
	cout << "最小値は" << minimumValue << "です。\n";
}
