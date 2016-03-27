#define MAX 512

#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>

int ryu(void);
int Ai_Chan(void);

int Hallo_World(void)
{
	char str[MAX] = {"ハローワールド ハロージャパン"};
	for(int i = 0;str[i] != NULL;i++){
		printf("%c",str[i]);
		Sleep(50);
		
	}
	getchar();
	return TRUE;
}
int Ai_Chan(void);

int test(void)
{	
	int val;
	val = 0;
	char str[MAX] = {"これはテストプログラムです"};
	for(int i = 0;str[i] != NULL;i++){
		printf("%c",str[i]);
		Sleep(50);
	}
	return TRUE;
}

int sub01(void)
{
	char str[MAX] = {"こんにちは　私は　コンピュータです\n"};
	char str2[MAX] = {"松本　明様によって作られた　プログラムです"};
		return TRUE;
}

int InputKey(int *cmd){
	
	
	static int cnt_x;
	static int cnt_y;
	/* 変数の定義 */
	int key;
	//char word[MAX] = {"★★★★★★★★★★★★★★"};
	
	/* キー入力がある場合 */
	if (kbhit()){
		/* 画面クリア*/
		system("cls");
		/* キーの値を読み込む */
		key = getch();
		/* 押されたキーがaなら */			
		if(key=='a'){
			cnt_x -= 1;
			
		}
		/* 押されたキーがdなら */	
		else if(key=='d'){
			cnt_x += 1;
			
		}
		/* 押されたキーがwなら */	
		else if(key=='w'){
			cnt_y -= 1;
		}
		/* 押されたキーがzなら */	
		else if(key=='z'){
			printf("Bottom");
		}
		else if(key=='s'){
			cnt_y += 1;
		}
		/* 押されたキーがsなら */	
		else if(key==0x1b){
			printf("Stop");
			*cmd = 0;
		}
		else {
			printf("Exit");
		}
		/*switch(cnt){
			case -1:
				printf("");
				break;
			case 0 : 
				printf("");
			break;
			
			case 1 : 
				printf(" ");
			break;
			
			case 2 : 
				printf("  ");
			break;
			case 3 :
				printf("   ");
			break;
			case 4:
				printf("    ");
			break;
			}*/
			for(int i = 0;i < cnt_y;i++){	
				printf("\n");
			}
			for(int i = 0;i < cnt_x;i++){
					printf(" ");
					
				}
		
			
			printf("★");
			
		

	}
	return TRUE;
}

int Input_Main(void){
	/* 変数の定義 */
	int cmd;
	/* 無限ループ */
	while(TRUE){
		/* キー入力 */
		InputKey(&cmd);
		/* sキーが入力されたら終了 */
		if(cmd == 0){
			break;
		}
	}
	return TRUE;
}

int beta(void)
{
	char str[MAX] = {"休日何しようかな・・・？"};
	for(int i = 0;str[i] != NULL;i++){
		printf("%c",str[i]);
		Sleep(50);
	}
	
	return TRUE;
}
int alpha(void)
{
	
	return TRUE;
}

