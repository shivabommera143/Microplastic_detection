## Affordable Microplastic Detection Using Optical Light Scattering

A low-cost Arduino-based device that detects microplastics in water using a simple laser + photodiode light scattering method.
This project was presented at ICECMPA-26 International Conference (Feb 2026).

## Overview
Microplastics (<5 mm) are increasingly found in drinking water worldwide. Traditional detection methods (FTIR, Raman, microscopy) are expensive and require laboratory infrastructure.
This project demonstrates a **portable, real-time, low-cost optical system** that detects microplastics by measuring **light intensity reduction** caused by scattering.

## How It Works
1. A red laser diode transmits light through a water sample.  
2. A photodiode receives the transmitted light.  
3. If microplastics are present → they scatter the laser → intensity at photodiode decreases.  
4. Arduino measures this drop and identifies contamination.
Clean water = high intensity  
Contaminated water = low intensity  

## Hardware Components
- Arduino Uno R3  
- 650 nm red laser diode  
- Photodiode sensor  
- 16x2 LCD display  
- Transparent beaker  
- Jumper wires  
- Power supply  

Total cost: ₹1300

## Experimental Results
| Sample Type        | Avg Intensity (ADC) | Observation       |
|--------------------|---------------------|-------------------|
| Clean Water        | ~820                | High transmission |
| Microplastic Water | ~560                | Strong scattering |

Intensity drop ≈ 31–35%
Response time: 2–2.3 seconds 
Accuracy: 85%

It:
- Averages 50 readings  
- Prints intensity on LCD  
- Detects microplastic presence using thresholding  

## 🚀 Future Improvements
- Higher-sensitivity photodiodes  
- LED-based turbidity compensation  
- Handheld 3D-printed enclosure  
- ML-based particle type classification  
- Multi-wavelength laser detection  

