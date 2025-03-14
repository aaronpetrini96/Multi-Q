
#pragma once
#include <JuceHeader.h>

class AA_Window : public juce::Component
{
public:
    
    AA_Window();
    ~AA_Window() override;
    
    void paint (juce::Graphics&) override;
    void resized() override;
    void setWidthAndHeight(float w, float h);
    
private:
    
    juce::Image background;
    
//    ===VARS===
    float width {0.f};
    float height {0.f};
    bool paintInitialized = false;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AA_Window)
    
};
