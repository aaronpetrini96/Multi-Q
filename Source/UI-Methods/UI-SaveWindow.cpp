#include "../PluginEditor.h"

void MultiQAudioProcessorEditor::saveWindowSize()
{
    audioProcessor.variableTree.setProperty("width", getWidth(), nullptr);
    audioProcessor.variableTree.setProperty("height", getHeight(), nullptr);
    
    if (constructorFinished)
    {
        audioProcessor.windowWidth = getWidth();
        audioProcessor.windowHeight = getHeight();
    }
}
