//
//  Point.h
//  Data_Structure
//
//  Created by 임원선 on 2019. 1. 29..
//  Copyright © 2019년 임원선. All rights reserved.
//

#ifndef Point_h
#define Point_h

typedef struct _point
{
    int xpos;
    int ypos;
} Point;

// Point 변수의 xpos, ypos 값 설정
void SetPointPos(Point * ppos, int xpos, int ypos);

// Point 변수의 xpos, ypos 정보 출력
void ShowPointPos(Point * ppos);

// 두 Point 변수의 비교
int PointComp(Point * pos1, Point * pos2);

#endif /* Point_h */
