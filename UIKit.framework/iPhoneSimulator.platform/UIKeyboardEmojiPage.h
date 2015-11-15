//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray, NSString, UIKeyboardEmojiView, UITouch;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPage : UIControl
{
    NSArray *_emoji;
    NSMutableArray *_emojiViews;
    int _numRows;
    int _numCols;
    int _numPages;
    struct CGPoint _emojiPadding;
    struct CGPoint _margin;
    struct CGSize _emojiSize;
    struct CGRect _keyActivationRect;
    NSString *_optionalText;
    id <UIKeyboardEmojiController> _controller;
    UITouch *_activeTouch;
    BOOL _needsLayout;
    UIKeyboardEmojiView *_touched;
    UIKeyboardEmojiView *_pendingDisplay;
    UIKeyboardEmojiView *_onDisplay;
}

+ (struct CGSize)emojiSize:(BOOL)arg1;
@property struct CGRect keyActivationRect; // @synthesize keyActivationRect=_keyActivationRect;
@property(retain) UIKeyboardEmojiView *onDisplay; // @synthesize onDisplay=_onDisplay;
@property(retain) UIKeyboardEmojiView *pendingDisplay; // @synthesize pendingDisplay=_pendingDisplay;
@property(retain) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
@property(retain) NSString *optionalText; // @synthesize optionalText=_optionalText;
@property id <UIKeyboardEmojiController> controller; // @synthesize controller=_controller;
@property(retain) NSArray *emoji; // @synthesize emoji=_emoji;
@property(retain) UIKeyboardEmojiView *touched; // @synthesize touched=_touched;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchCancelled:(id)arg1;
- (void)touchEnded:(id)arg1;
- (void)touchMoved:(id)arg1;
- (void)touchBegan:(id)arg1;
- (void)checkForStalePopup:(id)arg1;
- (void)removeDisplayedPopup:(id)arg1;
- (void)showPendingPopup:(id)arg1;
- (void)cancelPendingPopupChanges;
- (id)closestForPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)deactivatePopUps;
- (void)clearSubviews;
- (void)generateSubviews;
- (int)takeEmoji:(id)arg1 fromIndex:(int)arg2;
- (struct CGRect)rectForRow:(int)arg1 Col:(int)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateLayoutConstants;
- (struct CGPoint)padding:(BOOL)arg1;
- (struct CGPoint)margin:(BOOL)arg1;
- (unsigned char)colCount:(BOOL)arg1;
- (unsigned char)rowCount:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