int ryu(void)
{
	char AA1[MAX] = { "　　　　　　 ＿　 ヽ --__　　__\n" };
	char AA2[MAX] = { "　　　 ＿＿ヽ　─ﾉ　　　 ヽ ｿ丶\n" };
    char AA3[MAX] = { " 　 　- ヽ　　　......　　　　:　:::　　 丶_\n" };
	char AA4[MAX] = { " 　-_　　　　 ::　　 :::　　　　　　　　　|\n" };
	char AA5[MAX] = { " 　　」　　　:　....:::::　　.　　　　 .　...　: ヽ\n" };
	char AA6[MAX] = { " 　″　::　　::::: :.　　　:::::　_　_　 .::　　:　ヽ\n" };
	char AA7[MAX] = { "　 .ﾉ_　.　..-. - |:／フノ￣Τ::─ Υ　:　ﾉ\n" };
	char AA8[MAX] = { "　　|　:/　　　 ﾚ　　ﾉ　　　 .ヽ　　.| ヘ| |　　　　　　　　　　 ／￣￣￣￣￣￣￣￣￣￣\n" };
	char AA9[MAX] = { "　 ⊥|　　 ___ﾉ　　　　　　　　丶　　　 Ｙ_　　　　　　 　　   　|\n" };
	char AA10[MAX] = { "　　　|_＿＿二----──フ─ Ｔﾆ/-ヽ ヽ　　 　　 　　 　 .         |俺は…\n" };
	char AA11[MAX] = { "　　 ┤　ヽ`ヽ､__」　ヽ_-',､-'|`ヽ　　7 |_` |ヽ　　　　　　　  　|　俺より強い奴に\n" };
	char AA12[MAX] = { "　　ト |　 L`二/>ヽ└ ``-ﾆ／　　　|/ |　| ＼　　　　 　         ＜　  会いに行く！\n" };
	char AA13[MAX] = { "　　ヽ7　　　　　　 |　　　　　　　　　　丿 ﾉ　 ＼ 　 　　　   　|\n" };
	char AA14[MAX] = { "　 　ヽ | 　 　　 　|　　　　　　　　　 ___/ |＼　 ＼ 　 　      |\n" };
	char AA15[MAX] = { "　　　ヽ | 　　 　　|　　　　　　　　　 |　　 ヽ-＼　 ＼　　　   |\n" };
	char AA16[MAX] = { "　　　　　|　　　　`ヽ '´ 　 　 　 　　.|　　__ﾉ　 ヽ　　 ＼  　|\n" };
	char AA17[MAX] = { "　　　　　.|　　　 ＿＿＿..　　　　　/　／　　　　|ヽ　　 ＼ .   ＼＿＿＿＿＿＿＿＿＿＿\n" };
	char AA18[MAX] = { "　　　　 ./＼　 ´　＿_　　`　　　／ ／　　　　　ヽ　ヽ──ヽ\n" };
	char AA19[MAX] = { "　　　 ./ .|　＼　　　　　　　　 ／ ／　　　　　　／　　/─_　 ￣￣\n" };
	char AA20[MAX] = { "　　　/　 |　　＼　　　　　　／ ／　　　　 ヽ￣　￣--_──ヽ\n" };
	char AA21[MAX] = { "　　/　　| ヽ　　 ───-　 ／　　7　──ヽ─-￣　　　　　　 ＼\n" };
	for (int i = 0;AA1[i] != NULL;i++) {
		printf("%c", AA1[i]);
		Sleep(10);
	}
	for (int i = 0;AA2[i] != NULL;i++) {
		printf("%c", AA2[i]);
		Sleep(10);
	}
	for (int i = 0;AA3[i] != NULL;i++) {
		printf("%c", AA3[i]);
		Sleep(10);
	}
	for (int i = 0;AA4[i] != NULL;i++) {
		printf("%c", AA4[i]);
		Sleep(10);
	}
	for (int i = 0;AA5[i] != NULL;i++) {
		printf("%c", AA5[i]);
		Sleep(10);
	}
	for (int i = 0;AA6[i] != NULL;i++) {
		printf("%c", AA6[i]);
		Sleep(10);
	}
	for (int i = 0;AA7[i] != NULL;i++) {
		printf("%c", AA7[i]);
		Sleep(10);
	}
	for (int i = 0;AA8[i] != NULL;i++) {
		printf("%c", AA8[i]);
		Sleep(10);
	}
	for (int i = 0;AA9[i] != NULL;i++) {
		printf("%c", AA9[i]);
		Sleep(10);
	}
	for (int i = 0;AA10[i] != NULL;i++) {
		printf("%c", AA10[i]);
		Sleep(10);
	}
	for (int i = 0;AA11[i] != NULL;i++) {
		printf("%c", AA11[i]);
		Sleep(10);
	}
	for (int i = 0;AA12[i] != NULL;i++) {
		printf("%c", AA12[i]);
		Sleep(10);
	}
	for (int i = 0;AA13[i] != NULL;i++) {
		printf("%c", AA13[i]);
		Sleep(10);
	}
	for (int i = 0;AA14[i] != NULL;i++) {
		printf("%c", AA14[i]);
		Sleep(10);
	}
	for (int i = 0;AA15[i] != NULL;i++) {
		printf("%c", AA15[i]);
		Sleep(10);
	}
	for (int i = 0;AA16[i] != NULL;i++) {
		printf("%c", AA16[i]);
		Sleep(10);
	}
	for (int i = 0;AA17[i] != NULL;i++) {
		printf("%c", AA17[i]);
		Sleep(10);
	}
	for (int i = 0;AA18[i] != NULL;i++) {
		printf("%c", AA18[i]);
		Sleep(10);
	}
	for (int i = 0;AA19[i] != NULL;i++) {
		printf("%c", AA19[i]);
		Sleep(10);
	}
	for (int i = 0;AA20[i] != NULL;i++) {
		printf("%c", AA20[i]);
		Sleep(10);
	}
	for (int i = 0;AA21[i] != NULL;i++) {
		printf("%c", AA21[i]);
		Sleep(10);
	}
	
	Ai_Chan();
	return TRUE;
}

