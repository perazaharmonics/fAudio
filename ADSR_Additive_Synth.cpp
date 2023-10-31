/* ------------------------------------------------------------
name: "untitled"
Code generated with Faust 2.68.1 (https://faust.grame.fr)
Compilation options: -lang cpp -ct 1 -es 1 -mcd 16 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

class mydspSIG0 {
	
  private:
	
	int iVec2[2];
	int iRec15[2];
	
  public:
	
	int getNumInputsmydspSIG0() {
		return 0;
	}
	int getNumOutputsmydspSIG0() {
		return 1;
	}
	
	void instanceInitmydspSIG0(int sample_rate) {
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			iVec2[l7] = 0;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			iRec15[l8] = 0;
		}
	}
	
	void fillmydspSIG0(int count, float* table) {
		for (int i1 = 0; i1 < count; i1 = i1 + 1) {
			iVec2[0] = 1;
			iRec15[0] = (iVec2[1] + iRec15[1]) % 65536;
			table[i1] = std::sin(9.58738e-05f * float(iRec15[0]));
			iVec2[1] = iVec2[0];
			iRec15[1] = iRec15[0];
		}
	}

};

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)new mydspSIG0(); }
static void deletemydspSIG0(mydspSIG0* dsp) { delete dsp; }

static float mydsp_faustpower2_f(float value) {
	return value * value;
}
static float ftbl0mydspSIG0[65536];

class mydsp : public dsp {
	
 private:
	
	int iVec0[2];
	FAUSTFLOAT fVslider0;
	int fSampleRate;
	float fConst2;
	FAUSTFLOAT fVslider1;
	float fConst3;
	FAUSTFLOAT fVslider2;
	float fConst4;
	float fRec11[2];
	FAUSTFLOAT fVslider3;
	float fRec10[2];
	int IOTA0;
	float fVec1[16384];
	int iConst6;
	float fConst7;
	float fConst8;
	FAUSTFLOAT fHslider0;
	float fRec12[2];
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	float fRec13[2];
	FAUSTFLOAT fHslider3;
	float fRec14[2];
	FAUSTFLOAT fButton0;
	FAUSTFLOAT fHslider4;
	float fConst9;
	float fRec16[2];
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	float fRec17[2];
	FAUSTFLOAT fHslider7;
	float fVec3[16384];
	FAUSTFLOAT fVslider4;
	float fConst10;
	float fVec4[4096];
	int iConst11;
	float fRec8[2];
	float fConst13;
	float fRec21[2];
	float fRec20[2];
	float fVec5[16384];
	int iConst15;
	float fVec6[2048];
	int iConst16;
	float fRec18[2];
	float fConst18;
	float fRec25[2];
	float fRec24[2];
	float fVec7[16384];
	int iConst20;
	float fVec8[4096];
	int iConst21;
	float fRec22[2];
	float fConst23;
	float fRec29[2];
	float fRec28[2];
	float fVec9[16384];
	int iConst25;
	float fVec10[2048];
	int iConst26;
	float fRec26[2];
	float fConst28;
	float fRec33[2];
	float fRec32[2];
	float fVec11[32768];
	int iConst30;
	float fVec12[4096];
	int iConst31;
	float fRec30[2];
	float fConst33;
	float fRec37[2];
	float fRec36[2];
	float fVec13[16384];
	int iConst35;
	float fVec14[4096];
	int iConst36;
	float fRec34[2];
	float fConst38;
	float fRec41[2];
	float fRec40[2];
	float fVec15[32768];
	int iConst40;
	float fVec16[4096];
	int iConst41;
	float fRec38[2];
	float fConst43;
	float fRec45[2];
	float fRec44[2];
	float fVec17[32768];
	int iConst45;
	float fVec18[2048];
	int iConst46;
	float fRec42[2];
	float fRec0[3];
	float fRec1[3];
	float fRec2[3];
	float fRec3[3];
	float fRec4[3];
	float fRec5[3];
	float fRec6[3];
	float fRec7[3];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	float fRec46[3];
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fRec47[3];
	FAUSTFLOAT fVslider9;
	float fRec48[2];
	FAUSTFLOAT fVslider10;
	float fRec49[2];
	float fRec50[3];
	float fRec51[3];
	
 public:
	mydsp() {}

	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.11.1");
		m->declare("compile_options", "-lang cpp -ct 1 -es 1 -mcd 16 -single -ftz 0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
		m->declare("demos.lib/name", "Faust Demos Library");
		m->declare("demos.lib/version", "1.1.0");
		m->declare("demos.lib/zita_rev1:author", "Julius O. Smith III");
		m->declare("demos.lib/zita_rev1:licence", "MIT");
		m->declare("filename", "untitled.dsp");
		m->declare("filters.lib/allpass_comb:author", "Julius O. Smith III");
		m->declare("filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/peak_eq_rm:author", "Julius O. Smith III");
		m->declare("filters.lib/peak_eq_rm:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/peak_eq_rm:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.3.0");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.6.0");
		m->declare("name", "untitled");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/version", "1.4.0");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/version", "1.2.0");
		m->declare("routes.lib/hadamard:author", "Remy Muller, revised by Romain Michon");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "1.3.0");
	}

	virtual int getNumInputs() {
		return 0;
	}
	virtual int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
		mydspSIG0* sig0 = newmydspSIG0();
		sig0->instanceInitmydspSIG0(sample_rate);
		sig0->fillmydspSIG0(65536, ftbl0mydspSIG0);
		deletemydspSIG0(sig0);
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		float fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		float fConst1 = std::floor(0.174713f * fConst0 + 0.5f);
		fConst2 = (0.0f - 6.9077554f * fConst1) / fConst0;
		fConst3 = 6.2831855f / fConst0;
		fConst4 = 3.1415927f / fConst0;
		float fConst5 = std::floor(0.022904f * fConst0 + 0.5f);
		iConst6 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst1 - fConst5)));
		fConst7 = 44.1f / fConst0;
		fConst8 = 1.0f - fConst7;
		fConst9 = 1.0f / fConst0;
		fConst10 = 0.001f * fConst0;
		iConst11 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst5 + -1.0f)));
		float fConst12 = std::floor(0.153129f * fConst0 + 0.5f);
		fConst13 = (0.0f - 6.9077554f * fConst12) / fConst0;
		float fConst14 = std::floor(0.020346f * fConst0 + 0.5f);
		iConst15 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst12 - fConst14)));
		iConst16 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst14 + -1.0f)));
		float fConst17 = std::floor(0.127837f * fConst0 + 0.5f);
		fConst18 = (0.0f - 6.9077554f * fConst17) / fConst0;
		float fConst19 = std::floor(0.031604f * fConst0 + 0.5f);
		iConst20 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst17 - fConst19)));
		iConst21 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst19 + -1.0f)));
		float fConst22 = std::floor(0.125f * fConst0 + 0.5f);
		fConst23 = (0.0f - 6.9077554f * fConst22) / fConst0;
		float fConst24 = std::floor(0.013458f * fConst0 + 0.5f);
		iConst25 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst22 - fConst24)));
		iConst26 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst24 + -1.0f)));
		float fConst27 = std::floor(0.210389f * fConst0 + 0.5f);
		fConst28 = (0.0f - 6.9077554f * fConst27) / fConst0;
		float fConst29 = std::floor(0.024421f * fConst0 + 0.5f);
		iConst30 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst27 - fConst29)));
		iConst31 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst29 + -1.0f)));
		float fConst32 = std::floor(0.192303f * fConst0 + 0.5f);
		fConst33 = (0.0f - 6.9077554f * fConst32) / fConst0;
		float fConst34 = std::floor(0.029291f * fConst0 + 0.5f);
		iConst35 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst32 - fConst34)));
		iConst36 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst34 + -1.0f)));
		float fConst37 = std::floor(0.256891f * fConst0 + 0.5f);
		fConst38 = (0.0f - 6.9077554f * fConst37) / fConst0;
		float fConst39 = std::floor(0.027333f * fConst0 + 0.5f);
		iConst40 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst37 - fConst39)));
		iConst41 = int(std::min<float>(2048.0f, std::max<float>(0.0f, fConst39 + -1.0f)));
		float fConst42 = std::floor(0.219991f * fConst0 + 0.5f);
		fConst43 = (0.0f - 6.9077554f * fConst42) / fConst0;
		float fConst44 = std::floor(0.019123f * fConst0 + 0.5f);
		iConst45 = int(std::min<float>(16384.0f, std::max<float>(0.0f, fConst42 - fConst44)));
		iConst46 = int(std::min<float>(1024.0f, std::max<float>(0.0f, fConst44 + -1.0f)));
	}
	
	virtual void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(2.0f);
		fVslider1 = FAUSTFLOAT(6e+03f);
		fVslider2 = FAUSTFLOAT(2e+02f);
		fVslider3 = FAUSTFLOAT(3.0f);
		fHslider0 = FAUSTFLOAT(0.5f);
		fHslider1 = FAUSTFLOAT(0.5f);
		fHslider2 = FAUSTFLOAT(0.1f);
		fHslider3 = FAUSTFLOAT(0.01f);
		fButton0 = FAUSTFLOAT(0.0f);
		fHslider4 = FAUSTFLOAT(130.81f);
		fHslider5 = FAUSTFLOAT(0.5f);
		fHslider6 = FAUSTFLOAT(4.4e+02f);
		fHslider7 = FAUSTFLOAT(0.5f);
		fVslider4 = FAUSTFLOAT(6e+01f);
		fVslider5 = FAUSTFLOAT(0.0f);
		fVslider6 = FAUSTFLOAT(315.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fVslider8 = FAUSTFLOAT(1.5e+03f);
		fVslider9 = FAUSTFLOAT(0.0f);
		fVslider10 = FAUSTFLOAT(-2e+01f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec11[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec10[l2] = 0.0f;
		}
		IOTA0 = 0;
		for (int l3 = 0; l3 < 16384; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec12[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec13[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec14[l6] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec16[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec17[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 16384; l11 = l11 + 1) {
			fVec3[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 4096; l12 = l12 + 1) {
			fVec4[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec8[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec21[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec20[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 16384; l16 = l16 + 1) {
			fVec5[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2048; l17 = l17 + 1) {
			fVec6[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec18[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec25[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec24[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 16384; l21 = l21 + 1) {
			fVec7[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 4096; l22 = l22 + 1) {
			fVec8[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec22[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec29[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec28[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 16384; l26 = l26 + 1) {
			fVec9[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2048; l27 = l27 + 1) {
			fVec10[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec26[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec33[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec32[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 32768; l31 = l31 + 1) {
			fVec11[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 4096; l32 = l32 + 1) {
			fVec12[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec30[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec37[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec36[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 16384; l36 = l36 + 1) {
			fVec13[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 4096; l37 = l37 + 1) {
			fVec14[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec34[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec41[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec40[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 32768; l41 = l41 + 1) {
			fVec15[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 4096; l42 = l42 + 1) {
			fVec16[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec38[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec45[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec44[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 32768; l46 = l46 + 1) {
			fVec17[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2048; l47 = l47 + 1) {
			fVec18[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec42[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 3; l49 = l49 + 1) {
			fRec0[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 3; l50 = l50 + 1) {
			fRec1[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 3; l51 = l51 + 1) {
			fRec2[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 3; l52 = l52 + 1) {
			fRec3[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 3; l53 = l53 + 1) {
			fRec4[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 3; l54 = l54 + 1) {
			fRec5[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 3; l55 = l55 + 1) {
			fRec6[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 3; l56 = l56 + 1) {
			fRec7[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 3; l57 = l57 + 1) {
			fRec46[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 3; l58 = l58 + 1) {
			fRec47[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec48[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec49[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 3; l61 = l61 + 1) {
			fRec50[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fRec51[l62] = 0.0f;
		}
	}
	
	virtual void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	virtual void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	
	virtual int getSampleRate() {
		return fSampleRate;
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("untitled");
		ui_interface->declare(&fHslider7, "gain", "");
		ui_interface->addHorizontalSlider("Amplitude_1", &fHslider7, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fHslider5, "gain", "");
		ui_interface->addHorizontalSlider("Amplitude_2", &fHslider5, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fHslider3, "0", "1");
		ui_interface->addHorizontalSlider("Attack", &fHslider3, FAUSTFLOAT(0.01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider2, "0", "1");
		ui_interface->addHorizontalSlider("Decay", &fHslider2, FAUSTFLOAT(0.1f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider0, "0", "1");
		ui_interface->addHorizontalSlider("Release", &fHslider0, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider1, "0", "1");
		ui_interface->addHorizontalSlider("Sustain", &fHslider1, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(0, "0", "");
		ui_interface->declare(0, "tooltip", "~ ZITA REV1 FEEDBACK DELAY NETWORK (FDN) & SCHROEDER     ALLPASS-COMB REVERBERATOR (8x8). See Faust's reverbs.lib for documentation and     references");
		ui_interface->openHorizontalBox("Zita_Rev1");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("Input");
		ui_interface->declare(&fVslider4, "1", "");
		ui_interface->declare(&fVslider4, "style", "knob");
		ui_interface->declare(&fVslider4, "tooltip", "Delay in ms         before reverberation begins");
		ui_interface->declare(&fVslider4, "unit", "ms");
		ui_interface->addVerticalSlider("In Delay", &fVslider4, FAUSTFLOAT(6e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("Decay Times in Bands (see tooltips)");
		ui_interface->declare(&fVslider2, "1", "");
		ui_interface->declare(&fVslider2, "scale", "log");
		ui_interface->declare(&fVslider2, "style", "knob");
		ui_interface->declare(&fVslider2, "tooltip", "Crossover frequency (Hz) separating low and middle frequencies");
		ui_interface->declare(&fVslider2, "unit", "Hz");
		ui_interface->addVerticalSlider("LF X", &fVslider2, FAUSTFLOAT(2e+02f), FAUSTFLOAT(5e+01f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->declare(&fVslider3, "scale", "log");
		ui_interface->declare(&fVslider3, "style", "knob");
		ui_interface->declare(&fVslider3, "tooltip", "T60 = time (in seconds) to decay 60dB in low-frequency band");
		ui_interface->declare(&fVslider3, "unit", "s");
		ui_interface->addVerticalSlider("Low RT60", &fVslider3, FAUSTFLOAT(3.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(8.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider0, "3", "");
		ui_interface->declare(&fVslider0, "scale", "log");
		ui_interface->declare(&fVslider0, "style", "knob");
		ui_interface->declare(&fVslider0, "tooltip", "T60 = time (in seconds) to decay 60dB in middle band");
		ui_interface->declare(&fVslider0, "unit", "s");
		ui_interface->addVerticalSlider("Mid RT60", &fVslider0, FAUSTFLOAT(2.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(8.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider1, "4", "");
		ui_interface->declare(&fVslider1, "scale", "log");
		ui_interface->declare(&fVslider1, "style", "knob");
		ui_interface->declare(&fVslider1, "tooltip", "Frequency (Hz) at which the high-frequency T60 is half the middle-band's T60");
		ui_interface->declare(&fVslider1, "unit", "Hz");
		ui_interface->addVerticalSlider("HF Damping", &fVslider1, FAUSTFLOAT(6e+03f), FAUSTFLOAT(1.5e+03f), FAUSTFLOAT(2.352e+04f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("RM Peaking Equalizer 1");
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "scale", "log");
		ui_interface->declare(&fVslider6, "style", "knob");
		ui_interface->declare(&fVslider6, "tooltip", "Center-frequency of second-order Regalia-Mitra peaking equalizer section 1");
		ui_interface->declare(&fVslider6, "unit", "Hz");
		ui_interface->addVerticalSlider("Eq1 Freq", &fVslider6, FAUSTFLOAT(315.0f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(2.5e+03f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "2", "");
		ui_interface->declare(&fVslider5, "style", "knob");
		ui_interface->declare(&fVslider5, "tooltip", "Peak level         in dB of second-order Regalia-Mitra peaking equalizer section 1");
		ui_interface->declare(&fVslider5, "unit", "dB");
		ui_interface->addVerticalSlider("Eq1 Level", &fVslider5, FAUSTFLOAT(0.0f), FAUSTFLOAT(-15.0f), FAUSTFLOAT(15.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->declare(0, "4", "");
		ui_interface->openHorizontalBox("RM Peaking Equalizer 2");
		ui_interface->declare(&fVslider8, "1", "");
		ui_interface->declare(&fVslider8, "scale", "log");
		ui_interface->declare(&fVslider8, "style", "knob");
		ui_interface->declare(&fVslider8, "tooltip", "Center-frequency of second-order Regalia-Mitra peaking equalizer section 2");
		ui_interface->declare(&fVslider8, "unit", "Hz");
		ui_interface->addVerticalSlider("Eq2 Freq", &fVslider8, FAUSTFLOAT(1.5e+03f), FAUSTFLOAT(1.6e+02f), FAUSTFLOAT(1e+04f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider7, "2", "");
		ui_interface->declare(&fVslider7, "style", "knob");
		ui_interface->declare(&fVslider7, "tooltip", "Peak level         in dB of second-order Regalia-Mitra peaking equalizer section 2");
		ui_interface->declare(&fVslider7, "unit", "dB");
		ui_interface->addVerticalSlider("Eq2 Level", &fVslider7, FAUSTFLOAT(0.0f), FAUSTFLOAT(-15.0f), FAUSTFLOAT(15.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->declare(0, "5", "");
		ui_interface->openHorizontalBox("Output");
		ui_interface->declare(&fVslider9, "1", "");
		ui_interface->declare(&fVslider9, "style", "knob");
		ui_interface->declare(&fVslider9, "tooltip", "-1 = dry, 1 = wet");
		ui_interface->addVerticalSlider("Dry/Wet Mix", &fVslider9, FAUSTFLOAT(0.0f), FAUSTFLOAT(-1.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider10, "2", "");
		ui_interface->declare(&fVslider10, "style", "knob");
		ui_interface->declare(&fVslider10, "tooltip", "Output scale         factor");
		ui_interface->declare(&fVslider10, "unit", "dB");
		ui_interface->addVerticalSlider("Level", &fVslider10, FAUSTFLOAT(-2e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->addButton("gate", &fButton0);
		ui_interface->declare(&fHslider6, "freq", "");
		ui_interface->addHorizontalSlider("wave_1", &fHslider6, FAUSTFLOAT(4.4e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(2.12e+04f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fHslider4, "freq", "");
		ui_interface->addHorizontalSlider("wave_2", &fHslider4, FAUSTFLOAT(130.81f), FAUSTFLOAT(0.0f), FAUSTFLOAT(2.12e+04f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fVslider0);
		float fSlow1 = std::exp(fConst2 / fSlow0);
		float fSlow2 = mydsp_faustpower2_f(fSlow1);
		float fSlow3 = 1.0f - fSlow2;
		float fSlow4 = std::cos(fConst3 * float(fVslider1));
		float fSlow5 = 1.0f - fSlow4 * fSlow2;
		float fSlow6 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow5) / mydsp_faustpower2_f(fSlow3) + -1.0f));
		float fSlow7 = fSlow5 / fSlow3;
		float fSlow8 = fSlow7 - fSlow6;
		float fSlow9 = 1.0f / std::tan(fConst4 * float(fVslider2));
		float fSlow10 = 1.0f - fSlow9;
		float fSlow11 = 1.0f / (fSlow9 + 1.0f);
		float fSlow12 = float(fVslider3);
		float fSlow13 = std::exp(fConst2 / fSlow12) / fSlow1 + -1.0f;
		float fSlow14 = fSlow1 * (fSlow6 + (1.0f - fSlow7));
		float fSlow15 = fConst7 * float(fHslider0);
		float fSlow16 = float(fHslider1);
		float fSlow17 = fConst7 * float(fHslider2);
		float fSlow18 = 1.0f - fSlow16;
		float fSlow19 = fConst7 * float(fHslider3);
		float fSlow20 = float(fButton0);
		float fSlow21 = fSlow20 * (1.0f - fSlow20);
		float fSlow22 = fConst9 * float(fHslider4);
		float fSlow23 = float(fHslider5);
		float fSlow24 = fConst9 * float(fHslider6);
		float fSlow25 = float(fHslider7);
		float fSlow26 = 0.5f * fSlow20;
		int iSlow27 = int(std::min<float>(8192.0f, std::max<float>(0.0f, fConst10 * float(fVslider4))));
		float fSlow28 = std::exp(fConst13 / fSlow0);
		float fSlow29 = mydsp_faustpower2_f(fSlow28);
		float fSlow30 = 1.0f - fSlow29;
		float fSlow31 = 1.0f - fSlow29 * fSlow4;
		float fSlow32 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow31) / mydsp_faustpower2_f(fSlow30) + -1.0f));
		float fSlow33 = fSlow31 / fSlow30;
		float fSlow34 = fSlow33 - fSlow32;
		float fSlow35 = std::exp(fConst13 / fSlow12) / fSlow28 + -1.0f;
		float fSlow36 = fSlow28 * (fSlow32 + (1.0f - fSlow33));
		float fSlow37 = std::exp(fConst18 / fSlow0);
		float fSlow38 = mydsp_faustpower2_f(fSlow37);
		float fSlow39 = 1.0f - fSlow38;
		float fSlow40 = 1.0f - fSlow4 * fSlow38;
		float fSlow41 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow40) / mydsp_faustpower2_f(fSlow39) + -1.0f));
		float fSlow42 = fSlow40 / fSlow39;
		float fSlow43 = fSlow42 - fSlow41;
		float fSlow44 = std::exp(fConst18 / fSlow12) / fSlow37 + -1.0f;
		float fSlow45 = fSlow37 * (fSlow41 + (1.0f - fSlow42));
		float fSlow46 = std::exp(fConst23 / fSlow0);
		float fSlow47 = mydsp_faustpower2_f(fSlow46);
		float fSlow48 = 1.0f - fSlow47;
		float fSlow49 = 1.0f - fSlow4 * fSlow47;
		float fSlow50 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow49) / mydsp_faustpower2_f(fSlow48) + -1.0f));
		float fSlow51 = fSlow49 / fSlow48;
		float fSlow52 = fSlow51 - fSlow50;
		float fSlow53 = std::exp(fConst23 / fSlow12) / fSlow46 + -1.0f;
		float fSlow54 = fSlow46 * (fSlow50 + (1.0f - fSlow51));
		float fSlow55 = std::exp(fConst28 / fSlow0);
		float fSlow56 = mydsp_faustpower2_f(fSlow55);
		float fSlow57 = 1.0f - fSlow56;
		float fSlow58 = 1.0f - fSlow4 * fSlow56;
		float fSlow59 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow58) / mydsp_faustpower2_f(fSlow57) + -1.0f));
		float fSlow60 = fSlow58 / fSlow57;
		float fSlow61 = fSlow60 - fSlow59;
		float fSlow62 = std::exp(fConst28 / fSlow12) / fSlow55 + -1.0f;
		float fSlow63 = fSlow55 * (fSlow59 + (1.0f - fSlow60));
		float fSlow64 = std::exp(fConst33 / fSlow0);
		float fSlow65 = mydsp_faustpower2_f(fSlow64);
		float fSlow66 = 1.0f - fSlow65;
		float fSlow67 = 1.0f - fSlow4 * fSlow65;
		float fSlow68 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow67) / mydsp_faustpower2_f(fSlow66) + -1.0f));
		float fSlow69 = fSlow67 / fSlow66;
		float fSlow70 = fSlow69 - fSlow68;
		float fSlow71 = std::exp(fConst33 / fSlow12) / fSlow64 + -1.0f;
		float fSlow72 = fSlow64 * (fSlow68 + (1.0f - fSlow69));
		float fSlow73 = std::exp(fConst38 / fSlow0);
		float fSlow74 = mydsp_faustpower2_f(fSlow73);
		float fSlow75 = 1.0f - fSlow74;
		float fSlow76 = 1.0f - fSlow4 * fSlow74;
		float fSlow77 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow76) / mydsp_faustpower2_f(fSlow75) + -1.0f));
		float fSlow78 = fSlow76 / fSlow75;
		float fSlow79 = fSlow78 - fSlow77;
		float fSlow80 = std::exp(fConst38 / fSlow12) / fSlow73 + -1.0f;
		float fSlow81 = fSlow73 * (fSlow77 + (1.0f - fSlow78));
		float fSlow82 = std::exp(fConst43 / fSlow0);
		float fSlow83 = mydsp_faustpower2_f(fSlow82);
		float fSlow84 = 1.0f - fSlow83;
		float fSlow85 = 1.0f - fSlow4 * fSlow83;
		float fSlow86 = std::sqrt(std::max<float>(0.0f, mydsp_faustpower2_f(fSlow85) / mydsp_faustpower2_f(fSlow84) + -1.0f));
		float fSlow87 = fSlow85 / fSlow84;
		float fSlow88 = fSlow87 - fSlow86;
		float fSlow89 = std::exp(fConst43 / fSlow12) / fSlow82 + -1.0f;
		float fSlow90 = fSlow82 * (fSlow86 + (1.0f - fSlow87));
		float fSlow91 = std::pow(1e+01f, 0.05f * float(fVslider5));
		float fSlow92 = float(fVslider6);
		float fSlow93 = fConst3 * (fSlow92 / std::sqrt(std::max<float>(0.0f, fSlow91)));
		float fSlow94 = (1.0f - fSlow93) / (fSlow93 + 1.0f);
		float fSlow95 = 0.0f - std::cos(fConst3 * fSlow92) * (fSlow94 + 1.0f);
		float fSlow96 = std::pow(1e+01f, 0.05f * float(fVslider7));
		float fSlow97 = float(fVslider8);
		float fSlow98 = fConst3 * (fSlow97 / std::sqrt(std::max<float>(0.0f, fSlow96)));
		float fSlow99 = (1.0f - fSlow98) / (fSlow98 + 1.0f);
		float fSlow100 = 0.0f - std::cos(fConst3 * fSlow97) * (fSlow99 + 1.0f);
		float fSlow101 = fConst7 * float(fVslider9);
		float fSlow102 = 0.25f * fSlow20;
		float fSlow103 = fConst7 * std::pow(1e+01f, 0.05f * float(fVslider10));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iVec0[0] = 1;
			fRec11[0] = 0.0f - fSlow11 * (fSlow10 * fRec11[1] - (fRec4[1] + fRec4[2]));
			fRec10[0] = fSlow14 * (fRec4[1] + fSlow13 * fRec11[0]) + fSlow8 * fRec10[1];
			fVec1[IOTA0 & 16383] = 0.35355338f * fRec10[0] + 1e-20f;
			fRec12[0] = fSlow15 + fConst8 * fRec12[1];
			fRec13[0] = fSlow17 + fConst8 * fRec13[1];
			fRec14[0] = fSlow19 + fConst8 * fRec14[1];
			float fTemp0 = fSlow21 * (fSlow16 + (fRec14[0] - fSlow18 * fRec13[0])) + fSlow16 * fRec12[0];
			int iTemp1 = 1 - iVec0[1];
			float fTemp2 = ((iTemp1) ? 0.0f : fSlow22 + fRec16[1]);
			fRec16[0] = fTemp2 - std::floor(fTemp2);
			float fTemp3 = ((iTemp1) ? 0.0f : fSlow24 + fRec17[1]);
			fRec17[0] = fTemp3 - std::floor(fTemp3);
			float fTemp4 = fSlow25 * ftbl0mydspSIG0[std::max<int>(0, std::min<int>(int(65536.0f * fRec17[0]), 65535))] + fSlow23 * ftbl0mydspSIG0[std::max<int>(0, std::min<int>(int(65536.0f * fRec16[0]), 65535))];
			fVec3[IOTA0 & 16383] = fSlow26 * fTemp4 * fTemp0;
			float fTemp5 = 0.3f * fVec3[(IOTA0 - iSlow27) & 16383];
			float fTemp6 = fTemp5 + fVec1[(IOTA0 - iConst6) & 16383] - 0.6f * fRec8[1];
			fVec4[IOTA0 & 4095] = fTemp6;
			fRec8[0] = fVec4[(IOTA0 - iConst11) & 4095];
			float fRec9 = 0.6f * fTemp6;
			fRec21[0] = 0.0f - fSlow11 * (fSlow10 * fRec21[1] - (fRec0[1] + fRec0[2]));
			fRec20[0] = fSlow36 * (fRec0[1] + fSlow35 * fRec21[0]) + fSlow34 * fRec20[1];
			fVec5[IOTA0 & 16383] = 0.35355338f * fRec20[0] + 1e-20f;
			float fTemp7 = fVec5[(IOTA0 - iConst15) & 16383] + fTemp5 - 0.6f * fRec18[1];
			fVec6[IOTA0 & 2047] = fTemp7;
			fRec18[0] = fVec6[(IOTA0 - iConst16) & 2047];
			float fRec19 = 0.6f * fTemp7;
			float fTemp8 = fRec19 + fRec9;
			fRec25[0] = 0.0f - fSlow11 * (fSlow10 * fRec25[1] - (fRec2[1] + fRec2[2]));
			fRec24[0] = fSlow45 * (fRec2[1] + fSlow44 * fRec25[0]) + fSlow43 * fRec24[1];
			fVec7[IOTA0 & 16383] = 0.35355338f * fRec24[0] + 1e-20f;
			float fTemp9 = fVec7[(IOTA0 - iConst20) & 16383] - (fTemp5 + 0.6f * fRec22[1]);
			fVec8[IOTA0 & 4095] = fTemp9;
			fRec22[0] = fVec8[(IOTA0 - iConst21) & 4095];
			float fRec23 = 0.6f * fTemp9;
			fRec29[0] = 0.0f - fSlow11 * (fSlow10 * fRec29[1] - (fRec6[1] + fRec6[2]));
			fRec28[0] = fSlow54 * (fRec6[1] + fSlow53 * fRec29[0]) + fSlow52 * fRec28[1];
			fVec9[IOTA0 & 16383] = 0.35355338f * fRec28[0] + 1e-20f;
			float fTemp10 = fVec9[(IOTA0 - iConst25) & 16383] - (fTemp5 + 0.6f * fRec26[1]);
			fVec10[IOTA0 & 2047] = fTemp10;
			fRec26[0] = fVec10[(IOTA0 - iConst26) & 2047];
			float fRec27 = 0.6f * fTemp10;
			float fTemp11 = fRec27 + fRec23 + fTemp8;
			fRec33[0] = 0.0f - fSlow11 * (fSlow10 * fRec33[1] - (fRec1[1] + fRec1[2]));
			fRec32[0] = fSlow63 * (fRec1[1] + fSlow62 * fRec33[0]) + fSlow61 * fRec32[1];
			fVec11[IOTA0 & 32767] = 0.35355338f * fRec32[0] + 1e-20f;
			float fTemp12 = fVec11[(IOTA0 - iConst30) & 32767] + fTemp5 + 0.6f * fRec30[1];
			fVec12[IOTA0 & 4095] = fTemp12;
			fRec30[0] = fVec12[(IOTA0 - iConst31) & 4095];
			float fRec31 = 0.0f - 0.6f * fTemp12;
			fRec37[0] = 0.0f - fSlow11 * (fSlow10 * fRec37[1] - (fRec5[1] + fRec5[2]));
			fRec36[0] = fSlow72 * (fRec5[1] + fSlow71 * fRec37[0]) + fSlow70 * fRec36[1];
			fVec13[IOTA0 & 16383] = 0.35355338f * fRec36[0] + 1e-20f;
			float fTemp13 = fVec13[(IOTA0 - iConst35) & 16383] + fTemp5 + 0.6f * fRec34[1];
			fVec14[IOTA0 & 4095] = fTemp13;
			fRec34[0] = fVec14[(IOTA0 - iConst36) & 4095];
			float fRec35 = 0.0f - 0.6f * fTemp13;
			fRec41[0] = 0.0f - fSlow11 * (fSlow10 * fRec41[1] - (fRec3[1] + fRec3[2]));
			fRec40[0] = fSlow81 * (fRec3[1] + fSlow80 * fRec41[0]) + fSlow79 * fRec40[1];
			fVec15[IOTA0 & 32767] = 0.35355338f * fRec40[0] + 1e-20f;
			float fTemp14 = 0.6f * fRec38[1] + fVec15[(IOTA0 - iConst40) & 32767] - fTemp5;
			fVec16[IOTA0 & 4095] = fTemp14;
			fRec38[0] = fVec16[(IOTA0 - iConst41) & 4095];
			float fRec39 = 0.0f - 0.6f * fTemp14;
			fRec45[0] = 0.0f - fSlow11 * (fSlow10 * fRec45[1] - (fRec7[1] + fRec7[2]));
			fRec44[0] = fSlow90 * (fRec7[1] + fSlow89 * fRec45[0]) + fSlow88 * fRec44[1];
			fVec17[IOTA0 & 32767] = 0.35355338f * fRec44[0] + 1e-20f;
			float fTemp15 = 0.6f * fRec42[1] + fVec17[(IOTA0 - iConst45) & 32767] - fTemp5;
			fVec18[IOTA0 & 2047] = fTemp15;
			fRec42[0] = fVec18[(IOTA0 - iConst46) & 2047];
			float fRec43 = 0.0f - 0.6f * fTemp15;
			fRec0[0] = fRec42[1] + fRec38[1] + fRec34[1] + fRec30[1] + fRec26[1] + fRec22[1] + fRec8[1] + fRec18[1] + fRec43 + fRec39 + fRec35 + fRec31 + fTemp11;
			fRec1[0] = fRec26[1] + fRec22[1] + fRec8[1] + fRec18[1] + fTemp11 - (fRec42[1] + fRec38[1] + fRec34[1] + fRec30[1] + fRec43 + fRec39 + fRec31 + fRec35);
			float fTemp16 = fRec23 + fRec27;
			fRec2[0] = fRec34[1] + fRec30[1] + fRec8[1] + fRec18[1] + fRec35 + fRec31 + fTemp8 - (fRec42[1] + fRec38[1] + fRec26[1] + fRec22[1] + fRec43 + fRec39 + fTemp16);
			fRec3[0] = fRec42[1] + fRec38[1] + fRec8[1] + fRec18[1] + fRec43 + fRec39 + fTemp8 - (fRec34[1] + fRec30[1] + fRec26[1] + fRec22[1] + fRec35 + fRec31 + fTemp16);
			float fTemp17 = fRec9 + fRec27;
			float fTemp18 = fRec19 + fRec23;
			fRec4[0] = fRec38[1] + fRec30[1] + fRec22[1] + fRec18[1] + fRec39 + fRec31 + fTemp18 - (fRec42[1] + fRec34[1] + fRec26[1] + fRec8[1] + fRec43 + fRec35 + fTemp17);
			fRec5[0] = fRec42[1] + fRec34[1] + fRec22[1] + fRec18[1] + fRec43 + fRec35 + fTemp18 - (fRec38[1] + fRec30[1] + fRec26[1] + fRec8[1] + fRec39 + fRec31 + fTemp17);
			float fTemp19 = fRec9 + fRec23;
			float fTemp20 = fRec19 + fRec27;
			fRec6[0] = fRec42[1] + fRec30[1] + fRec26[1] + fRec18[1] + fRec43 + fRec31 + fTemp20 - (fRec38[1] + fRec34[1] + fRec22[1] + fRec8[1] + fRec39 + fRec35 + fTemp19);
			fRec7[0] = fRec38[1] + fRec34[1] + fRec26[1] + fRec18[1] + fRec39 + fRec35 + fTemp20 - (fRec42[1] + fRec30[1] + fRec22[1] + fRec8[1] + fRec43 + fRec31 + fTemp19);
			float fTemp21 = 0.37f * (fRec1[0] + fRec2[0]);
			float fTemp22 = fSlow95 * fRec46[1];
			fRec46[0] = fTemp21 - (fTemp22 + fSlow94 * fRec46[2]);
			float fTemp23 = fSlow94 * fRec46[0];
			float fTemp24 = 0.5f * (fTemp23 + fRec46[2] + fTemp21 + fTemp22 + fSlow91 * (fTemp23 + fTemp22 + fRec46[2] - fTemp21));
			float fTemp25 = fSlow100 * fRec47[1];
			fRec47[0] = fTemp24 - (fTemp25 + fSlow99 * fRec47[2]);
			float fTemp26 = fSlow99 * fRec47[0];
			fRec48[0] = fSlow101 + fConst8 * fRec48[1];
			float fTemp27 = fRec48[0] + 1.0f;
			float fTemp28 = 1.0f - 0.5f * fTemp27;
			float fTemp29 = fSlow102 * fTemp27 * fTemp4 * fTemp0;
			fRec49[0] = fSlow103 + fConst8 * fRec49[1];
			output0[i0] = FAUSTFLOAT(fRec49[0] * (fTemp29 + 0.5f * fTemp28 * (fTemp26 + fRec47[2] + fTemp24 + fTemp25 + fSlow96 * (fTemp26 + fTemp25 + fRec47[2] - fTemp24))));
			float fTemp30 = 0.37f * (fRec1[0] - fRec2[0]);
			float fTemp31 = fSlow95 * fRec50[1];
			fRec50[0] = fTemp30 - (fTemp31 + fSlow94 * fRec50[2]);
			float fTemp32 = fSlow94 * fRec50[0];
			float fTemp33 = 0.5f * (fTemp32 + fRec50[2] + fTemp30 + fTemp31 + fSlow91 * (fTemp32 + fTemp31 + fRec50[2] - fTemp30));
			float fTemp34 = fSlow100 * fRec51[1];
			fRec51[0] = fTemp33 - (fTemp34 + fSlow99 * fRec51[2]);
			float fTemp35 = fSlow99 * fRec51[0];
			output1[i0] = FAUSTFLOAT(fRec49[0] * (fTemp29 + 0.5f * fTemp28 * (fTemp35 + fRec51[2] + fTemp33 + fTemp34 + fSlow96 * (fTemp35 + fTemp34 + fRec51[2] - fTemp33))));
			iVec0[1] = iVec0[0];
			fRec11[1] = fRec11[0];
			fRec10[1] = fRec10[0];
			IOTA0 = IOTA0 + 1;
			fRec12[1] = fRec12[0];
			fRec13[1] = fRec13[0];
			fRec14[1] = fRec14[0];
			fRec16[1] = fRec16[0];
			fRec17[1] = fRec17[0];
			fRec8[1] = fRec8[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fRec18[1] = fRec18[0];
			fRec25[1] = fRec25[0];
			fRec24[1] = fRec24[0];
			fRec22[1] = fRec22[0];
			fRec29[1] = fRec29[0];
			fRec28[1] = fRec28[0];
			fRec26[1] = fRec26[0];
			fRec33[1] = fRec33[0];
			fRec32[1] = fRec32[0];
			fRec30[1] = fRec30[0];
			fRec37[1] = fRec37[0];
			fRec36[1] = fRec36[0];
			fRec34[1] = fRec34[0];
			fRec41[1] = fRec41[0];
			fRec40[1] = fRec40[0];
			fRec38[1] = fRec38[0];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fRec42[1] = fRec42[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec46[2] = fRec46[1];
			fRec46[1] = fRec46[0];
			fRec47[2] = fRec47[1];
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fRec49[1] = fRec49[0];
			fRec50[2] = fRec50[1];
			fRec50[1] = fRec50[0];
			fRec51[2] = fRec51[1];
			fRec51[1] = fRec51[0];
		}
	}

};

#endif
