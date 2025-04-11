#pragma warning (disable:4996)
#include <stdio.h>


int main() {

	int put_sec;   //입력받는 초
	int hour, min, sec; //시간 분 초

	printf("초(seconds)를 입력하세요.");
	scanf("%d", &put_sec);

	hour = put_sec / 3600;
	min = put_sec % 3600 / 60; //예를 들어 3660초를 입력했으면 나머지 60에다가 60을 나눴으니 몫이 1 나옴 그래서 1분
	sec = put_sec % 60;   //ex 122초를 입력했으면 2분 2초 이런식으로 나와야 하기 때문에 %(나머지)를 이용해서 계산

	printf("입력하신 %d초는 %d시간 %d분 %d초입니다.", put_sec, hour, min, sec);
}