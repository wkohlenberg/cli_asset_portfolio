#ifndef __PORTFOLIO_H_
#define __PORTFOLIO_H_

/*
	Portfolio class as an object which contains an array of all the assets
	
*/

#include <vector>

#include "asset.h"

class CPortfolio
{
public:
				CPortfolio();
		   	   ~CPortfolio();

	int 		addAsset();
	int 		deleteAsset();
	int 		modifyAsset();

	int 		totalAssets();
	double 		totalValue();

	void 		printPortfolio();

private:
	std::vector<CAsset> list;

	CAsset::ASSET_TYPE 		portAssetTypeInput(std::string input);
	CAsset::CURRENCY_TYPE 	portCurrencyTypeInput(std::string input);
};

#endif