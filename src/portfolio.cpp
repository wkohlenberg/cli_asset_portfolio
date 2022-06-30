#include <iostream>
#include <iomanip>

#include "portfolio.h"

CPortfolio::CPortfolio()
{

}

CPortfolio::~CPortfolio()
{

}

int CPortfolio::addAsset()
{
	list.push_back(CAsset());

	list.back().setName("Apple Inc.");
	list.back().setType(CAsset::stock);
	list.back().setBuyPrice(93.56);
	list.back().setQuantity(128);

	return 0;
}

int CPortfolio::deleteAsset()
{
	return 0;
}

int CPortfolio::modifyAsset()
{
	return 0;
}

int CPortfolio::totalAssets()
{
	return 0;
}

double CPortfolio::totalValue()
{
	return 0.0;
}

void CPortfolio::printPortfolio()
{
	std::cout << "================ Portfolio ================" << std::endl;

	std::cout << "Stocks" << std::endl;
	std::cout << std::setw(15) << std::left << "Ticker" 
			  << std::setw(12) << std::left << "Buy price" 
			  << std::setw(10) << std::left << "Quantity" << std::endl;


	for (auto it = begin (list); it != end (list); ++it)
	{
		if (it->getType() == CAsset::stock)
		{
			std::cout << std::setw(15) << std::left << it->getName() 
					  << std::setw(12) << std::left << it->getBuyPrice() 
					  << std::setw(10) << std::left << it->getQuantity() << std::endl;
		}
		
	}

	std::cout << "===========================================" << std::endl;
}
