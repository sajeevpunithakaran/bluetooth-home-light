<!-----
NEW: Check the "Suppress top comment" option to remove this info from the output.

Conversion time: 9.566 seconds.


Using this HTML file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β30
* Fri Jul 30 2021 00:10:47 GMT-0700 (PDT)
* Source doc: Bluetooth Controlled 240V Bulb
* This is a partial selection. Check to make sure intra-doc links work.

WARNING:
Inline drawings not supported: look for ">>>>>  gd2md-html alert:  inline drawings..." in output.

* This document has images: check for >>>>>  gd2md-html alert:  inline image link in generated source and store images to your server. NOTE: Images in exported zip file from Google Docs may not appear in  the same order as they do in your doc. Please check the images!

----->


<p style="color: red; font-weight: bold">>>>>>  gd2md-html alert:  ERRORs: 0; WARNINGs: 1; ALERTS: 24.</p>
<ul style="color: red; font-weight: bold"><li>See top comment block for details on ERRORs and WARNINGs. <li>In the converted Markdown or HTML, search for inline alerts that start with >>>>>  gd2md-html alert:  for specific instances that need correction.</ul>

<p style="color: red; font-weight: bold">Links to alert messages:</p><a href="#gdcalert1">alert1</a>
<a href="#gdcalert2">alert2</a>
<a href="#gdcalert3">alert3</a>
<a href="#gdcalert4">alert4</a>
<a href="#gdcalert5">alert5</a>
<a href="#gdcalert6">alert6</a>
<a href="#gdcalert7">alert7</a>
<a href="#gdcalert8">alert8</a>
<a href="#gdcalert9">alert9</a>
<a href="#gdcalert10">alert10</a>
<a href="#gdcalert11">alert11</a>
<a href="#gdcalert12">alert12</a>
<a href="#gdcalert13">alert13</a>
<a href="#gdcalert14">alert14</a>
<a href="#gdcalert15">alert15</a>
<a href="#gdcalert16">alert16</a>
<a href="#gdcalert17">alert17</a>
<a href="#gdcalert18">alert18</a>
<a href="#gdcalert19">alert19</a>
<a href="#gdcalert20">alert20</a>
<a href="#gdcalert21">alert21</a>
<a href="#gdcalert22">alert22</a>
<a href="#gdcalert23">alert23</a>
<a href="#gdcalert24">alert24</a>

<p style="color: red; font-weight: bold">>>>>> PLEASE check and correct alert issues and delete this message and the inline alerts.<hr></p>


<h1><strong>Bluetooth Controlled home light (Bulb)</strong></h1>


<p>
<strong>Step 1 : Collecting components</strong>
</p>
<p>


<p id="gdcalert1" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image1.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert2">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image1.jpg" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert2" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline drawings not supported directly from Docs. You may want to copy the inline drawing to a standalone drawing and export by reference. See <a href="https://github.com/evbacher/gd2md-html/wiki/Google-Drawings-by-reference">Google Drawings by reference</a> for details. The img URL below is a placeholder. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert3">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="https://docs.google.com/drawings/d/12345/export/png" width="80%" alt="drawing">

</p>
<p>
Here we’re going to make a bluetooth control  240V Bulb by using an Arduino UNO.So let's collect the required components as I mentioned above before building the Circuit.
</p>
<p>
The components are :
</p>
<p>
<strong>Hardware Requirements :                                        Software Requirements  </strong>
</p>
<ul>

<li>Arduino UNO	 - 1					* Arduino Software

<li>HC-06 Bluetooth module - 1

<li>LED  - 1

<li>Relay Module - 1 

<li>Line Board - 1

<li>Bulb (240V) - 1

<li>Bulb Holder, Wire and 2 Pin Plug

<li>Short female header as we required

<li>Short male header as we required

<li>Jumper wires as we required
</li>
</ul>
<p>
After collecting the components, let's start to implement it on a breadboard.
</p>
<p>
<strong>Bluetooth Module, HC-06</strong>
</p>
<p>

                

<p id="gdcalert3" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image2.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert4">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image2.png" width="" alt="alt_text" title="image_tooltip">

</p>
<p>
The HC-05 Bluetooth module is one of the most popular and inexpensive modules used for RF communications and it is easy to implement in your projects. The module has a range of 10 meters, and can be easily set using AT commands and can be programmed both as master and a slave. The module allows to transform a UART \ USART port more commonly known as serial into a Bluetooth port, generally with SPP (Serial Port Profile) profile, thus becoming a serial over Bluetooth. Normally this device is used when you want to communicate with a microcontroller like Arduino with the outside world, where the outside world can be a SmartPhone, a Personal Computer, or other device equipped with a Bluetooth connection.
</p>
<h2>Working principle of Arduino-Bluetooth Module</h2>


