//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIBarPositioning.h"
#import "_UIBarPositioningInternal.h"
#import "_UIShadowedView.h"

@class NSArray, UIColor, UIImageView, _UIBackdropView;

@interface UIToolbar : UIView <_UIShadowedView, _UIBarPositioningInternal, UIBarPositioning>
{
    id _delegate;
    NSArray *_items;
    UIColor *_barTintColor;
    struct {
        unsigned int barStyle:3;
        unsigned int mode:2;
        unsigned int wasEnabled:1;
        unsigned int downButtonSentAction:1;
        unsigned int barTranslucence:3;
        unsigned int isLocked:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int hasCustomBackgroundView:1;
    } _toolbarFlags;
    struct __CFDictionary *_groups;
    NSArray *_buttonItems;
    long long _currentButtonGroup;
    long long _pressedTag;
    double _extraEdgeInsets;
    id _appearanceStorage;
    _UIBackdropView *_adaptiveBackdrop;
    UIImageView *_backgroundView;
    UIView *_shadowView;
    _Bool _isAdaptiveToolbarDisabled;
    _Bool _wantsLetterpressContent;
    long long _barPosition;
}

@property(readonly, nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property(nonatomic, setter=_setWantsLetterpressContent:) _Bool _wantsLetterpressContent; // @synthesize _wantsLetterpressContent;
@property(nonatomic, getter=_isAdaptiveToolbarDisabled, setter=_setAdaptiveToolbarDisabled:) _Bool _adaptiveToolbarDisabled; // @synthesize _adaptiveToolbarDisabled=_isAdaptiveToolbarDisabled;
@property(retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // @synthesize _shadowView;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)_setHidesShadow:(_Bool)arg1;
- (_Bool)_hidesShadow;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (unsigned long long)_subviewIndexAboveBackgroundView;
- (void)animateToolbarItemIndex:(unsigned long long)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (void)layoutSubviews;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)tintColorDidChange;
- (_Bool)isMinibar;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_didFinishHidingRetainedOldItems:(id)arg1;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)_setBarTintColor:(id)arg1 force:(_Bool)arg2;
- (id)_effectiveBarTintColor;
- (void)_updateBackgroundColor;
@property(copy, nonatomic) NSArray *items;
@property(nonatomic) id <UIToolbarDelegate> delegate;
- (int)mode;
- (void)setMode:(int)arg1;
@property(nonatomic) long long barStyle;
- (void)setBarStyle:(long long)arg1 force:(_Bool)arg2;
- (void)_updateOpacity;
- (void)_updateToolbarButtonsForInteractionTintColorChange;
- (double)extraEdgeInsets;
- (void)setExtraEdgeInsets:(double)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isTopBar_legacy;
- (long long)_barPosition;
- (void)_setBarPosition:(long long)arg1;

@end

