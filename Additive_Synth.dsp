declare filename "untitled.dsp";
declare name "untitled";
import("stdfaust.lib");

// Oscillator and gains definitions
freq0 = hslider("wave_1[freq]", 440, 0, 21200, .001);
gain0 = hslider("Amplitude [gain]", 0.5, 0, 1, 0.001);

freq1 = hslider("wave_2[freq]", 130.81, 0, 21200, .01);
gain1 = hslider("Amplitude [gain]", 0.5, 0, 1, 0.001);

// Create oscillators with the defined frequencies and gains
osc0 = os.osc(freq0) * gain0;
osc1 = os.osc(freq1) * gain1;

// Merge signals, replicate to stereo, and process with reverb
process = (osc0 + osc1) <: _,_ : dm.zita_rev1;