#include <iostream>
using namespace std;
// Định nghĩa số phần tử trong mảng
#define ROW	10
#define COL 10
\
// Hàm nhập mảng
void nhapmang(int arr[ROW][COL], int& r, int& c)
{

	cout << "Nhap so dong: ";
	cin >> r;
	cout << "Nhap so cot: ";
	cin >> c;
	// khởi tạo giá trị cho mảng
	// Do có cột và hàng nên sẽ sd 2 vòng lặp
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}

}
//Ham xuat mang
void xuatmang(int arr[ROW][COL], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
// Hàm sắp xếp tăng
void sapxeptang(int arr[ROW][COL], int r, int c)
{
	int k = r * c;
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (arr[i / c][i % c] > arr[j / c][j % c])
			{
				int temp = arr[i / c][i % c];
				arr[i / c][i % c] = arr[j / c][j % c];
				arr[j / c][j % c] = temp;
			}
		}
	}
}
//Ham sap xep giam
void sapxepgiam(int arr[ROW][COL], int r, int c)
{
	int k = r * c;
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (arr[i / c][i % c] < arr[j / c][j % c])
			{
				int temp = arr[i / c][i % c];
				arr[i / c][i % c] = arr[j / c][j % c];
				arr[j / c][j % c] = temp;
			}
		}
	}
}

int main()
{
	int a[ROW][COL];
	int row, col;

	nhapmang(a, row, col);
	xuatmang(a, row, col);
	sapxeptang(a, row, col);
	cout << "Mang tang dan" << endl;
	xuatmang(a, row, col);
	sapxepgiam(a, row, col);
	cout << "Mang giam dan" << endl;
	xuatmang(a, row, col);
	return 0;
}