//演習1-8 int型の変数に実数値の初期化子を与えるとどうなるか。
//        プログラムを作成して確認せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：初期化子を与えた場合の動作確認
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/05/09
//============================================================================
int main()
{
	//動作を確認する為にint型の変数に小数部の有る初期化子を与える。
	int firstValue = 342.4;

	//小数部の有る初期化子を与えた場合に、変数の値がどうなっているかを確認する為にcoutで画面表示させる。(小数部が切り捨てられる)
	cout << "firstValueの値は" << firstValue << "です。\n";

    //

}
