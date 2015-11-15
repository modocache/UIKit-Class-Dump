//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSArray, NSMutableSet;

@interface UILongPressGestureRecognizer : UIGestureRecognizer
{
    NSArray *_touches;
    NSMutableSet *_activeTouches;
    unsigned long long _numberOfTouchesRequired;
    double _minimumPressDuration;
    double _allowableMovement;
    struct CGPoint _startPointScreen;
    id _enoughTimeElapsed;
    id _tooMuchTimeElapsed;
    id _imp;
    unsigned int _gotTouchEnd:1;
    unsigned int _gotTooMany:1;
    unsigned int _gotEnoughTaps:1;
    unsigned int _cancelPastAllowableMovement:1;
    long long _buttonType;
}

@property(nonatomic, setter=_setButtonType:) long long _buttonType; // @synthesize _buttonType;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double delay; // @synthesize delay=_minimumPressDuration;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(readonly, nonatomic) NSArray *touches; // @synthesize touches=_touches;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationInView:(id)arg1;
- (double)_touchSloppinessFactor;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (_Bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) struct CGPoint startPoint;
- (struct CGPoint)centroidScreen;
@property(readonly, nonatomic) struct CGPoint centroid;
- (void)_interactionsEndedWithValidTouches:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_startTapFinishedTimer;
- (void)startTimer;
- (void)clearTimer;
- (void)tooMuchElapsed:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)setView:(id)arg1;
- (void)setTouches:(id)arg1;
@property(nonatomic) _Bool cancelPastAllowableMovement;
@property(nonatomic) double minimumPressDuration;
@property(nonatomic) unsigned long long numberOfTapsRequired;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

