//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSNumber, NSString, UILabel;

@interface WWKDepartmentProfileController : UIViewController
{
    NSString *_departmentName;
    NSNumber *_userCount;
    UILabel *_nameTitle;
    UILabel *_userCountLabel;
    UILabel *_mainJobsLabel;
}

@property(nonatomic) __weak UILabel *mainJobsLabel; // @synthesize mainJobsLabel=_mainJobsLabel;
@property(nonatomic) __weak UILabel *userCountLabel; // @synthesize userCountLabel=_userCountLabel;
@property(nonatomic) __weak UILabel *nameTitle; // @synthesize nameTitle=_nameTitle;
@property(retain, nonatomic) NSNumber *userCount; // @synthesize userCount=_userCount;
@property(retain, nonatomic) NSString *departmentName; // @synthesize departmentName=_departmentName;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
