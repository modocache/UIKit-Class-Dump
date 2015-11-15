//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _UIAlertManager : NSObject
{
}

+ (void)sizeAlertWindowForCurrentOrientation;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1 deferDisplay:(BOOL)arg2;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1;
+ (void)tellSpringboardHidingAlert:(id)arg1 animated:(BOOL)arg2;
+ (void)tellSpringboardShowingAlert:(id)arg1 animated:(BOOL)arg2;
+ (BOOL)stackContainsAlert:(id)arg1;
+ (void)removeFromStack:(id)arg1;
+ (void)addToStack:(id)arg1 dontDimBackground:(BOOL)arg2;
+ (void)reorientAlertWindowTo:(int)arg1 animated:(BOOL)arg2 keyboard:(id)arg3;
+ (void)applyClientWindowTransform:(struct CGAffineTransform)arg1;
+ (void)applyInternalWindowTransform:(struct CGAffineTransform)arg1;
+ (void)_applyAlertTransforms;
+ (struct CGAffineTransform)calculatedAlertTransform;
+ (struct CGAffineTransform)_alertTranslationForInterfaceOrientation:(int)arg1 andTranslation:(float)arg2;
+ (void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
+ (void)noteOrientationChangingTo:(int)arg1;
+ (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;
+ (id)visibleAlert;
+ (id)topMostAlert;
+ (BOOL)cancelAlertsAnimated:(BOOL)arg1;
+ (BOOL)cancelTopMostAlertAnimated:(BOOL)arg1;
+ (BOOL)hideTopMostAlertAnimated:(BOOL)arg1;
+ (void)showTopmostMiniAlert;
+ (void)hideAlertsForTermination;
+ (void)hideTopmostMiniAlert:(int)arg1;
+ (void)initialize;

@end

