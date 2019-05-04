#pragma once
#include <iostream>
#include <string>

using namespace std;
template <typename T>
class Mass
{
	int size;
	T *data;
public:
	Mass() : data(nullptr), size(0) {}
	Mass(int size);
	~Mass();

	int GetSize();
	Mass<T>& operator=(Mass<T>& op2);
	T& operator [](int n);
	bool operator==(Mass<T>& op2);

	friend istream& operator >> <T> (istream & stream, Mass<T> & op);
	friend ostream& operator <<  <T> (ostream & stream, Mass<T> & op);

};

template <typename T>
bool Mass<T>::operator==(Mass<T>& op2)
{
	for (int i = 0; i < size; i++) {
		if (this->data[i] != op2[i])
			return false;
	}

	return true;
}

template<typename T>
Mass<T>::~Mass()
{
	delete[] this->data;
}


template <typename T>
Mass<T>::Mass(int size)
{
	this->data = new T[size];
	this->size = size;
}

template <typename T>
int Mass<T>::GetSize() { return this->size; }

template <typename T>
T& Mass<T>::operator [](int n)
{
	try {
		if (n >= size || n < 0 || size == 0) {
			std::exception ex("Нельзя получить доступ к памяти");
			throw ex;
		}
		return this->data[n];
	}
	catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
		system("pause");
		exit(1);
	}
}
template <typename T>
Mass<T>& Mass<T>::operator=(Mass<T>& op2)
{
	for (int i = 0; i < size; i++) {
		this->data[i] = op2.data[i];
	}
	return *this;
}

template <typename T>
istream& operator >> (istream & stream, Mass<T>& op)
{
	T a;
	for (int i = 0; i < op.GetSize(); i++) {
		stream >> a;
		op[i] = a;
	}

	return stream;
}

template<typename T>
ostream&    operator<< (ostream & stream, Mass<T> & op)
{
	for (int i = 0; i < op.GetSize(); i++) {
		stream << op[i] << " ";
	}
	return stream;
}
