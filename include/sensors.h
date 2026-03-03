#ifndef SENSORS_H
#define SENSORS_H

void readPrio3SensorsAsync();

struct SensorData {
    // Alarm (prio 1)
    bool reedSensor1;
    bool reedSensor2;
    bool motionDetect;

    // Fire (prio 2)
    bool smokeSensor;
    float fireTemp; // over 60c?

    // Enviroment (prio 3)
    float indoorTemp;
    float indoorHumidity;
    bool waterLeak;
};

extern SensorData currentStatus;


#endif