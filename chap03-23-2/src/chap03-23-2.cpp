//演習3-23 合計だけでなく平均も求めるように、List3-15およびLiist3-16を書き換えた
//         プログラムをそれぞれ作成せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：break文
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/10/09
//備考　　　　　　：List3-16を書き換え
//============================================================================
int main() {
	//定数を定義する為。
	const int LIMIT_VALUE = 1000;
	const string FIRST_COMMENT = "整数を加算、平均を算出します。\n何個計算しますか：";
	const string LIMIT_COMMENT = "合計値が1000を超えました。\n最後の数値は無視します。";

	//入力値を格納する変数が必要な為。
	int countValue;

	//処理を確認する為。
	cout << FIRST_COMMENT;

	//入力値を格納する為。
	cin >> countValue;

	//合計と平均を格納する変数が必要な為。
	int sumValue = 0;
	int averageValue = 0;

	//以下の処理を繰返し実行する為。
	for (int i = 1; i <= countValue; i++) {
		//入力値を格納する変数が必要な為。
		int targetValue;

		//入力を促す為。
		cout << "整数：";

		//入力値を格納する為。
		cin >> targetValue;

		//条件に当てはまった場合のみ処理をする為。
		if (sumValue + targetValue > LIMIT_VALUE) {
			//画面表示させる為。
			cout << LIMIT_COMMENT;

			//ループを抜け出す為。
			break;
		}

		//加算する為。
		sumValue += targetValue;

		//平均値を算出する為。
		averageValue = sumValue / i;
	}
	//合計と平均を確認する為。
	cout << "合計は" << sumValue << "です。\n平均は" << averageValue << "です。\n";
}
