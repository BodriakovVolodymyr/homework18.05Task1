#pragma once
#include<iostream>
using namespace std;

template<typename T>
class MyStack {
private:
	T* arr;
	int size;

public:
	MyStack() {
		arr = nullptr;
		size = 0;
	}
	~MyStack() {
		delete[]arr;
	}

	bool isEmpty()const {
		return size == 0;
	}

	T top()const {
		if (isEmpty()) {
			throw out_of_range("Stack if empty");
		}
		return arr[size - 1];
	}

	void push(const T& value) {
		T* temp = new T[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = arr[i];
		}
		temp[size] = value;
		delete[]arr;
		arr = temp;
		size++;
	}


	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
	}
		T* temp = new[size - 1];

		for (int i = 0; i < size - 1; i++) {
			temp[i] = arr[i];
		}
		delete[]arr;
		arr = temp;
		size--;
	}

	void show()const {
		if (isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
		}
		cout << "Stack: ";
		for (int i = size - 1; i >= 0; i--) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