<p>
In this project, there are four main components used: Android smartphone Bluetooth application, Bluetooth transceiver, Arduino device, and 1 Channel Relay 
</p>
<p>
Module.
</p>
<p>


<p id="gdcalert4" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline drawings not supported directly from Docs. You may want to copy the inline drawing to a standalone drawing and export by reference. See <a href="https://github.com/evbacher/gd2md-html/wiki/Google-Drawings-by-reference">Google Drawings by reference</a> for details. The img URL below is a placeholder. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert5">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="https://docs.google.com/drawings/d/12345/export/png" width="80%" alt="drawing">

</p>
<p>
The Android app sends the serial data to the connected Bluetooth Module HC-06 by clicking ON button. The Bluetooth device receives the data from the app and sends it through the TX pin of the Bluetooth module to the RX pin of Arduino. The Arduino device reads the input data and processes it according to the program uploaded inside it and generates the output to 1 Channel Relay Module.
</p>
<p>
When the Bluetooth application's button turns ON, it sets the home light ON, and when the Bluetooth application's button turns OFF, it sets the home light OFF.
</p>
<p>
<strong>Step 2 : Interfacing HC-05 Bluetooth Module.</strong>
</p>
<p>


<p id="gdcalert5" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image3.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert6">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image3.jpg" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert6" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image4.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert7">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image4.jpg" width="" alt="alt_text" title="image_tooltip">

</p>
<p>
The HC-05 Bluetooth module has generally four pins:
</p>
<ul>

<li>TX pin - Transmitting pin is used to transmit the signal to the receiver.

<li>RX pin - The pin that receives the signal from the transmitter.

<li>VCC pin - The power supply pin (+)

<li>GND pin - The power supply pin (-)
</li>
</ul>
<p>
The connection or interfacing of the module is as follows:
</p>
<ul>

<li>TX pin to the digital pin 0 (RX pin of arduino)

<li>RX pin to the digital pin 1 (TX pin of arduino)

<li>VCC pin to the Positive railings of the breadboard

<li>GND pin to the negative railings of the breadboard
</li>
</ul>
<p>
<strong>Step 3 : Interfacing Relay module </strong>
</p>
<p>

            

<p id="gdcalert7" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image5.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert8">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image5.jpg" width="" alt="alt_text" title="image_tooltip">

</p>
<p>
The relay is an electromechanical device consisting of a winding and one or more mechanical contacts, it is used for interrupting and switching AC circuits using very low DC voltage. Which means we can control Electrical appliances in our house using Arduino or any other Microcontroller.
</p>
<p>
Here we’re going to use a relay module which is an electrically operated switch that can be turned on or off, letting the current go through or not, and can be controlled with low voltages, like the 5V provided by the Arduino pins 
</p>
<p>
Controlling a relay module with the Arduino is as simple as controlling any other output as we’ll see later on.This relay module has one channel (the blue cube). There are other models with two, four and eight channels. This module should be powered with 5V, which is appropriate to use with an Arduino.
</p>
<p>
This module should be powered with 5V, which is appropriate to use with an Arduino.and here we’re going to use this relay to control 240V bulb via bluetooth with arduino. 
</p>
<p>
Relay Pinouts :
</p>
<p>
The following figure shows the relay module pinout.
</p>
<p>
             

<p id="gdcalert8" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image6.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert9">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image6.jpg" width="" alt="alt_text" title="image_tooltip">

</p>
<p>
The 3 pins on the left side of the relay module(blue cubes) connect high voltage, and the pins on the right side connect the component that requires low voltage-- the Arduino pins.
</p>
<p>
The high-voltage side has two connectors, each with three sockets: common(COM), normally closed(NC). And normally open (NO).
</p>
<p>
<strong>Main voltage connections :</strong>
</p>
<p>


<p id="gdcalert9" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image7.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert10">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image7.jpg" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert10" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image8.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert11">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image8.jpg" width="" alt="alt_text" title="image_tooltip">

</p>
<p>
The high-voltage side has two connectors, each with three sockets: common (COM), normally closed (NC), and normally open (NO).
</p>
<ul>

<li><strong>COM :</strong> Common pin

<li><strong>NC (Normally closed) : </strong>the normally closed configuration is used when you want the relay to be closed by default.meaning the current is flowing unless you send a signal from the Arduino to the relay module to open the circuit and stop the current.

<li><strong>NO (Normally open) : </strong>the normally open configuration works the other way around: The relay is always open , the circuit is broken unless you send a signal from the arduino to close the circuit.
<p>

    If you just want to light up a lamp occasionally, it is better to use a normally-open circuit configuration.
</p>
</li>
</ul>
<p>
<strong>Pin wiring :</strong>
</p>
<p>
The low-voltage side has a set of four pins and a set of three pins.
</p>
<p>

        

<p id="gdcalert11" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image9.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert12">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image9.png" width="" alt="alt_text" title="image_tooltip">

