//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, UIPhysicalButtonsEvent, UITouchesEvent, UIView;

@interface UIGestureRecognizer : NSObject
{
    NSMutableArray *_targets;
    NSMutableArray *_delayedTouches;
    UIView *_view;
    UITouchesEvent *_updateEvent;
    UIPhysicalButtonsEvent *_updateButtonEvent;
    id <UIGestureRecognizerDelegate> _delegate;
    NSMutableSet *_friends;
    long long _state;
    struct {
        unsigned int delegateShouldBegin:1;
        unsigned int delegateCanPrevent:1;
        unsigned int delegateCanBePrevented:1;
        unsigned int delegateShouldRecognizeSimultaneously:1;
        unsigned int delegateShouldReceiveTouch:1;
        unsigned int delegateShouldRequireFailure:1;
        unsigned int delegateShouldBeRequiredToFail:1;
        unsigned int delegateFailed:1;
        unsigned int privateDelegateShouldBegin:1;
        unsigned int privateDelegateCanPrevent:1;
        unsigned int privateDelegateCanBePrevented:1;
        unsigned int privateDelegateShouldRecognizeSimultaneously:1;
        unsigned int privateDelegateShouldReceiveTouch:1;
        unsigned int privateDelegateShouldRequireFailure:1;
        unsigned int privateDelegateShouldBeRequiredToFail:1;
        unsigned int subclassShouldRequireFailure:1;
        unsigned int subclassShouldBeRequiredToFail:1;
        unsigned int privateSubclassShouldRequireFailure:1;
        unsigned int privateSubclassShouldBeRequiredToFail:1;
        unsigned int hasSubclassDynamicFailureRequirements:1;
        unsigned int hasDelegateDynamicFailureRequirements:1;
        unsigned int queriedFailureRequirements:1;
        unsigned int cancelsTouchesInView:1;
        unsigned int delaysTouchesBegan:1;
        unsigned int delaysTouchesEnded:1;
        unsigned int disabled:1;
        unsigned int dirty:1;
        unsigned int delivered:1;
        unsigned int deliveredEndedOrCancelled:1;
        unsigned int continuous:1;
        unsigned int requiresDelayedBegan:1;
        unsigned int willBeginAfterSatisfyingFailureRequirements:1;
        unsigned int requiresSystemGesturesToFail:1;
        unsigned int acceptsFailureRequirements:1;
    } _gestureFlags;
    NSMutableSet *_failureRequirements;
    NSMutableSet *_failureDependents;
    NSMutableSet *_dynamicFailureRequirements;
    NSMutableSet *_dynamicFailureDependents;
    id _failureMap;
}

+ (_Bool)_touchesBeganWasDelayedForTouch:(id)arg1;
@property(nonatomic) id <UIGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationInView:(id)arg1;
- (_Bool)_affectedByGesture:(id)arg1;
- (void)_invalidate;
- (id)description;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(_Bool)arg3;
- (void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4;
- (void)_appendSubclassDescription:(id)arg1;
- (id)_briefDescription;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (_Bool)_acceptsFailureRequirements;
- (void)_setAcceptsFailureRequiments:(_Bool)arg1;
- (void)_failureRequirementCompleted:(id)arg1 withEvent:(id)arg2;
- (void)removeFailureRequirement:(id)arg1;
- (void)requireOtherGestureToFail:(id)arg1;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)_addDynamicFailureRequirement:(id)arg1;
- (void)_removeFailureDependent:(id)arg1;
- (void)_addDynamicFailureDependent:(id)arg1;
- (void)_addFailureDependent:(id)arg1;
- (void)_clearReferencesToRelatedGesture:(id)arg1;
- (void)_exclude;
- (void)_cancelRecognition;
- (_Bool)_isDirty;
- (void)_setDirty;
- (_Bool)_isExcludedByGesture:(id)arg1;
- (_Bool)_delegateCanPreventGestureRecognizer:(id)arg1;
- (_Bool)_isFriendWithGesture:(id)arg1;
- (void)_addFriendGesture:(id)arg1;
- (_Bool)_shouldBegin;
- (_Bool)_delegateShouldReceiveTouch:(id)arg1;
- (long long)_depthFirstViewCompare:(id)arg1;
- (_Bool)_isRecognized;
- (void)_queueForResetIfFinished;
- (void)_resetIfFinished;
- (void)_updateGestureStateWithEvent:(id)arg1 buttonEvent:(id)arg2 afterDelay:(_Bool)arg3;
- (void)_delayedUpdateGesture;
- (_Bool)_requiresGestureRecognizerToFail:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1;
- (void)_updateGestureWithEvent:(id)arg1 buttonEvent:(id)arg2;
- (void)_enqueueDelayedTouchesToSend;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (void)_clearDelayedTouches;
- (void)_touchWasCancelled:(id)arg1;
- (void)_delayTouchesForEvent:(id)arg1;
- (void)_delayTouch:(id)arg1 forEvent:(id)arg2;
- (double)_distanceBetweenTouches:(id)arg1;
- (struct CGPoint)_centroidOfTouches:(id)arg1 excludingEnded:(_Bool)arg2;
- (id)_activeTouchesForEvent:(id)arg1;
- (void)_ignorePhysicalButton:(id)arg1 forEvent:(id)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (_Bool)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)_shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_hasTargets;
- (id)_delayedTouches;
- (void)_setFailureMap:(id)arg1;
- (id)_failureMap;
- (void)_setRequiresSystemGesturesToFail:(_Bool)arg1;
- (_Bool)_requiresSystemGesturesToFail;
- (void)setState:(long long)arg1;
@property(readonly, nonatomic) long long state;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) _Bool delaysTouchesEnded;
@property(nonatomic) _Bool delaysTouchesBegan;
@property(nonatomic) _Bool cancelsTouchesInView;
- (void)setView:(id)arg1;
@property(readonly, nonatomic) UIView *view;
- (void)_resetGestureRecognizer;
- (void)reset;
- (void)_clearUpdateTimer;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (void)_detach;

@end

