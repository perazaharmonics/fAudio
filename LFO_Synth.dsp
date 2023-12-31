declare filename "untitled.dsp";
declare name "untitled";
import("stdfaust.lib");

// ADSR parameters
attack = hslider("Attack [0:1]", 0.01, 0.0, 1.0, 0.01);
decay = hslider("Decay [0:1]", 0.1, 0.0, 1.0, 0.01);
sustain = hslider("Sustain[0:1]", 0.7, 0.0, 1.0, 0.01);
release = hslider("Release[0:1]", 0.5, 0.0, 1.0, 0.01);

// Octave control
octave = hslider("Octave[-3:3]", 0, -3, 3, 1) : int;


// ADSR envelope
adsr(A, D, S, R, G) = si.smoo(A) * G - si.smoo(D) * (1 - S) * G + S * G : *(1 - G) + si.smoo(R) * S : *(G);

oscA = os.osc(440.00 * pow(2, octave)) * button("Play A") * adsr(attack, decay, sustain, release, button("Play A"));
oscB = os.osc(493.88 * pow(2, octave)) * button("Play B") * adsr(attack, decay, sustain, release, button("Play B"));
oscC = os.osc(261.63 * pow(2, octave)) * button("Play C") * adsr(attack, decay, sustain, release, button("Play C"));
oscD = os.osc(293.66 * pow(2, octave)) * button("Play D") * adsr(attack, decay, sustain, release, button("Play D"));
oscE = os.osc(329.63 * pow(2, octave)) * button("Play E") * adsr(attack, decay, sustain, release, button("Play E"));
oscF = os.osc(349.23 * pow(2, octave)) * button("Play F") * adsr(attack, decay, sustain, release, button("Play F"));
oscG = os.osc(392.00 * pow(2, octave)) * button("Play G") * adsr(attack, decay, sustain, release, button("Play G"));

// Chorus parameters
delayTime = hslider("Chorus Delay Time[ms]", 15, 0, 50, 0.1);
depth = hslider("Chorus Depth[ms]", 2, 0, 20, 0.1);
rate = hslider("Chorus Rate[Hz]", 1.5, 0.1, 5, 0.01);

lfo = (os.osc(rate) + 1) * (depth/2);  // LFO oscillating between 0 and depth



maxDelay = 50;  // Maximum expected delay in ms
modulatedDelaySamples = int((delayTime + lfo) * ma.SR / 1000);

// Digital Delay line to modulate
// Delay line
delayed = _ @ int(modulatedDelaySamples);

chorusEffect(signal) = 
(
    signal,       // dry signal
    delayed(signal)  // delayed signal
) :> _;

// Combining oscillators
combined = oscA + oscB + oscC + oscD + oscE + oscF + oscG;

// Apply the chorus effect
// Apply the chorus effect
processedSignal = (combined * 0.14) : chorusEffect;

process = processedSignal <: _,_;