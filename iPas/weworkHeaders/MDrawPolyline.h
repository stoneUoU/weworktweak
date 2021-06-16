//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDrawTool.h"

@class NSMutableArray;

@interface MDrawPolyline : MDrawTool
{
    NSMutableArray *_points;
    struct CGPoint _movePoint;
    int _moveHandleIndex;
    _Bool _closePath;
}

- (void).cxx_destruct;
- (id)measureText;
- (void)drawContent:(struct CGContext *)arg1;
- (void)stopMoveHandle;
- (void)moveByOffset:(struct CGSize)arg1 endPoint:(struct CGPoint)arg2;
- (_Bool)testHitOnHandle:(struct CGPoint)arg1;
- (_Bool)hitOnHandle:(struct CGPoint)arg1;
- (void)drawUp:(struct CGPoint)arg1;
- (void)drawMove:(struct CGPoint)arg1;
- (void)drawDown:(struct CGPoint)arg1;
- (struct CGRect)frame;
- (id)initWithStartPoint:(struct CGPoint)arg1;
- (id)init;

@end