int time(void)
{
	time_t now = time(NULL);
    struct tm *pnow = localtime(&now);

	char buff[MAX] = "";
	char Word[MAX] = { "です☆\n" };

	sprintf(buff,"%d:%d:%d",pnow->tm_hour,pnow->tm_min,pnow->tm_sec);
	for(int i = 0;buff[i] != NULL;i++){
		printf("%c",buff[i]);
		Sleep(50);
	}
	for(int i = 0 ;Word[i] != NULL;i++){
		printf("%c",Word[i]);
		Sleep(50);
	}
	Ai_Chan();

	return TRUE;
}

int Ai_Chan(void)
{
	char str[MAX] = { 0 };
	char buffer[MAX] = { 0 };
	char Word1[MAX] = {"初めまして、人工知能の愛と言いまーす 気軽に話しかけてね\n"};
	char Word2[MAX] = {"こんにちはー★\n"};
	char Word3[MAX] = {"私は、松本　明様によって作られた　人工知能です。よろしくお願いしますー\n"};
	char Word4[MAX] = {"ごめんなさい　まだ、その質問には答えられません＞＜\n"};
	char Word5[MAX] = {"ありがとうございます★\n"};
	char Word6[MAX] = {"そういうことだよ\n"};
	char Word7[MAX] = {"お疲れ様です★\n"};
	for(int i = 0;Word1[i] != NULL;i++){
		printf("%c",Word1[i]);
		Sleep(50);
	}
	
	while(TRUE){
	
	
	
		while( fgets(buffer, sizeof(buffer), stdin) != NULL ) {
			if( sscanf(buffer, "%s", str) == 1 ) {
				printf("Read (%s)\n", str);
				
			}
			break;
		}
		if(!strcmp(str,"こんにちは")){
			for(int i = 0;Word2[i] != NULL;i++){
				printf("%c",Word2[i]);
				Sleep(50);
			}
		}
		else if(!strcmp(str,"自己紹介して")){
			for(int i = 0;Word3[i] != NULL;i++){
				printf("%c",Word3[i]);
				Sleep(50);
			}	
		}
		else if(!strcmp(str,"可愛いね") || (!strcmp(str,"かわいいね")) || (!strcmp(str,"カワイイね"))){
			for(int i = 0;Word5[i] != NULL;i++){
				printf("%c",Word5[i]);
				Sleep(50);
			}
		}
		
		else if(!strcmp(str,"どういうことなの") || (!strcmp(str,"どういうことなの・・・")) || (!strcmp(str,"どういうことなの？"))){
			for(int i = 0;Word6[i] != NULL;i++){
				printf("%c",Word6[i]);
				Sleep(50);
			}	
		}
		else if(!strcmp(str,"今何時") || (!strcmp(str,"今何時？"))){
			time();
			break;
		}
		else if(!strcmp(str,"疲れた") || (!strcmp(str,"疲れたー")) || (!strcmp(str,"つかれたー"))){
			for(int i = 0;Word7[i] != NULL;i++){
				printf("%c",Word7[i]);
				Sleep(50);
			}
		}
		else if(!strcmp(str,"リュウ") || (!strcmp(str,"リュウ見せて")) || (!strcmp(str,"リュウが見たい"))){
			ryu();
			break;
		}
		
		else {
		 
		 	for(int i = 0;Word4[i] != NULL;i++){
				printf("%c",Word4[i]);
				Sleep(50);
				}
			}
		
	}
	return TRUE;		
}

int main(void)
{
	Ai_Chan();
	/*Input_Main();*/
	//Hallo_World();
	
	return TRUE;
}
