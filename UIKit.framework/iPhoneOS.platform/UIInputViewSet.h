//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIKeyboard, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject
{
    UIView *_inputView;
    UIView *_inputAccessoryView;
    _Bool _isKeyboard;
    _Bool _supportsSplit;
    _Bool _isSplit;
    double _splitHeightDelta;
    UIResponder *_restorableResponder;
}

+ (id)emptyInputSet;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
@property(nonatomic) UIResponder *restorableResponder; // @synthesize restorableResponder=_restorableResponder;
@property(nonatomic) double splitHeightDelta; // @synthesize splitHeightDelta=_splitHeightDelta;
@property(readonly, nonatomic) _Bool supportsSplit; // @synthesize supportsSplit=_supportsSplit;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)_setSplitProgress:(double)arg1;
- (void)_endSplitTransitionIfNeeded;
- (void)_beginSplitTransitionIfNeeded;
- (_Bool)_accessorySuppressesShadow;
- (id)_splittableInputAccessoryView;
- (id)_themableInputAccessoryView;
- (void)refreshPresentation;
- (struct CGRect)_rightInputViewSetFrame;
- (struct CGRect)_leftInputViewSetFrame;
@property(readonly, nonatomic) struct CGRect inputAccessoryViewBounds;
@property(readonly, nonatomic) struct CGRect inputViewBounds;
- (_Bool)_inputViewIsSplit;
@property(readonly, nonatomic) _Bool isSplit; // @synthesize isSplit=_isSplit;
@property(readonly, nonatomic) _Bool inputViewKeyboardCanSplit;
- (_Bool)_inputViewSetSupportsSplit;
- (_Bool)_inputAccessoryViewSupportsSplit;
- (_Bool)_inputViewSupportsSplit;
- (_Bool)__isCKAccessoryView;
- (_Bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;
- (long long)keyboardOrientation:(id)arg1;
- (id)description;
- (_Bool)isStrictSupersetOfViewSet:(id)arg1;
- (_Bool)containsResponder:(id)arg1;
- (_Bool)visible;
- (_Bool)_inputViewIsVisible;
- (_Bool)usesKeyClicks;
- (_Bool)isEqual:(id)arg1;
- (_Bool)containsView:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) UIView *layeringView;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 isKeyboard:(_Bool)arg3;
@property(readonly, nonatomic) UIKeyboard *keyboard;
- (_Bool)canAnimateToInputViewSet:(id)arg1;

@end

