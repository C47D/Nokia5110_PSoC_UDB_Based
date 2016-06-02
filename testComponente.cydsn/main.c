#include <project.h>

int main()
{
    int i =0;
    CyGlobalIntEnable; 
    
    NOKIA5110_UDB_Init(back1);
    NOKIA5110_UDB_Contrast(0x39);
    
    NOKIA5110_UDB_Goto(3,0);
    NOKIA5110_UDB_BigStr("Cypress",DRAW_OR);
    NOKIA5110_UDB_Goto(3,2);
    NOKIA5110_UDB_Str("Nokia5110", DRAW_OR, Middle_Font);
    NOKIA5110_UDB_Goto(3,4);
    NOKIA5110_UDB_Str("Small Font",DRAW_OR, Small_Font);
    NOKIA5110_UDB_Goto(3,5);
    NOKIA5110_UDB_Str("Middle Font",DRAW_OR, Middle_Font);
    CyDelay(2000);
    
    NOKIA5110_UDB_SetBackground(back2);
    NOKIA5110_UDB_Clear();
    
    NOKIA5110_UDB_Goto(10,1);
    NOKIA5110_UDB_Str("OVER", DRAW_XOR, Middle_Font);
    NOKIA5110_UDB_Goto(10,2);
    NOKIA5110_UDB_Str("BACKGROUND", DRAW_XOR, Middle_Font);
    CyDelay(2000);
    
    NOKIA5110_UDB_SetBackground(back1);
    NOKIA5110_UDB_Clear();
    
    for(i=0;i<45;i++){
        NOKIA5110_UDB_HBargraph(1, 5, 50, i, DRAW_OR);
        CyDelay(10);
    }
    CyDelay(2000);
    
    NOKIA5110_UDB_Clear();
    
    for(i=0;i<25;i++){
        NOKIA5110_UDB_VBargraph(10, 2, 4, i, DRAW_OR);
        CyDelay(10);
    }
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
