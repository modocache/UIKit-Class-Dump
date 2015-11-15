//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

@interface UIResponder (Internal)
- (void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3;
- (void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3 index:(unsigned int)arg4;
- (BOOL)_promoteDeepestDefaultFirstResponder;
- (id)_deepestDefaultFirstResponderMatching:(CDUnknownBlockType)arg1;
- (id)_deepestDefaultFirstResponder;
- (BOOL)_isSettingFirstResponder;
- (void)_setIsSettingFirstResponder:(BOOL)arg1;
- (BOOL)_isTransitioningFromView:(id)arg1;
- (void)_windowResignedKey;
- (void)_windowBecameKey;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseNextFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;
- (id)_nextFirstResponderIfAllowed;
- (id)nextFirstResponder;
- (id)defaultFirstResponder;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (BOOL)_isPinningInputViews;
- (void)_endPinningInputViews;
- (void)_beginPinningInputViews;
- (void)_becomeFirstResponderAndMakeVisible;
- (void)_resignFirstResponder;
- (void)_becomeFirstResponder;
- (id)_keyboardResponder;
- (BOOL)_requiresKeyboardResetOnReload;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (id)_targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlMouseDragged:(struct __GSEvent *)arg1;
- (void)_controlMouseUp:(struct __GSEvent *)arg1;
- (void)_controlMouseDown:(struct __GSEvent *)arg1;

// Remaining properties
@property(readonly, nonatomic) UIResponder *_editingDelegate;
@property(readonly, nonatomic) UIResponder *_responderForEditing;
@end

