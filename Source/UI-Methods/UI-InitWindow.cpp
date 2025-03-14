#include "../PluginEditor.h"

void MultiQAudioProcessorEditor::initWindow()
{
    juce::Rectangle<int> r = juce::Desktop::getInstance().getDisplays().getPrimaryDisplay()->userArea;
    
    int x = r.getWidth();
    
    auto width = x/2.0;
    auto height = width / 2.0;
    
    AudioProcessorEditor::setResizable(true, true);
    AudioProcessorEditor::setResizeLimits(width * 0.75, height * 0.75, width * 1.25, height * 1.25);
    AudioProcessorEditor::getConstrainer()->setFixedAspectRatio(2.0);
    
    if (audioProcessor.windowWidth != 0.0) {
        setSize(audioProcessor.windowWidth, audioProcessor.windowHeight);
    } else {
        setSize(width, height);
    }
    
    constructorFinished = true;
}
