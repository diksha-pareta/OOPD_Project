# WiFi Simulation Project

## Project Description

This project simulates WiFi communication for WiFi 4, WiFi 5, and WiFi 6 standards. It calculates **throughput**, **average latency**, and **maximum latency** for different scenarios with varying numbers of users and access points (APs). The simulations are implemented using object-oriented principles, following the specifications provided.

## Directory Structure
WiFi_Project/ ├── AccessPoint.h ├── AccessPoint.cpp ├── User.h ├── User.cpp ├── Packet.h ├── Packet.cpp ├── FrequencyChannel.h ├── FrequencyChannel.cpp ├── WiFiSystem.h ├── WiFiSystem.cpp ├── main.cpp ├── Makefile

## Input Format

The program takes input from the terminal in the following format:

1. **WiFi Version (4, 5, or 6):**
   - Enter `4` for WiFi 4 simulation.
   - Enter `5` for WiFi 5 simulation.
   - Enter `6` for WiFi 6 simulation.

2. **Number of Users:**  
   Enter the number of users communicating with a single AP.

## Output Format

The program prints the following results for each scenario:
- **Average Latency (ms)**
- **Maximum Latency (ms)**
- **Throughput (Mbps)**

Example output:
Enter the WiFi version (4, 5, or 6): 4 Enter the number of users: 1 Simulation Results: Average Latency: 0.06144 ms Maximum Latency: 0.06144 ms Throughput: 133.33 Mbps

## How to Build the Project

The project uses a **Makefile** for compilation. Two build configurations are available: **debug** and **optimized**.

1. **Debug Build:**
   ```bash
   mingw32-make debug
This generates a debug executable with additional debugging information.

2.Optimized Build: mingw32-make
This generates an optimized executable for performance.

3.Clean Build Files: mingw32-make clean
This removes all compiled object files and executables.

**How to Run the Project**
After building the executable, run the program as follows: ./main

Follow the prompts to enter:

The WiFi version (4, 5, or 6).
The number of users communicating with the AP.
Implementation Details
WiFi 4 Simulation
Process:
A user sniffs the channel.
If the channel is free, the user transmits.
If the channel is busy, the user waits for a random backoff time and retries.
Assumptions:
Bandwidth: 20 MHz
Modulation: 256-QAM
Coding Rate: 5/6
Packet Size: 1 KB
Output: Average Latency, Maximum Latency, Throughput.

WiFi 5 Simulation
Process:AP sends a broadcast packet.
Users sequentially send channel state information (200 bytes per user).
Users communicate in parallel using MU-MIMO for 15 ms.
Assumptions:
Bandwidth: 40 MHz
Modulation: 256-QAM
Coding Rate: 5/6
Packet Size: 1 KB
Output: Average Latency, Maximum Latency, Throughput.

WiFi 6 Simulation
Process:
Users communicate using OFDMA.
Sub-channels of 2 MHz, 4 MHz, or 10 MHz are used.
Communication occurs for 5 ms before reallocation.
Assumptions:
Bandwidth: 80 MHz
Modulation: 256-QAM
Coding Rate: 5/6
Packet Size: 1 KB
Output: Average Latency, Maximum Latency, Throughput.

# Input and Output

## WiFi 4 Example
Enter the WiFi version (4, 5, or 6): 4
Enter the number of users: 10
Simulation Results:
Average Latency: 0.6144 ms
Maximum Latency: 0.6144 ms
Throughput: 13.333 Mbps

## WiFi 5 Example
Enter the WiFi version (4, 5, or 6): 5
Enter the number of users: 10
Simulation Results:
Average Latency: 0.09 ms
Maximum Latency: 0.09 ms
Throughput: 150 Mbps

## WiFi 6 Example
Enter the WiFi version (4, 5, or 6): 6
Enter the number of users: 100
Simulation Results:
Average Latency: 0.8 ms
Maximum Latency: 0.8 ms
Throughput: 25 Mbps

# Additional Notes
Dependencies: The project uses C++11 features. Ensure your compiler supports this version.
Error Handling: Input validation is implemented for WiFi version and user count.
If invalid inputs are provided, the program prints an error message and exits.

# Code Cleanliness:
The project follows proper coding conventions, with meaningful variable names and modular design.

# Author
This project was created as part of the OOPD coursework. Contributions and feedback are welcome.