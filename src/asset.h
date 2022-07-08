#ifndef __ASSET_H_
#define __ASSET_H_

#include <array>

/*
	Asset class contains all the information of the asset. Keep in mind this is not only
	for stocks. But also for cash and real estate.
*/


class CStock
{
public:
	void 		setSymbol(std::string symbol);
	std::string getSymbol();

	void  		setQuantity(double qty);
	double  	getQuantity();

private:
	std::string  	symbol;
	double  		quantity;
};


class CBond
{
public:

private:

};


class CRealestate
{
public:

private:

};


class CAsset : public CStock, public CBond, public CRealestate
{
public:
				CAsset();
		   	   ~CAsset();

static constexpr int  	ASSET_TYPE_SIZE = 5;
static constexpr int  	CURRENCY_TYPE_SIZE = 5;

enum 			ASSET_TYPE {AT_STOCK, AT_BOND, AT_ESTATE, AT_OTHER, AT_NONE};
enum 			CURRENCY_TYPE {CT_USD, CT_EUR, CT_GBP, CT_OTHER, CT_NONE};

struct Array {
	    static std::array<std::string, 5> const strAssetType;
	    static std::array<std::string, 5> const strCurrencyType;
};


void			setName(std::string namme);
void			setType(ASSET_TYPE type);
void 			setCurrency(CURRENCY_TYPE currency);
void 			setBuyPrice(double price);		


std::string 	getName();
ASSET_TYPE		getType();
CURRENCY_TYPE	getCurrency();
double 			getBuyPrice();

double			getCurrentPrice();


private:

std::string 	sName;

double  		dBuyPrice;
double  		dCurrentPrice;

ASSET_TYPE		tType = AT_NONE;
CURRENCY_TYPE	tCurrency = CT_USD;


double 			retrieveCurrentPrice();
};




#endif