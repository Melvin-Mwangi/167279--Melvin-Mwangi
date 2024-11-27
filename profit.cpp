#include<iostream>
using namespace std;
int main()
    {
    //declare variables
      float buyingprice,sellingprice, profit;
    //prompt user for bp and sp
      cout<<"Enter the buying price and selling price respectively: "<<endl;
    //input of bp and sp
      cin>>buyingprice>>sellingprice;
    //formula for profit
      profit = sellingprice-buyingprice;
    //display output
      cout<<"Profit is: "<<profit<<endl;
      return 0;
    }
