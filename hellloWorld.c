/*
 * hellloWorld.c
 *
 *  Created on: 2018/08/28
 *      Author: hp
 */


#include <stdio.h>
#include <string.h>

int main()
{
	void test();
	char c [20];
	strcpy(c,"Hello,World");
	printf("%s\n",c);
	test();
	return(0);
}

void test()
{
	void charTest();
	void intTest();
	void shortTest();
	void typedefStructTest();
	int returnTest();
	void ifTest();
	void switchTest();
	void whileTest();
	void doWhileTest();
	int add(int,int);
	charTest();
	intTest();
	shortTest();
	typedefStructTest();
	returnTest();
	ifTest();
	switchTest();
	whileTest();
	doWhileTest();
	int a = 10;
	int b = 30;
	int c;
	c = add(a,b);
	printf("a + b = %d\n",c);
}

void charTest()
{
	char charSize = sizeof(char);
	printf("char型のサイズは%d,charSizeのアドレスは%p\n",charSize,&charSize);
}

void intTest()
{
	int intSize;
	printf("int型のサイズは%d,intSizeのアドレスは%p\n",(int)sizeof(intSize),&intSize);
}

void shortTest()
{
	short shortSize = sizeof(short);
	printf("short型のサイズは%d,shortSizeのアドレスは%p\n",shortSize,&shortSize);
}

void typedefStructTest()
{
	typedef struct
	{
		int no;
		char name [20];
	}STUDENT;
	STUDENT s;
	STUDENT *STUDENTptr;
	STUDENTptr = &s;
	s.no = 111;
	strcpy(s.name,"bobby");
	printf("生徒の名前は%s,生徒Noは%d\n",s.name,STUDENTptr->no);
	printf("STUDENT型のサイズは%d,STUDENT型変数sのアドレスは%p\n",(int)sizeof(STUDENT),&s);
}

int returnTest()
{
	printf("順次実行は一行の式、あるいは文です\n");
	printf("制御構造以外は、行の最後にセミコロンをつけます\n");
	return(0);
}

void ifTest()
{
	int x = 20;
	if(x > 0)
		printf("変数の値はプラスの値です\n");
	else
		printf("一行で書かれていれば{}を省略できます\n");
	if(x)
	{
		printf("0なのか0以外かで判定できます\n");
	}else{
		printf("0ならばelse0以外はtrueです\n");
	}
}

void switchTest()
{
	char x = 'r';
	switch(x)
	{
	case 1: printf("BLACK\n");
	break;
	case 'r': printf("YELLOW\n");
	break;
	case 'e': printf("RED\n");
	break;
	//defaultはdefaultのみ。case defaultではない！
	default : printf("default\n");
	break;
	}

	//switchの中にswitchを書いてif文のようにできる。
	switch(x)
	{
	case 'r': printf("ra\n");
	break;
		switch(x)
		{
		case 'r': printf("rb\n");
		break;
		default : printf("default\n");
		break;
		}break;//ここにbreakを入れたらerrorが消えた。
	case 'a': printf("breakなし\n");
	break;
	case 'b': printf("break\n");
	break;
	}
}

void whileTest()
{
	int cnt = 10;
	printf("カウント\n");
	while(cnt >0)
	{
		printf("%d\n",cnt);
		--cnt;
	}
	printf("0\n!!\n!\n");
}

void doWhileTest()
{
	int cnt = 10;
	do
	{
		printf("dowhile-%d\n",cnt);
	}while(--cnt>0);
}

int add(int x,int y)
{
	int answer;
	answer = x + y;
	printf("add関数のアドレスは%p,add関数のサイズは%d\n",&add,(int)sizeof(add));
	printf("answerのあどれすは%p,answerのサイズは%d\n",&answer,(int)sizeof(answer));
	return answer;
}
