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
};

#endif