/*
  Demonstrates insertion of Energia specific code insertion prior
  to compilation based on the processor being used.

  The pre-processor checks to see what processor is being used
  and inserts code accordingly.  Use these #if statements to insert 
  hardware specific actions into your code based on hardware
  ADC resolution, clock speed, etc.
  
  Note:  The header files for MSP430 are located at:
     energia-0101E00xx/hardware/tools/msp430/msp430/include     
  
  Thanks to this site for ideas: http://embedxcode.weebly.com/manage-code-for-multiple-platforms.html
  Created by Frank Milburn,  1 June 2015
  Released into the public domain
*/  

void setup()
{
  Serial.begin(9600);
  Serial.println("Looking for processor info...");
  Serial.println("");
  
  #if defined (ARDUINO)
    // In Energia, ARDUINO is a wrapper for backwards compatibility
    // that calls ENERGIA
    Serial.println("Found ARDUINO");
  #endif
  
  #if defined (ENERGIA)
    Serial.println("Found ENERGIA");
  #endif
  
  #if defined (__MSP430__)
    Serial.println("Found MSP430");
  #endif
  
  #if defined (__MSP430G2553)
    Serial.println("Found MSP430G2553");
  #endif
  
  #if defined (__MSP430F5529)
    Serial.println("Found MSP430F5529");
  #endif    

  #if defined (__MSP430FR5969)
    Serial.println("Found MSP430FR5969");
  #endif

  #if defined (__MSP430FR6989)
    Serial.println("Found MSP430FR6989");
  #endif
  
  #if defined(__LM4F120H5QR__)
    Serial.println("Found Tiva C Series TM4C123G");
  #endif
  
  #if defined(__CC3200R1M1RGC__)
    Serial.println("Found CC3200");
  #endif
  
  #if defined(__MSP432P401R__)
    Serial.println("Found MSP432P401R"); 
  #endif 
}

void loop()
{
  // Nothing here...
}
