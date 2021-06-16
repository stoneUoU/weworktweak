//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WWKEmotion;
@protocol WWKEmotionViewDelegate;

@interface WWKEmotionView : UIView
{
    WWKEmotion *_wwkemotion;
    id <WWKEmotionViewDelegate> _delegate;
    UIImageView *_imageView;
    UIView *_deleteMarkView;
}

@property(retain, nonatomic) UIView *deleteMarkView; // @synthesize deleteMarkView=_deleteMarkView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <WWKEmotionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WWKEmotion *wwkemotion; // @synthesize wwkemotion=_wwkemotion;
- (void).cxx_destruct;
- (void)onGestureTap;
- (void)markDelete;
- (id)getMarkDeleteView;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

