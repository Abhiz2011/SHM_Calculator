#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

// Function prototypes
double calculatePosition(double A, double omega, double phi, double t);
double calculateVelocity(double A, double omega, double phi, double t);
double calculateAcceleration(double A, double omega, double phi, double t);

int main() {
    // User input for parameters
    double mass, springConstant, amplitude, phaseAngle, timeStep, totalTime;

    std::cout << "Enter the mass (kg): ";
    std::cin >> mass;
    std::cout << "Enter the spring constant (N/m): ";
    std::cin >> springConstant;
    std::cout << "Enter the amplitude (m): ";
    std::cin >> amplitude;
    std::cout << "Enter the phase angle (radians): ";
    std::cin >> phaseAngle;
    std::cout << "Enter the time step (s): ";
    std::cin >> timeStep;
    std::cout << "Enter the total simulation time (s): ";
    std::cin >> totalTime;

    // Calculate angular frequency (omega)
    double omega = std::sqrt(springConstant / mass);

    // Time simulation
    double time = 0.0;
    std::vector<double> positions, velocities, accelerations;

    while (time <= totalTime) {
        // Calculate position, velocity, and acceleration
        double x = calculatePosition(amplitude, omega, phaseAngle, time);
        double v = calculateVelocity(amplitude, omega, phaseAngle, time);
        double a = calculateAcceleration(amplitude, omega, phaseAngle, time);

        // Store the results
        positions.push_back(x);
        velocities.push_back(v);
        accelerations.push_back(a);

        // Print the results
        std::cout << "Time: " << std::fixed << std::setprecision(2) << time
                  << " s, Position: " << x << " m, "
                  << "Velocity: " << v << " m/s, "
                  << "Acceleration: " << a << " m/s^2" << std::endl;

        // Increment time
        time += timeStep;
    }

    return 0;
}

// Function definitions
double calculatePosition(double A, double omega, double phi, double t) {
    return A * std::cos(omega * t + phi);
}

double calculateVelocity(double A, double omega, double phi, double t) {
    return -A * omega * std::sin(omega * t + phi);
}

double calculateAcceleration(double A, double omega, double phi, double t) {
    return -A * omega * omega * std::cos(omega * t + phi);
}
