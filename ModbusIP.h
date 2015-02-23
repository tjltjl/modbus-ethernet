/*
    ModbusIP.h - Header for Modbus IP Library
    Copyright (C) 2015 Andr� Sarmento Barbosa
*/
#include <Arduino.h>
#include <Modbus.h>
#include <SPI.h>
#include <Ethernet.h>

#ifndef MODBUSIP_H
#define MODBUSIP_H

#define MODBUSIP_PORT 	  502
#define MODBUSIP_MAXFRAME 200

class ModbusIP : public Modbus {
    private:
		EthernetServer _server;
		byte _MBAP[7];

    public:
        ModbusIP();
        bool config(uint8_t *mac, IPAddress ip, IPAddress dns, IPAddress gateway, IPAddress subnet);
        void proc();
};

#endif //MODBUSIP_H

