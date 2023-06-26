#pragma once
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <list>

using namespace std;
//using std::string, std::map, std::list, std::cout, std::cin, std::endl;

class Database
{
private:
	map<string, list<string>> base;

public:
	Database() = default;

public:
	void insert(const string& number, const string& offence);
	void print(const string& number) const;
	void print(string& number1, string& number2) const;
	void print() const;

private:
	void print(map<string, list<string>>::const_iterator node) const
	{
		cout << "Номер: " << node->first << endl;
		std::for_each(node->second.begin(), node->second.end(), [](auto elem) {cout << "* " << elem << endl; });
	}

};

