# PSoC Nokia5110 Custom Component

Custom Component for Nokia5110 displays, this component is based on SPI peripheral, this is a UDB based SPI on PSoC4 and PSoC 5LP devices.

Internal driver of the Nokia5110 display works at 4MHz so SPI must work at that freq. aswell.

## Files inside the component:

### x_Display.h

Contain the function declarations and also an important define, DRAW_OVER_BACKGROUND, this define enable the capability of draw over a background, if you don't need it you can disable it by #undef DRAW_OVER_BACKGROUND on the specific region indicated by the comments.

### x_Display.c

Source code of the implementation, most of it taked from an old PSoC 1 AppNote [AN2152](http://www.cypress.com/documentation/application-notes/an2152-psoc-1-graphics-lcd-and-psoc-interface).


Improvements are welcome.

PSoC Rocks!