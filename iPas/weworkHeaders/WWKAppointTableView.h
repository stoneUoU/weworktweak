//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@protocol WWKAppointTableViewDelegage;

@interface WWKAppointTableView : UITableView
{
    id <WWKAppointTableViewDelegage> _a_delegate;
}

@property(nonatomic) __weak id <WWKAppointTableViewDelegage> a_delegate; // @synthesize a_delegate=_a_delegate;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

