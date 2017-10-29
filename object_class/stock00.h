#pragma once
#include <string>
using namespace std;

class Stock
{
private:
	string company;  //公司名称
	long shares;  //持有的股票数量
	double share_val;  //每股的价格
	double total_val;  //股票的总价格
	void set_tot() { total_val = shares*share_val; }
public:
	void acquire(const string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};