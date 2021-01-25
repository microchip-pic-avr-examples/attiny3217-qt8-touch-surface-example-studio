INTRODUCTION
============
This is the documentation for the QTouch ATtiny3217 Xplained Xpro Example.

Example description
===================
This example demonstrates the touch application on ATtiny3217 XPRO with QT8 surface Extention board.
Debug infomation is disabled. so, debug data cannot be viewed through data visualizer.

RELATED DOCUMENTS / APPLICATION NOTES
=====================================
Refer the microchip developer page link `"Generate Atmel Board User Project" <http://microchipdeveloper.com/touch:generate-atmel-board-touch-project>`_ and `"ATtiny3217 Xplainedpro kit user guide" <http://ww1.microchip.com/downloads/en/DeviceDoc/ATtiny3217-Xplained-Pro-DS50002765A.pdf>`_ for more details. 

INTERFACE SETTINGS
==================
		* Touch Sensor

		 Vertical Lines: Y(1), Y(0), Y(8), Y(9), Y(7)

         Horizontal Lines: Y(4), Y(5), Y(3), Y(13), Y(2)

SUPPORTED EVALUATION KIT
========================
	* `ATtiny3217 Xplained pro kit <http://www.microchip.com/DevelopmentTools/ProductDetails/PartNo/attiny3217-xpro>`_
	* `QT8 Xplainedpro kit <http://ww1.microchip.com/downloads/en/DeviceDoc/QT8-Xplained-Pro-Users-Guide-50002813A.pdf>`_
	
RUNNING THE DEMO
================
1. Select "EXPORT PROJECT" tab and click "Download Pack" to save the .atzip file.
2. Import .atzip file into Atmel Studio 7, File->Import->Atmel Start Project.
3. Build Solution and make sure no compiler errors occur.
4. Press "Start without debugging" or use "CTRL+ALT+F5" hotkeys to run the application.
5. By default, Microchip 2D Touch Surface Utility(can be viewed as Krono Comm Uart in touch.h file) is enabled.
6. Open Microchip 2D Touch Surface Utility and select UART wiht 38400 baud rate and click OK.
7. Surface status will be displayed on the utility. 
8. To enable LED status, first disable the Krono Comm Uart and enable the macro ENABLE_LED in led_driver.c file.
9. This is because the Gesture information is delayed when both Krono comm and LED are enabled. To overcome this either LED or Krono comm should be enabled at once.


