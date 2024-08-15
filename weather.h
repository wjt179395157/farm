#include <string>
using namespace std;

class weather {
protected:
    string name;  //天气名字
    int ihumidity;   //湿度影响
    int ifertility;  //肥料影响
    int ipesticideResidue;  //农药残留影响
    int itemperature; //温度影响
    virtual int influence_humidity() = 0;    //设定相关数值
    virtual int influence_fertility() = 0;
    virtual int influence_temperature() = 0;
    virtual int influence_pesticideResidue() = 0;
public:
    weather(const string& name) : name(name) {}
    string getName() const { return name; }
};

class SunnyWeather : public weather {
public:
    SunnyWeather() : weather("Sunny Weather") {}
    int influence_humidity()
    {
        //示例
        ihumidity = -1;
        return ihumidity;
    }
    int influence_fertility();
    int influence_soilPermeability();
    int influence_pesticideResidue();
};

class RainyWeather : public weather {
public:
    RainyWeather() : weather("Rainy Weather") {}
    int influence_humidity();
    int influence_fertility();
    int influence_soilPermeability();
    int influence_pesticideResidue();
};

class SnowyWeather : public weather {
public:
    SnowyWeather() : weather("Snowy Weather") {}
    int influence_humidity();
    int influence_fertility();
    int influence_soilPermeability();
    int influence_pesticideResidue();
};

class WindyWeather : public weather {
public:
    WindyWeather() : weather("Windy Weather") {}
    int influence_humidity();
    int influence_fertility();
    int influence_soilPermeability();
    int influence_pesticideResidue();
};


