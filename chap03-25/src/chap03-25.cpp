//演習3-25 List3-3の数当てゲームのプレーヤが値を入力できる回数に制限を設けたプログラムを作成せよ。
//         制限回数内にあてられなかった場合は、正解を表示してゲームを終了すること。

//時間関係の関数を利用できるようにする為。
#include <ctime>

//rand関数を利用できるようにする為。
#include <cstdlib>

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：goto文
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/10/09
//備考　　　　　　：
//============================================================================
int main() {

	//乱数の種となる値を設定する為。
	srand(time(NULL));

	//定数を定義する為。
	const int LIMIT_VALUE = 5;
	const string SMALL_COMMENT = "もっと小さな数。\n";
	const string BIG_COMMENT = "もっと大きな数。\n";
	const string ANSWER_COMMENT = "正解です。\n";

	//0～99のランダムな値が必要な為。
	int randomValue = rand() % 100;

	//入力回数を数える変数が必要な為。
	int countValue = 0;

	//入力値を格納する変数が必要な為。
	int answerValue;

	//処理を確認する為。
	cout << "数当てゲーム開始\n0～99の数を" << LIMIT_VALUE << "回までに当ててください。\n";

	//以下の処理を繰返し実行する為。
	do
	{
		//文字を格納する変数が必要な為。
		string hintComment;

		//入力を促す為。
		cout << "値を入力：";

		//入力値を格納する為。
		cin >> answerValue;

		//以下条件に当てはまった場合のみ処理を行う為。
		if (answerValue > randomValue)
		{
			//入力値より小さい値の入力を促す為。
			hintComment = SMALL_COMMENT;

			//不正解数を加算する為。
			countValue++;
		}
		//上記条件に当てはまらず以下条件に当てはまった場合のみ処理を行う為。
		else if (answerValue < randomValue)
		{
			//入力値より大きい値の入力を促す為。
			hintComment = BIG_COMMENT;

			//不正解数を加算する為。
			countValue++;
		}

		//以下条件に当てはまった場合のみ処理を行う為。
		if (countValue == LIMIT_VALUE)
		{
			//制限値まで不正解をした場合処理を飛ばす為。
			goto Exit;
		}
		//上記条件に当てはまらなかった場合に処理を行う為。
		else
		{
			//ヒントを出力する為。
			cout << hintComment;
		}
	}
	//条件に当てはまった場合再度実行する為。
	while (answerValue != randomValue);

	//正解したことを確認する為。
	cout << ANSWER_COMMENT;

	//不正解時ここまで処理を飛ばす為。
	Exit:

	//答えを出力する為。
	cout << "答えは" << randomValue << "です。\n";
}
