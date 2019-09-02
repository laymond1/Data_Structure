//
//  Point.c
//  Data_Structure
//
//  Created by 임원선 on 2019. 1. 29..
//  Copyright © 2019년 임원선. All rights reserved.
//

#include <stdio.h>
#include "Point.h"

void SetPointPos(Point * ppos, int xpos, int ypos)
{
    ppos->xpos = xpos;
    ppos->ypos = ypos;
}

void ShowPointPos(Point * ppos)
{
    printf("[%d, %d] \n", ppos->xpos, ppos->ypos);
}

int PointComp(Point * pos1, Point * pos2)
{
    if(pos1->xpos == pos2->xpos && pos1->ypos == pos2->ypos)
        return 0;
    else if(pos1->xpos == pos2->xpos)
        return 1;
    else if(pos1->ypos == pos2->ypos)
        return 2;
    else
        return -1;
}
