#include <iostream>
#include <iomanip>
#include <sstream>

#include "portfolio.h"

CPortfolio::CPortfolio()
{

}

CPortfolio::~CPortfolio()
{

}

int CPortfolio::addAsset()
{
	// Add here assets manually
	std::string strInput;
	std::string strName;
	std::string strType;
	std::string strCurrency;
	double dPrice;
	int iQty;

	std::cout << "Ticker: " << std::endl;
	getline (std::cin, strInput);
	std::stringstream (strInput) >> strName;

	std::cout << "Asset type (stock, bond, estate): " << std::endl;
	getline (std::cin, strInput);
	std::stringstream (strInput) >> strType;

	std::cout << "Currency type (USD, EUR, GBP): " << std::endl;
	getline (std::cin, strInput);
	std::stringstream (strInput) >> strCurrency;

	std::cout << "Average buy price of asset: " << std::endl;
	getline (std::cin, strInput);
	std::stringstream (strInput) >> dPrice;

	std::cout << "Asset quantity: " << std::endl;
	getline (std::cin, strInput);
	std::stringstream (strInput) >> iQty;

	list.push_back(CAsset());
	list.back().setName(strName);
	list.back().setType(portAssetTypeInput(strType));
	list.back().setCurrency(portCurrencyTypeInput(strCurrency));
	list.back().setBuyPrice(dPrice);
	list.back().setQuantity(iQty);


	list.push_back(CAsset());

	list.back().setName("Apple Inc.");
	list.back().setType(CAsset::AT_STOCK);
	list.back().setCurrency(CAsset::CT_USD);
	list.back().setBuyPrice(93.56);
	list.back().setQuantity(128);

	list.push_back(CAsset());

	list.back().setName("Verizon Comm. Inc.");
	list.back().setType(CAsset::AT_STOCK);
	list.back().setCurrency(CAsset::CT_USD);
	list.back().setBuyPrice(51.84);
	list.back().setQuantity(145);

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
	std::cout << std::setw(20) << std::left << "Ticker" 
			  << std::setw(12) << std::left << "Buy price" 
			  << std::setw(10) << std::left << "Quantity" 
			  << std::setw(12) << std::left << "Value" << std::endl;


	for (auto it = begin (list); it != end (list); ++it)
	{
		if (it->getType() == CAsset::AT_STOCK)
		{
			std::string currency = it->getCurrency() == CAsset::CT_USD ? "$" :
							it->getCurrency() == CAsset::CT_EUR ? "€" :
							it->getCurrency() == CAsset::CT_GBP ? "£" :
							" ";

			// Double convertion and adding the currency symbol
			std::ostringstream strs;
			strs << it->getBuyPrice();
			//strs  << (it->getBuyPrice() == NULL ? "---" : std::to_string(it->getBuyPrice()));
			std::string sBuyPrice = currency + strs.str();


			std::cout << std::setw(20) << std::left << it->getName() 
					  << std::setw(12) << std::left << sBuyPrice 
					  << std::setw(10) << std::left << it->getQuantity() << std::endl;
		}
		
	}

	std::cout << "===========================================" << std::endl;
}



CAsset::ASSET_TYPE CPortfolio::portAssetTypeInput(std::string input)
{
	for (int assetIndex = 0; assetIndex < CAsset::ASSET_TYPE_SIZE; assetIndex++)
	{
		std::string temp(CAsset::Array::strAssetType[assetIndex]);
		if (input.compare(temp) == 0)
		{
			return static_cast<CAsset::ASSET_TYPE> (assetIndex);
		}
	}

	return CAsset::AT_NONE;
}

CAsset::CURRENCY_TYPE 	CPortfolio::portCurrencyTypeInput(std::string input)
{
	for (int currencyIndex = 0; currencyIndex < CAsset::CURRENCY_TYPE_SIZE; currencyIndex++)
	{
		std::string temp(CAsset::Array::strCurrencyType[currencyIndex]);
		if (input.compare(temp) == 0)
		{
			return static_cast<CAsset::CURRENCY_TYPE> (currencyIndex);
		}
	}

	return CAsset::CT_NONE;
}
