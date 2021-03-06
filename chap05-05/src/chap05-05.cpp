//演習5-5	異なる要素が同じ値とならないように、演習5-3のプログラムを改選したプログラムを作成せよ。
//			たとえば、{1,3,5,6,1,2}とならないようにすること。

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
//日付　　　　　　：2021/06/16
//備考　　　　　　：
//============================================================================
int main()
{
	//要素数を定義する為。
	const int ELEMENT = 6;

	//int型かつ指定された数の要素を持つ配列を用意する為。
	int arrayValue[ELEMENT];

	//現在の時刻から乱数の種となる値を設定する為。
	srand(time(NULL));

	//要素数分繰り返す為。
	for (int i = 0; i < ELEMENT; i++){

		//要素に値を設定する為。
		arrayValue[i] = rand() % 10 + 1;

		//値を出力する為。
		cout << "◆比較開始　arrayValue[" << i << "]：" << arrayValue[i] << "\n";

		//比較対象の要素数分繰り返す為。
		for (int j = 0; j < i; j++){

			//値を出力する為。
			cout << "・比較対象　arrayValue[" << j << "]：" << arrayValue[j] << "\n";

			//処理を繰り返す為。
			while (arrayValue[i] == arrayValue[j]) {

				//要素に値を設定する為。
				arrayValue[i] = rand() % 10 + 1;

				//値を出力する為。
				cout << "　　書換　　arrayValue[" << i << "]：" << arrayValue[i] << "\n";
			};
		}

		//値を出力する為(結果を見やすくする為出力)。
		cout << "\n";
	}

	//値を出力する為。
	cout << "◆結果\n";

	//要素数分繰り返す為。
	for (int i = 0; i < ELEMENT; i++){

		//値を出力する為。
		cout << "arrayValue[" << i << "]：" << arrayValue[i] << "\n";
	}
}
