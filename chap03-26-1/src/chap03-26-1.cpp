//演習3-26 人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
//         ・人間が望む限り何度でも繰り返せるようにするもの。
//         ・いずれか一方が3回勝つまで繰り返すもの。
//         など、複数のパターンのプログラムを作ること。

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
//メソッドの説明　：ループ文
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/10/16
//備考　　　　　　：人間が望む限り何度でも繰り返せるようにするもの。
//　　　　　　　　　値が小さい方が勝ち。
//============================================================================
int main() {

	//乱数の種となる値を設定する為。
	srand(time(NULL));

	//定数を定義する為。
	const string FIRST_COMMENT = "じゃんけん・・・\n1…グー/2…チョキ/3…パー：";
	const string RETRY_COMMENT = "もう一度？Y…Yes/N…No：";
	const string ERROR_COMMENT1 = "1～3を入力してください。\n";
	const string ERROR_COMMENT2 = "ランダムな値が不正です。\n";
	const string WIN_COMMENT = "勝ち\n";
	const string LOSE_COMMENT = "負け\n";
	const string DRAW_COMMENT = "あいこ\n";
	const string INFO_STONE = "グー";
	const string INFO_SCISSORS = "チョキ";
	const string INFO_PAPER = "パー";
	const int HAND_STONE = 1;
	const int HAND_SCISSORS = 2;
	const int HAND_PAPER = 3;

	//入力値を格納する変数が必要な為。
	int yourHand = 0;

	//文字列格納用の変数が必要な為。
	string yourInfo;
	string enemyInfo;
	string retryValue;

	//以下の処理を繰返し実行する為。
	do
	{
		//1～3のランダムな値を求める為。
		int enemyHand = rand() % 3 + 1;

		//処理を確認する為。
		cout << FIRST_COMMENT;

		//入力値を格納する為。
		cin >> yourHand;

		//入力値によって表示させる文字を変える為。
		switch(yourHand)
		{
			//入力値が1の場合グーを表示させる為。
			case HAND_STONE :
				yourInfo = INFO_STONE;
				break;
			//入力値が2の場合チョキを表示させる為。
			case HAND_SCISSORS :
				yourInfo = INFO_SCISSORS;
				break;
			//入力値が3の場合パーを表示させる為。
			case HAND_PAPER :
				yourInfo = INFO_PAPER;
				break;
			//入力値が1～3以外の場合エラーにする為。
			default :
				cout << ERROR_COMMENT1;
				//次のExitまで処理をスキップする為。
				goto Exit;
		}

		//ランダムな値によって表示させる文字を変える為。
		switch(enemyHand)
		{
			//ランダム値が1の場合グーを表示させる為。
			case HAND_STONE :
				enemyInfo = INFO_STONE;
				break;
			//ランダム値が2の場合チョキを表示させる為。
			case HAND_SCISSORS :
				enemyInfo = INFO_SCISSORS;
				break;
			//ランダム値が3の場合パーを表示させる為。
			case HAND_PAPER :
				enemyInfo = INFO_PAPER;
				break;
			//ランダム値が1～3以外の場合エラーにする為。
			default :
				cout << ERROR_COMMENT2;
				//次のExitまで処理をスキップする為。
				goto Exit;
		}

		//自分と相手の手を確認する為。
		cout << "自分：" << yourInfo << "\n相手：" << enemyInfo << "\n結果：";

		//自分パー、相手グーの場合次のif文にあてはめさせる為。
		if (yourHand == HAND_PAPER && enemyHand == HAND_STONE)
		{
			//値をパー < グーにする為。
			yourHand = 0;
		}
		//自分グー、相手パーの場合次のif文にあてはめさせる為。
		else if (yourHand == HAND_STONE && enemyHand == HAND_PAPER)
		{
			//値をパー < グーにする為。
			enemyHand = 0;
		}

		//自分と相手の手が同じ場合の処理をする為。
		if (yourHand == enemyHand)
		{
			//あいこ
			cout << DRAW_COMMENT;
		}
		//自分の手が相手の手より小さい場合の処理をする為。
		else if (yourHand < enemyHand)
		{
			//勝ち
			cout << WIN_COMMENT;
		}
		//自分の手が相手の手より大きい場合の処理をする為。
		else
		{
			//負け
			cout << LOSE_COMMENT;
		}

		//YかNの入力を促す為。
		cout << RETRY_COMMENT;

		//入力値を格納する為。
		cin >> retryValue;
	}
	//条件に当てはまった場合再度実行する為。
	while (retryValue == "Y" || retryValue == "y");

	//エラー時全処理をスキップさせる為。
	Exit:
		;

}
