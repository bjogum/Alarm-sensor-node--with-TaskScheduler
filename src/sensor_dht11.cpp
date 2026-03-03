#include "sensors.h"
#include "config.h"
#include "sensor_dht11.h"

DHT dht(DHT_PIN, DHT_TYPE, 6);

void initDHT() {
    dht.begin(); // Nu körs Adafruits interna startsekvens
    Serial.println("DHT Initierad");
}

bool getDHTData() {
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    if (isnan(h) || isnan(t)) {
        return false; // Fortsätt vänta i din state machine
    }

    currentStatus.indoorTemp = t;
    currentStatus.indoorHumidity = h;
    return true;
}
