# IR Transmitter Sensor

#### Project Overview

The IR Transmitter Sensor project demonstrates how to use an Arduino Nano to transmit IR signals. The project uses the `IRremote` library to send IR codes, which can be used to control various devices such as TVs, DVD players, and other IR-controlled electronics. This example sends Sony IR codes when a command is received via the serial monitor.

#### Components Needed

1. **Arduino Nano**
2. **IR LED**
3. **220Ω Resistor**
4. **Jumper Wires**

### Block Diagram



#### Circuit Setup

1. **Connect IR LED to Arduino Nano:**
   - Connect the anode (longer lead) of the IR LED to digital pin 3 on the Arduino Nano through a 220Ω resistor.
   - Connect the cathode (shorter lead) of the IR LED to the GND pin on the Arduino Nano.

#### Instructions

1. **Circuit Setup:**
   - Wire the IR LED to the Arduino Nano as described in the circuit setup section.

2. **Code Upload:**
   - Connect the Arduino Nano to your computer via USB.
   - Open the Arduino IDE and paste the provided code.
   - Upload the code to the Arduino Nano.

3. **Testing:**
   - Once the code is uploaded, open the serial monitor.
   - Enter '1' or '2' and press enter. The Arduino will send the corresponding IR code.
   - Point the IR LED at the device you want to control and observe the response.

#### Applications

- **Remote Control Replacement:** Use the IR transmitter to replace a lost remote control.
- **Home Automation:** Integrate the IR transmitter with home automation systems to control multiple devices.
- **Custom Remote Control:** Develop custom remote control interfaces for various electronic devices.

#### Notes

- Ensure the IR LED is oriented correctly and has a clear line of sight to the device being controlled.
- Experiment with different IR codes to control various devices.
- Refer to the `IRremote` library documentation for more information on sending different types of IR signals.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-nano-ir-transmiter-sensor)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner