//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIKBScreenTraits, UIKeyboardTaskQueue, UITextInputTraits, UITouch;

@interface UIKeyboardLayout : UIView
{
    UITextInputTraits *_inputTraits;
    UIKBScreenTraits *_screenTraits;
    NSMutableArray *_uncommittedTouches;
    UITouch *_activeTouch;
    UITouch *_shiftKeyTouch;
    UIKeyboardTaskQueue *_taskQueue;
}

@property(retain, nonatomic) UITouch *shiftKeyTouch; // @synthesize shiftKeyTouch=_shiftKeyTouch;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint)arg2 shouldTypeVariants:(_Bool)arg3 baseKeyForVariants:(_Bool)arg4;
- (id)simulateTouch:(struct CGPoint)arg1;
- (void)changeToKeyplane:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)baseKeyForString:(id)arg1;
- (id)currentKeyplane;
- (_Bool)shouldFadeToLayout;
- (_Bool)shouldFadeFromLayout;
- (void)fadeWithInvocation:(id)arg1;
- (_Bool)acceptsDirectionInput;
- (SEL)handlerForNotification:(id)arg1;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
- (struct CGSize)dragGestureSize;
- (double)flickDistance;
- (double)hitBuffer;
- (void)physicalKeyUpWithEvent:(id)arg1;
- (void)physicalKeyDownWithEvent:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)canForceTouchCommit:(id)arg1;
- (void)commitTouches:(id)arg1 executionContext:(id)arg2;
- (void)forceUpdatesForCommittedTouch;
- (void)commitTouches:(id)arg1;
- (id)touchesToCommitBeforeTouch:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)clearShiftIfNecessaryForEndedTouch:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)touchCancelled:(id)arg1;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (void)didCommitTouch:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (void)touchDragged:(id)arg1;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (void)touchDown:(id)arg1;
- (_Bool)canProduceString:(id)arg1;
- (_Bool)shouldShowIndicator;
- (id)activationIndicatorView;
- (void)deactivateActiveKeysClearingTouchInfo:(_Bool)arg1 clearingDimming:(_Bool)arg2;
- (void)setReturnKeyEnabled:(_Bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLayoutTag:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)updateBackgroundCorners;
- (_Bool)canMultitap;
- (_Bool)hasAccentKey;
- (_Bool)hasCandidateKeys;
- (id)candidateList;
- (_Bool)performSpaceAction;
- (_Bool)performReturnAction;
- (void)didClearInput;
- (void)longPressAction;
- (_Bool)isShiftKeyPlaneChooser;
- (_Bool)isShiftKeyBeingHeld;
- (void)setAutoshift:(_Bool)arg1;
- (void)setShift:(_Bool)arg1;
- (_Bool)isAlphabeticPlane;
- (_Bool)ignoresShiftState;
- (_Bool)usesAutoShift;
- (void)updateLocalizedKeys:(_Bool)arg1;
- (void)deactivateActiveKeys;
- (void)clearUnusedObjects:(_Bool)arg1;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
@property(readonly, nonatomic) long long orientation;
@property(retain, nonatomic) UIKeyboardTaskQueue *taskQueue;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addWipeRecognizer;
- (void)wipeGestureRecognized:(id)arg1;

@end

