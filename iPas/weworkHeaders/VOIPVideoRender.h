//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAGLView_v2, LView;

@interface VOIPVideoRender : NSObject
{
    EAGLView_v2 *glview;
    LView *lview;
    _Bool _mHasSuperView;
}

@property(nonatomic) _Bool mHasSuperView; // @synthesize mHasSuperView=_mHasSuperView;
- (void).cxx_destruct;
- (id)getGLView;
- (id)getLView;
- (void)randerDefaultView:(id)arg1;
- (void)switchLocalView:(_Bool)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 scaleMode:(int)arg4;
- (void)stopRender;
- (void)restartRender;
- (void)transformFrontImage;
- (void)transformBackImage;
- (void)addSingleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (void)changeParentView:(id)arg1;
- (id)initWithView:(id)arg1 UseELGS2:(_Bool)arg2 Layer:(id)arg3;

@end

