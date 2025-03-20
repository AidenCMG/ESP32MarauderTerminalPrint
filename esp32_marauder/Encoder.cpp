#include "Encoder.h"

Encoder::Encoder(const uint8_t* data, size_t len){
  encodedData = new unsigned char[encode_base64_length(len) + 1]; // +1 for the null terminator
  encodedDataLen = encode_base64(data, len, encodedData);
}

Encoder::~Encoder(){
  delete[] encodedData;
}
String Encoder::getEncodedData(){
  return (char *)encodedData;
}

void Encoder::printEncodedData(){
  Serial.println((char *)encodedData);
}