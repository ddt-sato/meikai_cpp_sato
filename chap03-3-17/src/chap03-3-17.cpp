//演習3-17 季節を求めるList3-1の月の読み込みにおいて、1～12以外の値が入力された場合は、
//         再入力さえるように変更したプログラムを作成せよ。(doの中にdo文が入る二重ループとなる。)

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：多重ループ
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/09/24
//備考　　　　　　：
//============================================================================
int main()
{
	//リトライ用のYes/Noを格納する為。
	string retryValue;

	//以下の処理を繰り返し行う為。
	do
	{
		//入力値を格納する為。
		int monthValue;

		//以下の処理を繰り返し行う為。
		do
		{
			//月の入力を促す為。
			cout << "季節を求めます。\n何月ですか：";

			//入力値を格納する為。
			cin >> monthValue;

		//1～12以外はやり直させる為。
		}
		while (monthValue < 1 || 12 < monthValue);

		//条件に当てはまった場合に処理を行う為。
		if (monthValue >= 3 && monthValue <= 5)
		{
			//画面表示させて確認する為。
			cout << "それは春です。";
		}
		//上記条件ではなく以下の条件に当てはまった場合に処理を行う為。
		else if (monthValue >= 6 && monthValue <= 8)
		{
			//画面表示させて確認する為。
			cout << "それは夏です。";
		}
		//上記条件ではなく以下の条件に当てはまった場合に処理を行う為。
		else if (monthValue >= 9 && monthValue <= 11)
		{
			//画面表示させて確認する為。
			cout << "それは秋です。";
		}
		//上記条件ではなく以下の条件に当てはまった場合に処理を行う為。
		else if (monthValue == 12 || monthValue == 1 || monthValue == 2)
		{
			//画面表示させて確認する為。
			cout << "それは冬です。";
		}

		//YかNの入力を促す為。
		cout << "もう一度？ Y…Yes/N…No：";

		//入力値を格納する為。
		cin >> retryValue;

	}

	while (retryValue == "Y" || retryValue == "y");
}
