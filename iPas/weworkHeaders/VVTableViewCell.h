//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSString, UIImageView;

@interface VVTableViewCell : UITableViewCell
{
    UIImageView *_notifyImageView;
    _Bool _hasAccessoryView;
    NSString *_titleStr;
    NSDictionary *_cellData;
}

@property(retain, nonatomic) NSDictionary *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(nonatomic) _Bool hasAccessoryView; // @synthesize hasAccessoryView=_hasAccessoryView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithData:(id)arg1 reuseIdentifier:(id)arg2;

@end
