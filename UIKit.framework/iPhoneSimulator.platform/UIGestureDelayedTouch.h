//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIEvent, UITouch;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedTouch : NSObject <NSCopying>
{
    UITouch *_touch;
    UITouch *_stateWhenDelayed;
    UITouch *_stateWhenDelivered;
    UIEvent *_event;
    int _delayCount;
    BOOL _cloneForSecondDelivery;
}

@property BOOL cloneForSecondDelivery; // @synthesize cloneForSecondDelivery=_cloneForSecondDelivery;
@property(retain) UIEvent *event; // @synthesize event=_event;
@property(retain) UITouch *stateWhenDelivered; // @synthesize stateWhenDelivered=_stateWhenDelivered;
@property(retain) UITouch *stateWhenDelayed; // @synthesize stateWhenDelayed=_stateWhenDelayed;
@property(retain) UITouch *touch; // @synthesize touch=_touch;
- (id)description;
- (double)timestampForDelivery;
- (int)phaseForDelivery;
- (void)saveCurrentTouchState;
- (int)delayCount;
- (void)incrementDelayCount;
- (int)decrementDelayCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

