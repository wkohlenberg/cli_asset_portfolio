#ifndef __ASSET_H_
#define __ASSET_H_

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

enum 			ASSET_TYPE {stock, bond, realestate};

void			setName(std::string namme);
void			setType(ASSET_TYPE type);
void 			setBuyPrice(double price);		


std::string 	getName();
ASSET_TYPE		getType();
double 			getBuyPrice();

double			getCurrentPrice();


private:

std::string 	sName;

double  		dBuyPrice;
double  		dCurrentPrice;

ASSET_TYPE		tType = stock;



double 			retrieveCurrentPrice();
};




#endif