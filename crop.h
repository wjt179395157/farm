#include <string>
#include<soil.h>
#include<market.h>
using namespace std;

class Crop {
protected: 
    string name;      //作物名称
    double yield = 0;     //收割数量
    int growthTime = 0;    //生长时间
    int growthPeriod;     //生长周期
    double irrigationRequirement;  //缺水量
    double fertilizerRequirement;   //缺肥量
    bool harvest = 0;   //是否成熟
    int life = 100;   //生命值
    int buy_in_price;  //购入价格
    double marketValue;   //市场卖出价格
public:
    Crop();
    virtual ~Crop() = default;

    //获得相应变量的内容
    string getName() const {  
        return name;
    }

    double getYield() const {
        return yield;
    }

    int getGrowthTime() const{
        return growthTime;
    }

    int getGrowthPeriod() const{
        return growthPeriod;
    }

    double getMarketValue() const{
        return marketValue;
    }

    double getIrrigationRequirement() const{
        return irrigationRequirement;
    }

    double getFertilizerRequirement() const{
        return fertilizerRequirement;
    }

    virtual bool judge_if_harvest() = 0;   //判断是否成熟

    virtual bool judge_if_life() = 0;      //判断是否还活着
    
    virtual bool influenceall(const Soil& soil,const Market& market) = 0;    //通过土壤和市场的信息更改作物相应变量的值
};

// 具体的派生类示例
class Corn : public Crop {
public:
    Corn();
    ~Corn();
    
    bool judge_if_harvest() override;  

    bool influenceall(const Soil& soil, const Market& market);
};

class Potato: public Crop{
public:
    Potato();
    ~Potato();

    bool judge_if_harvest() override;

    bool is_soft();  //�ж������Ƿ�Ϊ������
};

