<!---[![License: MIT](https://img.shields.io/github/license/mashape/apistatus.svg)](https://github.com/justcallmekoko/ESP32Marauder/blob/master/LICENSE)--->
<!---[![Gitter](https://badges.gitter.im/justcallmekoko/ESP32Marauder.png)](https://gitter.im/justcallmekoko/ESP32Marauder)--->
<!---[![Build Status](https://travis-ci.com/justcallmekoko/ESP32Marauder.svg?branch=master)](https://travis-ci.com/justcallmekoko/ESP32Marauder)--->
<!---Shields/Badges https://shields.io/--->

# ESP32 Marauder
<p align="center"><img alt="Marauder logo" src="https://github.com/justcallmekoko/ESP32Marauder/blob/master/pictures/marauder3L.jpg?raw=true" width="300"></p>
<p align="center">
  <b>A suite of WiFi/Bluetooth offensive and defensive tools for the ESP32</b>
  <br><br>
<b>This fork intends to improve the functionality of the Marauder firmware for those using barebones generic esp32 boards with no screen or even an sd card.</b> 


# Improvements
Prints pcap data as base64 instead of raw binary when outputting to the terminal. This makes the data easier to handle for interfaces like PuTTY, allowing you to simply copy the output and decode back into a binary file.
<br><br>


# In The Works
-Clarifying start and end of captured packets.
<br><br> 
-Looking into Evil Portal functionality without writing index.html to sd card.
<br><br>
-The stopscan command doesn't always work... looking into that.