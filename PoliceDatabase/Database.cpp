#include "Database.h"

void Database::insert(const string& number, const string& offence)
{
	auto elem = base.find(number);
	if (elem != base.end())
		elem->second.push_back(offence);
	else
	{
		list<string> temp{offence};
		base.emplace(number, temp);
	}
}

void Database::print(const string& number) const
{
	auto node = base.find(number);
	if (node == base.end())
		cout << "Номера нет в базе";
	else
		print(node);
}

void Database::print(string& number1, string& number2) const
{
	if (number1 > number2)
		std::swap(number1, number2);
	auto node1 = std::find_if(base.begin(), base.end(), [&](auto elem) {return (elem.first >= number1); });
	auto node2 = std::find_if(base.rbegin(), base.rend(), [&](auto elem) {return (elem.first <= number2); });

	if (
		(node1 == base.end() || node2 == base.rend()) ||
		!((number1 <= node1->first) && (node1->first <= number2)) ||
		!((number1 <= node2->first) && (node2->first <= number2))
		)
		cout << "Ничего не найдено";
	else
	{
		cout << "Диапазон " << number1 << "-" << number2 << endl;
		for (auto elem{ node1 }; elem != node2.base(); ++elem)
			print(elem);
	}
}

void Database::print() const
{
	for (auto elem{ base.begin() }; elem != base.end(); ++elem)
		print(elem);
}