/*!
 * \file
 * \brief this file is used only to generate the documentation
 *  
 * \page Interfaces_page Interfaces
 *
 * Many of the real-world hardware devices can be discribed in terms of interfaces.
 * For example for serial device like UART or SPI there is a communication interface that provides "send" and "receive" functionality
 * for exchanging series of bytes. The basic classes to build any serial device are ISerial, ISerialEvent, CSerial.
 * CSPI is used to add specific SPI bus functionality to a CSerial device.
 * In real hardware devices a series of bytes are normally stored in so-called FIFO bufer. The bufer is described in CFIFO.
 * CFIFO is also used as basic data primitive all over the firmware.
 *
 * The basic timer and button interfaces are described in CTimerEvent and CButtonEvent classes
 *
 * The service interface of the operating system is described in the ::os
 * 
 */
 
 
