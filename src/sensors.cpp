// -- hanterar den "icke-blockerande" logiken -- 

void readPrio2SensorsAsync(){
    static int currentSensor = 0; // static -> sätts endast EN gång (init)
    
    // för att minimiera jitter för "låg-prio" sensorer - läs asynkront, en sensor åt gången.
    switch (currentSensor)
    {
    case 0: 
        //läs fire-smoke
        break;
    case 1:
        //läs fire-temp
        break;
    }

    currentSensor++;
    if (currentSensor >= 2){
        currentSensor = 0;
    }

};

void readPrio3SensorsAsync(){
    static int currentSensor = 0; // static -> sätts endast EN gång (init)
    static bool DHT11_isBusy = false; // if true -> behåller samma case

    // för att minimiera jitter för "låg-prio" sensorer - läs asynkront, en sensor åt gången.
    switch (currentSensor)
    {
    case 0: 
        if (!DHT11_isBusy){
        // requestDHT11Data();
            DHT11_isBusy = true;
            return;
        }

        // if (DHT11_isReady()){    // har 18ms gått sen request?
            // getDHT11Temp();
            // getDHT11Humidity();
            // ...else return;
        break;
    case 1:
        //läs water leak
        break;
    }

    currentSensor++;
    if (currentSensor >= 2){
        currentSensor = 0;
    }

};