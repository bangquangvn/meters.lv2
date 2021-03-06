// generated by lv2ttl2c from
// http://gareus.org/oss/lv2/meters#phasewheel

extern const LV2_Descriptor* lv2_descriptor(uint32_t index);
extern const LV2UI_Descriptor* lv2ui_phasewheel(uint32_t index);

static const RtkLv2Description _plugin_phasewheel = {
	&lv2_descriptor,
	&lv2ui_phasewheel
	, 23 // uint32_t dsp_descriptor_id
	, 0 // uint32_t gui_descriptor_id
	, "Phase/Frequency Wheel" // const char *plugin_human_id
	, (const struct LV2Port[13])
	{
		{ "control", ATOM_IN, nan, nan, nan, "GUI to plugin communication"},
		{ "notify", ATOM_OUT, nan, nan, nan, "Plugin to GUI communication"},
		{ "in1", AUDIO_IN, nan, nan, nan, "Channel 1 input"},
		{ "out1", AUDIO_OUT, nan, nan, nan, "signal pass-thru"},
		{ "in2", AUDIO_IN, nan, nan, nan, "Channel 2 input"},
		{ "out2", AUDIO_OUT, nan, nan, nan, "signal pass-thru"},
		{ "phase", CONTROL_OUT, nan, -1.000000, 1.000000, "Stereo Phase Correlation (all bands)"},
		{ "gain", CONTROL_IN, 20.000000, -40.000000, 40.000000, "Display Signal Level Gain."},
		{ "cutoff", CONTROL_IN, -50.000000, -80.000000, -10.000000, "Display Signal Cutoff Level (relative to 0dB). Signals below this level will not be visualized."},
		{ "fftsize", CONTROL_IN, 2048.000000, 128.000000, 16384.000000, "Number of audio-samples to process. Large values increase accuracy (particular for low frequencies) as well as latency."},
		{ "band", CONTROL_IN, 1.000000, 0.000000, 1.000000, "Group data by frequency bands. Depending on FFT-size, 6 or 12 bands per octave are used. This allows for 1/frequency (pink noise) signal level normalization. It also speeds up visualization for large FFT sizes and decreases CPU/GPU usage due to visualization."},
		{ "normalize", CONTROL_IN, 0.000000, 0.000000, 1.000000, "Auto-gain. Normalize signal level, set gain to detected (per band) peak signal level."},
		{ "persistence", CONTROL_IN, 33.000000, 0.000000, 100.000000, "Screen persistence (fade out speed). 0: no persistence, 100: permanent. Values above ~66 result in a permanent shadow."},
	}
	, 13 // uint32_t nports_total
	, 2 // uint32_t nports_audio_in
	, 2 // uint32_t nports_audio_out
	, 0 // uint32_t nports_midi_in
	, 0 // uint32_t nports_midi_out
	, 1 // uint32_t nports_atom_in
	, 1 // uint32_t nports_atom_out
	, 7 // uint32_t nports_ctrl
	, 6 // uint32_t nports_ctrl_in
	, 1 // uint32_t nports_ctrl_out
	, 65888 // uint32_t min_atom_bufsiz
	, false // bool send_time_info
};

#ifdef X42_PLUGIN_STRUCT
#undef X42_PLUGIN_STRUCT
#endif
#define X42_PLUGIN_STRUCT _plugin_phasewheel
