//演習2-12 List2-13と同様に、二つの整数値を読み込んで、小さいほうの値と大きいほうの値の
//         両方を表示するプログラムを作成せよ。ただし、二つの整数値が等しい場合は、
//         右に示すように「二つの値は同じです。」と表示すること。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：ブロック（複合文）
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/06/13
//備考　　　　　　：
//============================================================================
int main()
{
	//キーボードから入力される二つの値を格納する変数を用意する。
	int firstValue, secondValue;

	//一つ目の整数値の入力を促す為にcoutで画面に「一つ目の整数値：」と表示。
	cout << "一つ目の整数値：";

	//キーボードから入力をする為に標準入力ストリームcinを使う。
	cin >> firstValue;

	//二つ目の整数値の入力を促す為にcoutで画面に「二つ目の整数値：」と表示。
	cout << "二つ目の整数値：";

	//キーボードから入力をする為に標準入力ストリームcinを使う。
	cin >> secondValue;

	//小さいほうの値を格納する変数と、大きい方の値を格納する変数を用意する。
	int minimumValue, maxValue;

	//同じ値かどうか判別する為にif文を利用し、異なる場合は大小比較を行う為elseを利用する。
	if (firstValue == secondValue)
	{
		//同じ値であることを確認する為に「二つの値は同じです。」と画面表示する。
		cout << "二つの値は同じです。\n";

	}else{
		//一つ目の値と二つ目の値の大小を比較する為if文とelseを利用する。
		if (firstValue < secondValue)
		{
			//一つ目の値の方が小さい為、小さい方の値を格納する変数へ一つ目の値を格納する。
			minimumValue = firstValue;
			//二つ目の値の方が大きい為、大きい方の値を格納する変数へ二つ目の値を格納する。
			maxValue = secondValue;
		}else{
			//二つ目の値の方が小さい為、小さい方の値を格納する変数へ二つ目の値を格納する。
			minimumValue = secondValue;
			//一つ目の値の方が大きい為、大きい方の値を格納する変数へ一つ目の値を格納する。
			maxValue = firstValue;
		}

		//どの値が最小値か確認する為に変数に代入した値を画面表示させる。
		cout << "小さいほうの値は" << minimumValue << "です。\n";

		//どの値が最小値か確認する為に変数に代入した値を画面表示させる。
		cout << "大きいほうの値は" << maxValue << "です。\n";
	}
}
