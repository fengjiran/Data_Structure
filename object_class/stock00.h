#pragma once
#include <string>
//using namespace std;
using std::string;

class Stock
{
private:
	string company;  //��˾����
	long shares;  //���еĹ�Ʊ����
	double share_val;  //ÿ�ɵļ۸�
	double total_val;  //��Ʊ���ܼ۸�
	void set_tot() { total_val = shares*share_val; }
public:
	void acquire(const string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};