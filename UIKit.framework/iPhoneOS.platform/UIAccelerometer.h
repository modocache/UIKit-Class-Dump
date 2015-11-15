//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIAccelerometer : NSObject
{
    double _updateInterval;
    id <UIAccelerometerDelegate> _delegate;
    struct {
        unsigned int delegateDidAccelerate:1;
        unsigned int reserved:31;
    } _accelerometerFlags;
}

+ (id)sharedAccelerometer;
@property(nonatomic) id <UIAccelerometerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
- (void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;
- (id)init;

@end

