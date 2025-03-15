#include "../PluginEditor.h"

void MultiQAudioProcessorEditor::uiConstructor()
{
    initWindow();
    
//    Choice buttons
    addAndMakeVisible(graphicEQButton);
    graphicEQButton.setButtonText("Graphic");
    graphicEQButton.setRadioGroupId(1);
    
    addAndMakeVisible(paraEQButton);
    paraEQButton.setButtonText("Parametric");
    paraEQButton.setRadioGroupId(2);
    
    addAndMakeVisible(tubeEQButton);
    tubeEQButton.setButtonText("Tube");
    tubeEQButton.setRadioGroupId(3);
}
