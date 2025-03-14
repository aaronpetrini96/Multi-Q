#include "../PluginEditor.h"

void MultiQAudioProcessorEditor::uiPaint(juce::Graphics& g)
{
//    auto width = getWidth();
//    auto height = getHeight();
//    auto leftMargin = width * 0.05;
//    auto topMargin = height * 0.2;
//    
//    juce::Rectangle<float> prePanel;
//    prePanel.setBounds(leftMargin, topMargin, width * 0.24f, height * 0.f);
//    g.setColour(juce::Colours::black.brighter(0.1));
//    g.fillRect(prePanel);
    auto background = juce::ImageCache::getFromMemory(BinaryData::back_png, BinaryData::back_pngSize);
    g.drawImageWithin(background, 0, 0, getWidth(), getHeight(), juce::RectanglePlacement::stretchToFit);
}
