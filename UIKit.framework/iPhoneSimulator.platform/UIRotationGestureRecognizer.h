//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer
{
    double _initialTouchDistance;
    double _initialTouchAngle;
    double _currentTouchAngle;
    int _currentRotationCount;
    double _lastTouchTime;
    float _velocity;
    float _previousVelocity;
    struct CGPoint _anchorPoint;
    id _transformAnalyzer;
    UITouch *_touches[2];
}

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) float velocity;
@property(nonatomic) float rotation;
- (struct CGPoint)anchorPoint;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

