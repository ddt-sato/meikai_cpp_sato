//演習3-24 合計だけでなく平均も求めるように、List3-17を書き換えたプログラムを作成せよ。
//         なお、読み込んだ負の数の個数は平均を求める際の分母から除外すること。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：continue文
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/10/09
//備考　　　　　　：
//============================================================================
int main()
{
	//定数定義する為。
	const string FIRST_COMMENT = "整数を加算、平均を算出します。\n何個計算しますか：";
	const string SKIP_COMMENT = "負の数は計算しません。\n";

	//入力値を格納する変数が必要な為。
	int repeatValue;

	//処理を確認する為。
	cout << FIRST_COMMENT;

	//入力値を格納する為。
	cin >> repeatValue;

	//合計と平均と割る値を格納する変数が必要な為。
	int sumValue = 0;
	int averageValue = 0;
	int divisionCount = 0;

	//以下の処理を繰返し実行する為。
	for (int i = 0; i < repeatValue; i++)
	{
		//入力値を格納する変数が必要な為。
		int targetValue;

		//入力を促す為。
		cout << "整数：";

		//入力値を格納する為。
		cin >> targetValue;

		//条件に当てはまった場合のみ処理をする為。
		if (targetValue < 0)
		{
			//画面に表示させる為。
			cout << SKIP_COMMENT;

			//処理をスキップする為。
			continue;
		}

		//加算する為。
		sumValue += targetValue;

		//1加算する為。
		divisionCount++;

		//平均値を算出する為。
		averageValue = sumValue / divisionCount;
	}
	//合計と平均を確認する為。
	cout << "合計は" << sumValue << "です。\n平均は" << averageValue << "です。\n";
}
