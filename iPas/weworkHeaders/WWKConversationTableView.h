//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@protocol WWKConversationTableViewDelegate;

@interface WWKConversationTableView : UITableView
{
    id <WWKConversationTableViewDelegate> _touchDelegate;
}

@property(nonatomic) __weak id <WWKConversationTableViewDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void).cxx_destruct;
- (id)padding;
- (void)updateContentSize;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;

@end

