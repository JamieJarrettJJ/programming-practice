#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#pragma once
	
class Birthday  
{
	private:
		int month;
		int day;
		int year;
	public:
		Birthday(int m, int d, int y);
		void printDate();
};
#endif