</p>
<p>
The set at the right consists of <strong>VCC</strong> and <strong>GND</strong> to power up the module, and input 1 (<strong>IN1</strong>) and input 2 (<strong>IN2</strong>) to control the bottom and top relays, respectively.
</p>
<p>
The second set of pins consists of <strong>GND</strong>, <strong>VCC</strong>, and<strong> JD-VCC</strong> pins. The JD-VCC pin powers the electromagnet of the relay.
</p>
<ul>

<li><strong>COM :</strong> Common pin

<li><strong>In :  </strong>controls the first relay (it will be connected to an Arduino digital pin)

<li><strong>VCC : </strong>Goes to 5V pin of Arduino
</li>
</ul>
<p>
<strong>Connection between Relay Module, Bulb, and input power:</strong>
</p>
<ol>

<li>Connect common-point (<strong>com</strong>) of the Relay Module with home light.

<li>Connect normally-open (<strong>no</strong>) of the Relay Module with power.

<li>Connect the remaining one home light wire with the <strong>power source</strong>.
</li>
</ol>
<p>
<strong>Write an Arduino program to control the home light using Bluetooth Module,1 Channel Relay Module with Android application</strong>
</p>
<p>
Compile and upload your code into the Arduino device using Arduino USB cable. While uploading the code try  to disconnect other components from Arduino.
</p>
<p>
char Incoming_value = 0;
</p>
<p>
void setup() {
</p>
<p>
  Serial.begin(9600);
</p>
<p>
  pinMode(13, OUTPUT);
</p>
<p>
  }
</p>
<p>
    void loop() {
</p>
<p>
    if(Serial.available() > 0)
</p>
<p>
    {
</p>
<p>
      Incoming_value = Serial.read();
</p>
<p>
      Serial.print(Incoming_value);
</p>
<p>
      Serial.print("\n");
</p>
<p>
      if (Incoming_value == 'a')
</p>
<p>
        digitalWrite(13, HIGH);
</p>
<p>
      else if (Incoming_value == 'b')
</p>
<p>
         digitalWrite(13, LOW);
</p>
<p>
      }
</p>
<p>
}
</p>
<p>
<strong>Home Automation App</strong>
</p>
<p>
You need an app (<a href="https://play.google.com/store/apps/details?id=com.darkbrothers.automation&hl=en_IN">download here</a>) to control the Home appliances using Bluetooth. After downloading follow these steps to add a Room and components.
</p>
<p>
<strong>Step 1</strong> <strong>:</strong> Open Bluetooth settings of mobile and pair the HC-05 Module. Kindly note that only paired devices will appear in the Android App.
</p>
<p>
<strong>Step 2 :</strong> Open the app and click on the Bluetooth icon to connect with the Bluetooth device.
</p>
<p>
<strong>Step 3 :</strong> Click on + icon at the bottom right of screen to Add a Room. If Bluetooth is being Connected the Bluetooth icon will turn blue in color.
</p>
<p>
<strong>Step 4 :</strong> Here you can change Room name, picture and add new devices. Click + to add a new device and swipe right to delete.
</p>
<p>
<strong>Step 5 : </strong>After saving you can send data to the connected Bluetooth Device. Make sure to Pair your Bluetooth device before using the App
</p>
<p>
<strong>     </strong>

<p id="gdcalert12" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image10.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert13">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image10.png" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert13" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image11.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert14">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image11.png" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert14" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image12.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert15">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image12.png" width="" alt="alt_text" title="image_tooltip">

</p>
<p>


<p id="gdcalert15" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image13.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert16">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image13.png" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert16" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image14.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert17">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image14.png" width="" alt="alt_text" title="image_tooltip">

</p>
<p>
<strong>Connection :-</strong>

<p id="gdcalert17" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image15.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert18">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image15.jpg" width="" alt="alt_text" title="image_tooltip">
<strong>                           </strong>
</p>
<p>
<strong>If it works on the breadboard, let's make the project on a line board with the same components.</strong>
</p>
<p>
Here we are going to use a line board instead of the breadboard.we have to solder all of the components as we require with the help of the diagram above.
</p>
<p>


<p id="gdcalert18" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image16.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert19">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image16.jpg" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert19" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image17.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert20">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image17.jpg" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert20" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image18.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert21">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image18.jpg" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert21" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image19.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert22">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image19.jpg" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert22" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image20.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert23">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image20.jpg" width="" alt="alt_text" title="image_tooltip">

</p>
<p>


<p id="gdcalert23" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image21.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert24">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image21.jpg" width="" alt="alt_text" title="image_tooltip">


<p id="gdcalert24" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image22.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert25">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


<img src="images/image22.jpg" width="" alt="alt_text" title="image_tooltip">

</p>
<p>
<strong>Thank you...</strong>
</p>