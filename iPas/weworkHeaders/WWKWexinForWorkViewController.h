//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIPageControl, UIScrollView;

@interface WWKWexinForWorkViewController : UIViewController <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIPageControl *_pageCtrl;
    NSArray *_backgroundImageArray;
    NSArray *_titleArray;
    NSArray *_subTitleArray;
    NSArray *_pageArray;
    long long *_pageCount;
    NSMutableArray *_pageUIImageViewArray;
    double _navHeight;
    long long _lastPageNum;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)creatBackgroundView:(struct CGRect)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

