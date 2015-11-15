//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSwipeGesture : UIGestureRecognizer
{
    double _maximumDuration;
    float _verticalScale;
    float _horizontalScale;
    float _minimumHorizontalMovement;
    float _maximumHorizontalMovement;
    float _minimumVerticalMovement;
    float _maximumVerticalMovement;
    double _startTime;
    int _numberOfFingers;
    NSMutableArray *_activeTouches;
    unsigned int _timerOn:1;
}

@property(nonatomic) float minimumVerticalMovement; // @synthesize minimumVerticalMovement=_minimumVerticalMovement;
@property(nonatomic) int numberOfFingers; // @synthesize numberOfFingers=_numberOfFingers;
- (void)setState:(int)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (int)overallState;
- (int)determineStateForTouch:(id)arg1 atTimeInterval:(double)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)mergeTouches:(id)arg1;
- (id)infoForTouch:(id)arg1;
- (void)tooManyFingers;
- (void)tooSlow:(id)arg1;
- (void)startTimer:(double)arg1;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (void)clearTimer;
- (float)maximumHorizontalMovementForTimeInterval:(double)arg1;
- (float)maximumVerticalMovementForTimeInterval:(double)arg1;
- (float)minimumHorizontalMovementForTimeInterval:(double)arg1;
- (float)minimumVerticalMovementForTimeInterval:(double)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

