//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QAnnotation-Protocol.h"

@protocol QOverlay <QAnnotation>
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
@end

