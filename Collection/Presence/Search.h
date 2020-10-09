#pragma once
class Search
{
public:
	void start();

private:
	bool exists(int ints[], int size, int k);
	void dsp(bool);
	bool byVector(int ints[], int size, int k);
	bool binarySearch(int ints[], int size, int k);
};

