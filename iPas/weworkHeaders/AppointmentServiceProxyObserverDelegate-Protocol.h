//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol AppointmentServiceProxyObserverDelegate <NSObject>

@optional
- (void)OnNotifyChangeAppointment:(const vector_003b2738 *)arg1;
- (void)OnNotifyUpdateAppointment:(const vector_0d9de00b *)arg1;
- (void)OnNotifyAppendAppointment:(const vector_0d9de00b *)arg1;
- (void)onNotifySyncStateChanged:(_Bool)arg1;
@end

