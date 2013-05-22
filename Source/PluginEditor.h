/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#ifndef __PLUGINEDITOR_H_EA17EABC__
#define __PLUGINEDITOR_H_EA17EABC__

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class SoundAnalyserAudioProcessorEditor  : public AudioProcessorEditor, public ButtonListener
{
public:
    SoundAnalyserAudioProcessorEditor (SoundAnalyserAudioProcessor* ownerFilter);
    ~SoundAnalyserAudioProcessorEditor();

    //==============================================================================
    // This is just a standard Juce paint method...
    void paint (Graphics& g);
    
    void resized();
    
    void buttonClicked (Button* button);
    
    Slider testSlider;
    
    TextButton testButton;
};


#endif  // __PLUGINEDITOR_H_EA17EABC__
