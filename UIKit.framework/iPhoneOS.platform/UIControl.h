//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface UIControl : UIView
{
    NSMutableArray *_targetActions;
    struct CGPoint _previousPoint;
    double _downTime;
    struct {
        unsigned int disabled:1;
        unsigned int tracking:1;
        unsigned int touchInside:1;
        unsigned int touchDragged:1;
        unsigned int requiresDisplayOnTracking:1;
        unsigned int highlighted:1;
        unsigned int dontHighlightOnTouchDown:1;
        unsigned int delayActions:1;
        unsigned int allowActionsToQueue:1;
        unsigned int pendingUnhighlight:1;
        unsigned int selected:1;
        unsigned int verticalAlignment:2;
        unsigned int horizontalAlignment:2;
        unsigned int wasLastHighlightSuccessful:1;
        unsigned int touchHasHighlighted:1;
    } _controlFlags;
}

- (void)_sendDelayedActions:(_Bool)arg1;
- (void)_unhighlight;
- (void)setTracking:(_Bool)arg1;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (_Bool)hasOneOrMoreTargets;
- (_Bool)requiresDisplayOnTracking;
- (void)setRequiresDisplayOnTracking:(_Bool)arg1;
- (_Bool)touchDragged;
- (_Bool)shouldTrack;
- (_Bool)_touchHasHighlighted;
- (void)_setTouchHasHighlighted:(_Bool)arg1;
- (_Bool)_wasLastHighlightSuccessful;
- (void)_setLastHighlightSuccessful:(_Bool)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_cancelDelayedActions;
- (void)_sendDelayedActions;
- (void)_delayActions;
- (void)_setHighlightOnMouseDown:(_Bool)arg1;
- (void)_sendActionsForEvents:(int)arg1 withEvent:(id)arg2;
- (_Bool)_hasActionForEventMask:(int)arg1;
- (double)_highlightCornerRadius;
- (struct CGRect)_clippedHighlightBounds;
- (_Bool)canBecomeFirstResponder;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2;
- (unsigned long long)allControlEvents;
- (id)allTargets;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic, getter=isSelected) _Bool selected; // @dynamic selected;
@property(nonatomic) long long contentHorizontalAlignment; // @dynamic contentHorizontalAlignment;
@property(nonatomic) long long contentVerticalAlignment; // @dynamic contentVerticalAlignment;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @dynamic highlighted;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)cancelTouchTracking;
- (_Bool)cancelMouseTracking;
@property(readonly, nonatomic, getter=isTouchInside) _Bool touchInside; // @dynamic touchInside;
@property(readonly, nonatomic) unsigned long long state; // @dynamic state;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking; // @dynamic tracking;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

