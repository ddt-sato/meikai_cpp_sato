//演習2-5 正の整数値を読み込んで、それを3で割った順に応じて「その値は3で割り切れます。」
//        「その値を3で割った剰余は1です。」「その値を3で割った剰余は2です。」の
//        いずれかを表示するプログラムを作成せよ。
//        ※正でない値を読み込んだ場合は、「正でない値が入力されました。」と表示すること。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：if文の動作確認
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/05/28
//備考　　　　　　：
//============================================================================
int main()
{
	//キーボードから入力された値を格納するために変数を用意する。
	int firstValue;

	//整数値への入力を促す為にcoutで画面に「整数値：」と表示。
	cout << "整数値：";

	//キーボードから入力をする為に標準入力ストリームcinを使う。
	cin >> firstValue;

	//入力された値が0より大きい値(正数)であるかどうか判別する為にif文を利用する。
	if (firstValue > 0)
		//入力された値が3で割り切れるかを判別する為にifを利用する。
		if (firstValue % 3 == 0)
			//条件に当てはまったことを確認する為に「その値は3で割り切れます。」と画面表示させる。
			cout << "その値は3で割り切れます。\n";

		//入力された値が3で割り切れず、余りが1であるかを判別する為にelse ifを利用する。
		else if (firstValue % 3 == 1)
			//条件に当てはまったことを確認する為に「その値を3で割った剰余は1です。」と画面表示させる。
			cout << "その値を3で割った剰余は1です。\n";

		//上記条件両方に当てはまらない条件は一つ(3で割った余りが2)の為、elseを利用する。
		else
			//elseに該当した事を確認する為に「その値を3で割った剰余は2です。」と画面表示させる。
			cout << "その値を3で割った剰余は2です。\n";

	else
		//正数ではなかったことを確認する為に「正でない値が入力されました。」と画面表示させる。
		cout << "正でない値が入力されました。\n";
}
