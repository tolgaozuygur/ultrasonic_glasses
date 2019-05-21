# Ultrasonic Glasses for Visually Impaired
This is an electronic glasses extension that turns distance data into sound to help visually impaired navigate. Initially built it on my YouTube channel <a href="https://www.youtube.com/channel/UCMPCc9hZ-YBZkEon9tzESVA" target="_blank">Hallederiz</a>, it is the first prototype of an easy to build device to help visually impaired. 

Since this is a proof of content it is bulky and requires to be mounted on a pair of safety glasses.

We have tested this version with the Association of Blinds of Turkey and received lots of positive feedback with many ideas to upgrade the device further.

On the next version I intend to shrink it's size down and make it attachable to any existing pair of glasses / sun glasses. 

> Here is how it looks when assembled

<img src="https://github.com/tolgaozuygur/ultrasonic_glasses/blob/master/ultrasonic_glasses_photo.jpg" title="Ultrasonic Glasses" alt="Ultrasonic Glasses" width="500">

## Build it!
Building the device is quite simple -that's the objective-. You need to 3d print a couple of simple parts, and need some very basic soldering skills to build the circuit. Then upload the arduino code and it will work right away.

The building process is documented on the YouTube channel <a href="https://www.youtube.com/channel/UCMPCc9hZ-YBZkEon9tzESVA" target="_blank">Hallederiz</a>, but the channel is in Turkish, but even though it's in Turkish you can still watch the progress and get some ideas about how to assemble the device together. I intend to add English subtitles soon.

## Parts Required
- <a href="https://www.adafruit.com/product/982" target="_blank">1x Maxbotix Ultrasonic Rangefinder - LV-EZ4</a>
- <a href="https://store.arduino.cc/usa/arduino-nano" target="_blank">1x Arduino Nano</a>
- <a href="https://www.seeedstudio.com/Lipo-Rider-v1-3-p-2403.html" target="_blank">1x Lipo Rider 1.3</a>
- <a href="https://www.e-switch.com/product-catalog/rocker/product-lines/ra8-series-power-rocker-switch#.XOM_lcgzaUk" target="_blank">Rocker Switch</a>
- <a href="https://www.adafruit.com/product/258" target="_blank">LiPo Battery</a>
- 2mm screws
- Jumper Cables 
- Heat Shrinking Tube
- A pair of generic safety glasses

> You can use an Arduino Mini Pro to save space. You can also use a clone if you're tight on budget.
> Any LiPo battery would work, just check the dimensions of the 3d case to be sure it will fit.
> You can use small LiPo Charger and a small DC-DC Step up board instead of the Lipo Rider to save even more space.

## Soldering the circuit
Solder the components together based on the diagram below. It is quite simple, just free-form it using jumper cables and heat shrinking tubes. Be sure there is no short circuit when placing the circuit in the box, use insulation tape on the boards if required.

<img src="https://github.com/tolgaozuygur/ultrasonic_glasses/blob/master/visually_impaired_sensor_circuit_bb.png" title="Ultrasonic Sensor Circuit Diagram" alt="Ultrasonic Sensor Circuit Diagram">

## 3d Print and Assembling the Case
Print the stl files in the 3d_files folder. The do not need any support, just print them as they are. (make sure you lay them flat in your slicer). The ultrasonic_glasses_case_spacer.stl file was required to straighten the case on the safety glasses we used (glued it between the case and the glasses), you might not need it. 

Try to align the charging port of the LiPo Rider with the hole on the case. 

>Here is a photo of the assembled device. The battery is behind the LiPo Rider.

<img src="https://github.com/tolgaozuygur/ultrasonic_glasses/blob/master/ultrasonic_glasses_circuit_photo.jpg" title="Ultrasonic Sensor Circuit" alt="Ultrasonic Sensor Circuit">

## Finalizing the Device
Just upload the ultrasonic_glasses.ino to the Arduino, close the case, charge the battery and turn it on. For the first few seconds the device will make a constant beeping sound to let the ultrasonic sensor do first calibration. After that it will start beeping based on the distance of the objects you are looking. 

## Final words
As said, this is a proof of concept. Feel free to fork it to upgrade / simplify it even further. Also I'd be super happy if you send me an email (tolgaozuygur at gmail) if you build one and test it with a visually impaired friend of yours. After all, the purpose of this project is to help people to live a more comfortable life through a proper use of technology. It would be very humbling and joyful to see it in use.

