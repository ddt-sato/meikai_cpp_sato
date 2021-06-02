//演習4-13	性別、季節、曜日などを表す列挙体を自由に定義し、それを用いたプログラムを作成せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：列挙体
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2021/05/26
//備考　　　　　　：
//============================================================================
int main()
{
	//列挙体を定義する為。
	enum dayOfTheWeek { Mon, Tue, Wed, Thu, Fri, Sat, Sun };

	//入力した値を格納する為の変数を用意。
	int inputValue;

	//0～3の値の入力を促す為。
	cout << "0…月　1…火　2…水　3…木　4…金　5…土　6…日\n入力値：";

	////入力した値を変数へ格納する為。
	cin >> inputValue;

	//定義した列挙体を型に指定する為。
	dayOfTheWeek selectTrump = static_cast<dayOfTheWeek>(inputValue);

	//表示させる値を入力値によって判別する為。
	switch (selectTrump) {
		case Mon	: cout << "月\n";	break;
		case Tue	: cout << "火\n";	break;
		case Wed	: cout << "水\n";	break;
		case Thu	: cout << "木\n";	break;
		case Fri	: cout << "金\n";	break;
		case Sat	: cout << "土\n";	break;
		case Sun	: cout << "日\n";	break;
		default 	: cout << "不正な値です。\n";
	}
}
