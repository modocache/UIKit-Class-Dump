//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@interface UIControl (Internal)
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)_cancelDelayedActions;
- (void)_sendDelayedActions;
- (void)_delayActions;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (void)_sendActionsForEvents:(int)arg1 withEvent:(id)arg2;
- (void)_sendActionsForEventMask:(int)arg1 withEvent:(struct __GSEvent *)arg2;
- (BOOL)_hasActionForEventMask:(int)arg1;
@end

