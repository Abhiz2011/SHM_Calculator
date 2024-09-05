# SHM_Calculator

# Simulation of a Simple Harmonic Oscillator

This project simulates the behavior of a simple harmonic oscillator (e.g., a mass-spring system) using C++. The program calculates and displays the position, velocity, and acceleration of the mass over time based on the mathematical equations governing simple harmonic motion.

## Features

- **Mathematical Model**: Implements the following equations of motion for the simple harmonic oscillator:
  - **Position**: \( x(t) = A \cos(\omega t + \varphi) \)
  - **Velocity**: \( v(t) = -A \omega \sin(\omega t + \varphi) \)
  - **Acceleration**: \( a(t) = -A \omega^2 \cos(\omega t + \varphi) \)
  - Where:
    - \( A \) is the amplitude
    - \( \omega \) is the angular frequency
    - \( \varphi \) is the phase angle
    - \( t \) is the time
- **User Input**: Allows the user to input:
  - Mass (\( m \))
  - Spring constant (\( k \))
  - Amplitude (\( A \))
  - Phase angle (\( \varphi \))
  - Time step and total simulation time
- **Simulation**: Computes the position, velocity, and acceleration at each time step over the specified total time.
- **Output**: Displays the results in the terminal, showing the values of position, velocity, and acceleration at regular intervals.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, clang++)
- Basic knowledge of C++ to understand and modify the code if needed

### Running the Program

1. **Clone the repository**:

   ```bash
   git clone https://github.com/your-username/simple-harmonic-oscillator.git
   cd simple-harmonic-oscillator


### Output
![image](https://github.com/user-attachments/assets/450a680b-d874-465a-bab8-15c0a75ad59e)

