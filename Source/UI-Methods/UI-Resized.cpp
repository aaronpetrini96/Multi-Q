
#include "../PluginEditor.h"

void MultiQAudioProcessorEditor::uiResized()
{
    auto leftButtonMargin = getWidth() * 0.3;
    auto topButtonMargin = getHeight() * 0.85;
    auto buttonWidth = getWidth() * 0.15;
    auto buttonHeight = buttonWidth * 0.5;
    
    graphicEQButton.setBounds(leftButtonMargin, topButtonMargin, buttonWidth, buttonHeight);
    paraEQButton.setBounds(graphicEQButton.getX() + graphicEQButton.getWidth(), topButtonMargin, buttonWidth, buttonHeight);
    tubeEQButton.setBounds(paraEQButton.getX() + paraEQButton.getWidth(), topButtonMargin, buttonWidth, buttonHeight);

    saveWindowSize();
}
