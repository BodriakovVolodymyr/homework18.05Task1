#pragma once
#include<iostream>
#include <stdexcept>
using namespace std;

template<typename T>
class MyStack {
private:
	T* arr;
	int size;
	int capacity;
	void resize()
	{
		capacity *= 2;

		T* temp = new T[capacity];

		for (int i = 0; i < size; i++)
		{
			temp[i] = arr[i];
		}

		delete[] arr;
		arr = temp;
	}
public:
	MyStack(int capacity = 10) {
		this->capacity = capacity;
		this->size = 0;
		arr = new T[capacity];
	}
	~MyStack() {
		delete[]arr;
	}

	bool isEmpty()const {
		return size == 0;
	}

	T top()const {
		if (isEmpty()) {
			throw out_of_range("Stack is empty");
		}
		return arr[size - 1];
	}

	void push(const T& value) {
		if (size >= capacity)
		{
			resize();
		}

		arr[size] = value;
		size++;
	}


	void pop() {
		if (isEmpty())
		{
			cout << "Stack is empty\n";
			return;
		}

		size--;
	}

	void show()const {
		if (isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
		}
		cout << "Stack: " << endl;
		for (int i = size - 1; i >= 0; i--) {
			cout <<'~' << arr[i] << " ";
			cout << endl;
		}
		cout << endl;
	}

	void clear()
	{
		size = 0;
	}
};
