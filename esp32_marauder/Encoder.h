#ifndef ENCODER_H_EXISTS
#define ENCODER_H_EXISTS
#include "Arduino.h"
#include <base64.hpp>

class Encoder {
  private:
    unsigned int encodedDataLen;
    unsigned char* encodedData; // dynamically allocate array size
  public:
    Encoder(const uint8_t* data, size_t len);
    ~Encoder();
    String getEncodedData();
    void printEncodedData(); // send to serial
};

#endif