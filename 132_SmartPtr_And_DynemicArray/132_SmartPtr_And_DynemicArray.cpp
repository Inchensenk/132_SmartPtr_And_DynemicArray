// 132_SmartPtr_And_DynemicArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//https://www.youtube.com/watch?v=edGrIXZJEAA

#include <iostream>
#include <memory>
using namespace std;
int main()
{
	int size;
	cin >> size;
	/*
	int *arr = new int[SIZE]{1,6,44,9,8};
   //для того чтобы память от массива очищалась автоматически, используем умный указатель
	shared_ptr<int[]> ptr(arr);// так как массив то тип с квадратными скобками передаем в конструктор сырой массив arr
	
	*/
	//shared_ptr указывает на массив динамической памяти и ког этот указатель выдет за пределы мейн то данные массива очистится из памяти
	shared_ptr<int[]> ptr(new int[size] {1, 6, 44, 9, 8});

	for (size_t i = 0; i < size; i++)
	{
		ptr[i] = rand() % 10;
		cout << ptr[i] << endl;
		//для shared_ptr осуществлнны перегрузки различных операторов, в том числе и [] 
	}
}

