#include <iostream>

#include "asset.h"
#include "portfolio.h"


int main()
{
	// Implement arguments to adjust settings

	CPortfolio portfolio;

	portfolio.loadList();
	portfolio.addAsset();
	portfolio.printPortfolio();

	return 0;
}