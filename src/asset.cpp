#include <iostream>

#include "asset.h"



void CStock::setSymbol(std::string symbol)
{
	symbol = symbol;
}

void CStock::setQuantity(double qty)
{
	quantity = qty;
}

std::string CStock::getSymbol()
{
	return symbol;
}

double CStock::getQuantity()
{
	return quantity;
}





CAsset::CAsset()
{

}

CAsset::~CAsset()
{

}

void CAsset::setName(std::string name)
{
	sName = name;
}

void CAsset::setType(ASSET_TYPE type)
{
	tType = type;
}

void CAsset::setBuyPrice(double price)
{
	dBuyPrice = price;
}

std::string CAsset::getName()
{
	return sName;
}

CAsset::ASSET_TYPE CAsset::getType()
{
	return tType;
}

double CAsset::getBuyPrice()
{
	return dBuyPrice;
}

