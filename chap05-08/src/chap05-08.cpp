//演習5-8	配列の要素の並びをシャッフルする(要素の並びがランダムになるようにかき混ぜる)
//			プログラムを作成せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//time関数を利用できるようにするライブラリを取り込む
#include <ctime>

//rand関数を利用できるようにするライブラリを取り込む
#include <cstdlib>

//stdという名前空間を利用する
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：配列
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2021/06/28
//備考　　　　　　：
//============================================================================
int main()
{
	//要素数を定義する為。
	const int ELEMENT = 5;

	//int型かつ指定された数の要素を持つ配列を用意する為。
	int arrayValue[ELEMENT];

	//現在の時刻から乱数の種となる値を設定する為。
	srand(time(NULL));

	//値を出力する為。
	cout << "◆値設定\n";

	//要素数分繰り返す為。
	for (int i = 0; i < ELEMENT; i++){

		//要素に値を設定する為。
		arrayValue[i] = i + 1;

		//値を出力する為。
		cout << "arrayValue[" << i << "]：" << arrayValue[i] << "\n";
	}

	//値を出力する為。
	cout << "\n◆シャッフル開始\n";

	//要素数分繰り返す為。
	for (int j = 0; j < ELEMENT; j++){

		//要素数までのランダムな値を設定する為。
		int randValue = rand() % (ELEMENT);

		//入れ替え元を保持する為。
		int exchangeValue = arrayValue[j];

		//値を出力する為。
		cout << "・以下を入れ替え\n";
		cout << "　-入れ替え前\n";
		cout << "　arrayValue[" << j << "]：" << arrayValue[j] << "\n";
		cout << "　arrayValue[" << randValue << "]：" << arrayValue[randValue] << "\n";

		//ランダムな要素の値を設定する為。
		arrayValue[j] = arrayValue[randValue];

		//ランダムな要素に値を設定する為。
		arrayValue[randValue] = exchangeValue;

		//値を出力する為。
		cout << "　-入れ替え後\n";
		cout << "　arrayValue[" << j << "]：" << arrayValue[j] << "\n";
		cout << "　arrayValue[" << randValue << "]：" << arrayValue[randValue] << "\n";
	}

	//値を出力する為。
	cout << "\n◆結果\n";

	//要素数分繰り返す為。
	for (int k = 0; k < ELEMENT; k++){

		//値を出力する為。
		cout << "arrayValue[" << k << "]：" << arrayValue[k] << "\n";
	}
}
