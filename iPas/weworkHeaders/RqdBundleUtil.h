//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RqdBundleUtil : NSObject
{
}

+ (_Bool)isATSAllowsArbitraryLoads;
+ (_Bool)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(_Bool)arg4 error:(id *)arg5;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (id)initWithCoder:(id)arg1 forObject:(id)arg2;
+ (void)encodeWithCoder:(id)arg1 forObject:(id)arg2;
+ (id)getBundleExe;
+ (id)getRDMCIBuildUUID;
+ (id)getBundleShortVer;
+ (id)getBundleVersion;
+ (id)getBundleName;
+ (id)getBundleId;
+ (id)createOpenUdid;
+ (id)getAnaOpenUdid;
+ (id)getQimei;

@end

