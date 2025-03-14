/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MultiQAudioProcessorEditor::MultiQAudioProcessorEditor (MultiQAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    uiConstructor();
}

MultiQAudioProcessorEditor::~MultiQAudioProcessorEditor()
{
}

//==============================================================================
void MultiQAudioProcessorEditor::paint (juce::Graphics& g)
{
    uiPaint(g);
}

void MultiQAudioProcessorEditor::resized()
{
    uiResized();
}
