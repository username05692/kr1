#include <stdio.h>
#include <locale.h>// ���������� �������
#include <math.h>
#include <stdlib.h>
#define N 6// ����� ������ 
int main() {
    int B[N]; // �����
    setlocale(LC_ALL, "ukr"); // ������������ ����������

    printf("����i�� 6  �������i� ������i\n");//���������� ������ ������������
    for (int i = 0; i < N; i++) {
        printf("������ � i������� %d:", i );
        scanf_s("%d", &B[i]);
    }
    int *h;//���������� ���������
    int dob = 1;//��������� ����� dob �������� 1

    for (h = B; h < B + N; h+=2) {//h=B ������������ ��������� �� ������ ������� ������ 
        dob *= *h; // ����� �������
        }

   printf("������� ����� � ������� ��������: %.1d\n", dob);//��������� ���������� 
    
}
