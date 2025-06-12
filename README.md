# Arduino ARM Controller

This repository provides code and resources for controlling an ARM (robotic arm or actuator) using an Arduino. The project includes both the embedded C source code for the Arduino and an HTML-based interface for user interaction.

## Features

- **Arduino-based ARM Control:** C code for programming Arduino to operate and control the ARM.
- **Web Interface:** HTML pages to provide a user-friendly interface for issuing commands and monitoring the ARM.
- **Customizable:** Easily adapt the control logic and interface for different types of ARMs or actuators.
- **Open Source:** Freely available for personal, educational, and non-commercial use.

## Repository Structure

```
.
├── index.html            # HTML files for web-based ARM control interface
├── controller.c             # Arduino C source code
├── README.md        # Project documentation
```

## Getting Started

### Prerequisites

- Arduino board (e.g., Uno, Mega)
- ARM/robotic arm hardware connected to Arduino
- Arduino IDE for uploading code
- Web browser for the HTML interface

### Setup

1. **Clone the repository:**
   ```bash
   git clone https://github.com/gayathrimannava/ardunio-arm-controller.git
   ```

2. **Upload Arduino Code:**
   - Open the C source files `controller.c` with Arduino IDE.
   - Connect your Arduino to the computer.
   - Select the correct board and port.
   - Upload the code to your Arduino.

3. **Run Web Interface:**
   - Open the HTML files `index.html` using your browser.
   - Follow the on-screen instructions to control the ARM.

### Hardware Connections

- Ensure correct wiring between Arduino and the ARM/actuators.
- Refer to comments in the C source files for pin connections and configuration.

## Customization

- Modify the C source code to adjust for different ARM hardware or features.
- Update the HTML files to improve the user interface or add new controls.

## Contribution

Contributions are welcome! Please fork the repository and submit pull requests for improvements or new features.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.

## Acknowledgments

- Inspired by Arduino robotics and open-source hardware communities.
- Special thanks to contributors and users.

---

*Created by [gayathrimannava](https://github.com/gayathrimannava)*
