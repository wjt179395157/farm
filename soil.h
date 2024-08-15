#include<weather.h>
class Soil {
protected:
    float humidity = 0;  //土壤湿度
    float temperature = 0; //土壤温度
    float fertility = 0;  //土壤肥力
    float pesticideResidue = 0;  //农药残留
    int id;   //土壤的id
    virtual void weather(const class Weather& weather) = 0;   //根据天气修改土壤的相关数据
    virtual void applyFertilizer(int Fertilize) = 0;  //施用化肥
    virtual void applyPesticide(int Pesticide) = 0;  //喷农药
    virtual void irrigate(int water) = 0;   //灌溉
    virtual void mulch(int time) = 0;     //覆盖地膜

public:
    Soil();
    virtual ~Soil() = default;
    //获取相关变量的值
    float getHumidity() const {
        return humidity;
    }

    float getTemperature() const {
        return temperature;
    }

    float getFertility() const {
        return fertility;
    }

    float getPesticideResidue() const {
        return pesticideResidue;
    }

    int getId() const {
        return id;
    }
};

//具体的派生类
class ClaySoil : public Soil {
public:
    ClaySoil() {}
    ~ClaySoil() override {}

    void weather(const Weather& weather);

    void applyFertilizer(int Fertilize);

    void applyPesticide(int Pesticide);

    void irrigate(int water);

    void mulch(int time);
};

