#pragma warning (disable:4996)
#include <stdio.h>


int main() {

	int put_sec;   //�Է¹޴� ��
	int hour, min, sec; //�ð� �� ��

	printf("��(seconds)�� �Է��ϼ���.");
	scanf("%d", &put_sec);

	hour = put_sec / 3600;
	min = put_sec % 3600 / 60; //���� ��� 3660�ʸ� �Է������� ������ 60���ٰ� 60�� �������� ���� 1 ���� �׷��� 1��
	sec = put_sec % 60;   //ex 122�ʸ� �Է������� 2�� 2�� �̷������� ���;� �ϱ� ������ %(������)�� �̿��ؼ� ���

	printf("�Է��Ͻ� %d�ʴ� %d�ð� %d�� %d���Դϴ�.", put_sec, hour, min, sec);
}