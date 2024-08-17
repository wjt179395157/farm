#include <string>
#include <map>
#include<string>
using namespace std;

class Market {

private:
    // 存储不同农场品的市场价格，使用名字作为键，价格作为值
    map<string, float> inprices;
    map<string, float> outprices;

public:
    //初始化市场价格
    Market();

    // 获取农场品的买入价格
    float getinPrice(const string& item) const;

    // 改变农场品的买入价格
    void setinPrice(const string& item, float price);

    // 获取农场品的卖出价格
    float getoutPrice(const string& item) const;

    // 改变农场品的卖出价格
    void setoutPrice(const string& item, float price);
};
