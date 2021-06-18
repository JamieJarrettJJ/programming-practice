#ifndef PEOPLE_H
#define PEOPLE_H
#pragma once

#include <string>
#include "Birthday.hpp"
	
class People  
{
	private:
		string name;
		Birthday DOB;
	public:
		People(string x, Birthday bo);
		void printInfo();

};
#endif