#ifndef CONFIG_H
#define CONFIG_H

#include <Preferences.h>
#include <nvs.h>
#include <nvs_flash.h>

class Config
{
public:
    explicit Config();
    virtual ~Config(){}

    // getter and setter for brightness value
    // int between 5 and 255
    int         getLedBrightness();
    void        setLedBrightness(int value);

    // getter and setter for dock friendly name
    String      getFriendlyName();
    void        setFriendlyName(String value);

    // getter and setter for wifi credentials
    String      getWifiSsid();
    void        setWifiSsid(String value);

    String      getWifiPassword();
    void        setWifiPassword(String value);

    // reset config
    void        reset();

private:
    Preferences m_preferences;
    int         m_defaultLedBrightness = 50;
};

#endif