# SAMTEH

## Smart Adaptive Micro-Turbine Energy Harvester

SAMTEH (Smart Adaptive Micro-Turbine Energy Harvester) is an intelligent airflow-based micro energy harvesting system designed to convert airflow from HVAC ducts, ventilation systems, industrial exhaust channels, and pipelines into usable electrical power. The project combines micro-turbine energy conversion with adaptive embedded control to create a protection-aware and self-regulating energy harvesting architecture suitable for IoT devices, wireless sensor networks, and industrial monitoring systems.

## Overview

Conventional airflow energy harvesting systems primarily focus on mechanical optimization or static maximum power point tracking (MPPT). However, many existing systems lack adaptive electrical regulation, intelligent load management, and protection-oriented control mechanisms.

SAMTEH addresses these limitations through a multi-mode adaptive operational framework consisting of:

* Harvest Mode
* Limit Mode
* Protection Mode

The system dynamically responds to changing airflow conditions and electrical loads using real-time sensing and embedded decision-making logic.

## Key Features

* Airflow-driven micro-turbine energy generation
* Real-time voltage and current sensing
* Embedded adaptive control system
* Relay-based load modulation
* Multi-mode operational protection
* Closed-loop electrical damping
* Intelligent voltage regulation
* Protection against over-voltage conditions

## System Architecture

The SAMTEH system integrates:

* Micro-turbine airflow conversion subsystem
* Electromagnetic generator
* Bridge rectifier and DC power conditioning
* Voltage sensing circuitry
* Current sensing circuitry
* ATmega328P microcontroller
* Relay switching interface
* Adaptive load control mechanism

## Experimental Validation

Experimental testing was conducted under low, moderate, high, and very high airflow conditions. The system demonstrated:

* Stable voltage generation
* Adaptive relay switching behavior
* Reduced voltage fluctuations
* Improved transient response
* Enhanced operational safety
* Reliable protection mode activation

## Repository Contents

This repository includes:

* Embedded control source code
* Hardware implementation details

## Applications

Potential applications include:

* Smart HVAC monitoring systems
* Self-powered IoT sensor nodes
* Industrial airflow monitoring
* Autonomous embedded systems
* Distributed sensing platforms
* Renewable micro-energy systems

## Software Availability

Source code available from this repository.

Archived software DOI: https://doi.org/10.5281/zenodo.20225583

## License

This project is licensed under the MIT License.

## Authors

* Craig Karichi
* Ahmad S
* Ali SA
* Ali S

## Citation

If you use this work in research or development, please cite the associated SAMTEH publication.

## Future Development

Future improvements include:

* Solid-state switching integration
* Predictive airflow modeling
* Machine learning-based adaptive control
* Miniaturized PCB implementation
* Long-term industrial deployment studies

SAMTEH contributes toward the development of intelligent, adaptive, and protection-oriented renewable micro-energy harvesting systems for next-generation industrial and IoT applications.
