//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface FMOCRCameraCoverView : UIView
{
    _Bool _useShadowMode;
    NSArray *_currentPoints;
    NSArray *_moveDistance;
    long long _adjustTime;
    double _curShadowBlackAlpha;
}

@property(nonatomic) double curShadowBlackAlpha; // @synthesize curShadowBlackAlpha=_curShadowBlackAlpha;
@property(nonatomic) long long adjustTime; // @synthesize adjustTime=_adjustTime;
@property(retain, nonatomic) NSArray *moveDistance; // @synthesize moveDistance=_moveDistance;
@property(nonatomic) _Bool useShadowMode; // @synthesize useShadowMode=_useShadowMode;
@property(retain) NSArray *currentPoints; // @synthesize currentPoints=_currentPoints;
- (void).cxx_destruct;
- (void)reset;
- (void)drawWithPoints:(id)arg1 size:(struct CGSize)arg2;
- (id)init;
- (void)p_drawUseCommonCGContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)p_drawUseBezierPathWithContext:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)p_doInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
