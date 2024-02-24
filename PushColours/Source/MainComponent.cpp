#include "MainComponent.h"

juce::Colour colours[] =
{
    juce::Colour (0xFF000000 + 0),
    juce::Colour (0xFF000000 + 16728114),
    juce::Colour (0xFF000000 + 8389632),
    juce::Colour (0xFF000000 + 13188096),
    juce::Colour (0xFF000000 + 11280128),
    juce::Colour (0xFF000000 + 9195544),
    juce::Colour (0xFF000000 + 4790276),
    juce::Colour (0xFF000000 + 16440379),
    juce::Colour (0xFF000000 + 16762134),
    juce::Colour (0xFF000000 + 11992846),
    juce::Colour (0xFF000000 + 7995160),
    juce::Colour (0xFF000000 + 3457558),
    juce::Colour (0xFF000000 + 5212676),
    juce::Colour (0xFF000000 + 6487893),
    juce::Colour (0xFF000000 + 2719059),
    juce::Colour (0xFF000000 + 2530930),
    juce::Colour (0xFF000000 + 3255807),
    juce::Colour (0xFF000000 + 3564540),
    juce::Colour (0xFF000000 + 1717503),
    juce::Colour (0xFF000000 + 1838310),
    juce::Colour (0xFF000000 + 1391001),
    juce::Colour (0xFF000000 + 3749887),
    juce::Colour (0xFF000000 + 5710591),
    juce::Colour (0xFF000000 + 9907199),
    juce::Colour (0xFF000000 + 8724856),
    juce::Colour (0xFF000000 + 16715826),
    juce::Colour (0xFF000000 + 16722900),
    juce::Colour (0xFF000000 + 10892321),
    juce::Colour (0xFF000000 + 10049064),
    juce::Colour (0xFF000000 + 8873728),
    juce::Colour (0xFF000000 + 9470495),
    juce::Colour (0xFF000000 + 4884224),
    juce::Colour (0xFF000000 + 32530),
    juce::Colour (0xFF000000 + 1594290),
    juce::Colour (0xFF000000 + 6441901),
    juce::Colour (0xFF000000 + 7551591),
    juce::Colour (0xFF000000 + 16301231),
    juce::Colour (0xFF000000 + 16751478),
    juce::Colour (0xFF000000 + 16760671),
    juce::Colour (0xFF000000 + 14266225),
    juce::Colour (0xFF000000 + 16774272),
    juce::Colour (0xFF000000 + 12565097),
    juce::Colour (0xFF000000 + 12373128),
    juce::Colour (0xFF000000 + 11468697),
    juce::Colour (0xFF000000 + 8183199),
    juce::Colour (0xFF000000 + 9024637),
    juce::Colour (0xFF000000 + 8451071),
    juce::Colour (0xFF000000 + 8048380),
    juce::Colour (0xFF000000 + 6857171),
    juce::Colour (0xFF000000 + 8753090),
    juce::Colour (0xFF000000 + 12298994),
    juce::Colour (0xFF000000 + 13482980),
    juce::Colour (0xFF000000 + 15698864),
    juce::Colour (0xFF000000 + 8756620),
    juce::Colour (0xFF000000 + 7042414),
    juce::Colour (0xFF000000 + 8687771),
    juce::Colour (0xFF000000 + 6975605),
    juce::Colour (0xFF000000 + 8947101),
    juce::Colour (0xFF000000 + 7105141),
    juce::Colour (0xFF000000 + 10323356),
    juce::Colour (0xFF000000 + 7629428),
    juce::Colour (0xFF000000 + 10263941),
    juce::Colour (0xFF000000 + 7632234),
    juce::Colour (0xFF000000 + 10323076),
    juce::Colour (0xFF000000 + 7694954),
    juce::Colour (0xFF000000 + 6691092),
    juce::Colour (0xFF000000 + 2164742),
    juce::Colour (0xFF000000 + 4588288),
    juce::Colour (0xFF000000 + 2621440),
    juce::Colour (0xFF000000 + 6100736),
    juce::Colour (0xFF000000 + 2100480),
    juce::Colour (0xFF000000 + 4656128),
    juce::Colour (0xFF000000 + 1837056),
    juce::Colour (0xFF000000 + 3877652),
    juce::Colour (0xFF000000 + 1839882),
    juce::Colour (0xFF000000 + 2428421),
    juce::Colour (0xFF000000 + 853506),
    juce::Colour (0xFF000000 + 6576151),
    juce::Colour (0xFF000000 + 2104327),
    juce::Colour (0xFF000000 + 6704648),
    juce::Colour (0xFF000000 + 2169090),
    juce::Colour (0xFF000000 + 4744709),
    juce::Colour (0xFF000000 + 1515777),
    juce::Colour (0xFF000000 + 3171849),
    juce::Colour (0xFF000000 + 991491),
    juce::Colour (0xFF000000 + 1330440),
    juce::Colour (0xFF000000 + 399618),
    juce::Colour (0xFF000000 + 2045697),
    juce::Colour (0xFF000000 + 659712),
    juce::Colour (0xFF000000 + 2582050),
    juce::Colour (0xFF000000 + 794891),
    juce::Colour (0xFF000000 + 1326633),
    juce::Colour (0xFF000000 + 530704),
    juce::Colour (0xFF000000 + 19766),
    juce::Colour (0xFF000000 + 6158),
    juce::Colour (0xFF000000 + 1262950),
    juce::Colour (0xFF000000 + 398881),
    juce::Colour (0xFF000000 + 1386340),
    juce::Colour (0xFF000000 + 461856),
    juce::Colour (0xFF000000 + 660582),
    juce::Colour (0xFF000000 + 198177),
    juce::Colour (0xFF000000 + 722012),
    juce::Colour (0xFF000000 + 196893),
    juce::Colour (0xFF000000 + 662604),
    juce::Colour (0xFF000000 + 264990),
    juce::Colour (0xFF000000 + 1447526),
    juce::Colour (0xFF000000 + 460577),
    juce::Colour (0xFF000000 + 2231654),
    juce::Colour (0xFF000000 + 721953),
    juce::Colour (0xFF000000 + 3936614),
    juce::Colour (0xFF000000 + 1246497),
    juce::Colour (0xFF000000 + 3476784),
    juce::Colour (0xFF000000 + 1115151),
    juce::Colour (0xFF000000 + 6686228),
    juce::Colour (0xFF000000 + 2163206),
    juce::Colour (0xFF000000 + 6689108),
    juce::Colour (0xFF000000 + 2163995),
    juce::Colour (0xFF000000 + 0),
    juce::Colour (0xFF000000 + 5855577),
    juce::Colour (0xFF000000 + 1710618),
    juce::Colour (0xFF000000 + 16777215),
    juce::Colour (0xFF000000 + 5855577),
    juce::Colour (0xFF000000 + 13421772),
    juce::Colour (0xFF000000 + 4210752),
    juce::Colour (0xFF000000 + 1315860),
    juce::Colour (0xFF000000 + 255),
    juce::Colour (0xFF000000 + 65280),
    juce::Colour (0xFF000000 + 16711680),
};

//==============================================================================
MainComponent::MainComponent()
{
    auto dx = 80;
    setSize (16 * dx, 8 * dx);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    float w = getWidth() / 16.0f;
    float h = getHeight() / 8.0f;
    
    for (int i = 0; i < 128; i++)
    {
        auto x = (i % 16) * w;
        auto y = (i / 16) * h;
        
        g.setColour (colours[i]);
        g.fillRect (x, y, w, h);
        
        g.setColour (colours[i].contrasting());
        g.drawText (juce::String::formatted ("0x%.2X", i), x, y, w, h, juce::Justification::centred);
    }
}

void MainComponent::resized()
{
}
