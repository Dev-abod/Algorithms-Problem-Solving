#pragma once
#include <iostream>
using namespace std;


template <class T>

class clsDynamicArray
{

protected:
	int _Size = 0;
	T* _TempArray;

public:

	T* OriginalArrary;

	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;

		_Size = Size;
		OriginalArrary = new T[_Size];
	}

	~clsDynamicArray()
	{
		delete[] OriginalArrary;

	}

	bool SetItem(int index, T Value)
	{
		if (index >= _Size || _Size < 0)
			return false;

		OriginalArrary[index] = Value;
		return true;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	void PrintList()
	{
		for (int i = 0; i <= _Size - 1; i++)
		{
			cout << OriginalArrary[i] << "  ";
		}
		cout << "\n";
	}

	void Resize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;

		_TempArray = new T[NewSize];

		if (NewSize < _Size)
			_Size = NewSize;

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArrary[i];
		}

		_Size = NewSize;

		delete[] OriginalArrary;
		OriginalArrary = _TempArray;

	}

	T GetItem(int index)
	{
		return OriginalArrary[index];
	}

	void Reverse()
	{
		_TempArray = new T[_Size];
		int Counter = 0;
		for (int i = _Size - 1; i >= 0; i--)
		{
			_TempArray[Counter] = OriginalArrary[i];
			Counter++;
		}

		delete[] OriginalArrary;
		OriginalArrary = _TempArray;
	}

	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArrary;
		OriginalArrary = _TempArray;
	}

	bool DeleteItemAt(int Index)
	{

		if (Index >= _Size || Index < 0)
		{
			return false;
		}


		--_Size;
		_TempArray = new T[_Size];

		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = OriginalArrary[i];
		}

		for (int i = Index + 1; i < _Size + 1; i++)
		{
			_TempArray[i-1] = OriginalArrary[i];
		}

		delete[] OriginalArrary;
		OriginalArrary = _TempArray;

		return true;
	}

	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}

	void DeleteLastItem()
	{
		DeleteItemAt(_Size-1);
	}

	int Find(T value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (value == OriginalArrary[i])
				return i;
		}
		return -1;
	}

	bool DeleteItem(int  value)
	{
		int index = Find(value);
		if (index == -1)
		{
			return false;
		}

		DeleteItemAt(index);
		return true;
	
	}

	void InsertAt(int Index, T NewValue)
	{
		_Size++;

		_TempArray = new T[_Size];

		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = OriginalArrary[i];
		}


		for (int i = Index ; i < _Size ; i++)
		{
			if(Index == Index)
				_TempArray[i] = NewValue;

			_TempArray[i] = OriginalArrary[i];

		}
	}
};
