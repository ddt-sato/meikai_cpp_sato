//演習1-3 文の終端を示すセミコロン;が欠如しているとどうなるか。
//        プログラムをコンパイルして検証せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：画面への出力を行う
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/05/09
//============================================================================
int main()
{
	//一行目に「初めてのC++プログラム。」を画面出力させる セミコロン削除
	cout << "初めてのC++プログラム。\n"
	//二行目に「画面に出力しています。」を画面出力させる セミコロン削除
	cout << "画面に出力しています。\n"
}
