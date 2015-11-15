//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_UISwitchInternalViewProtocol.h"

@class UIColor, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _UISwitchInternalViewNeueStyle1 : UIView <_UISwitchInternalViewProtocol>
{
    UIView *_switchWellView;
    UIView *_leftSwitchWellView;
    UIView *_switchWellContainerView;
    UIView *_leftSwitchWellContainerView;
    UIView *_switchWellImageViewContainer;
    UIImageView *_switchWellOffImageView;
    UIImageView *_switchWellOnImageView;
    UIImageView *_knobView;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    _Bool _on;
    _Bool _pressed;
    _Bool _isAlwaysAccessible;
    _Bool _useAlternateColor;
    _Bool _pressedIsHandledByGestureRecognizer;
    UIColor *_thumbTintColor;
    UIImage *_onImage;
    UIImage *_offImage;
}

@property(nonatomic) _Bool pressedIsHandledByGestureRecognizer; // @synthesize pressedIsHandledByGestureRecognizer=_pressedIsHandledByGestureRecognizer;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage=_offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage=_onImage;
@property(nonatomic) _Bool useAlternateColor; // @synthesize useAlternateColor=_useAlternateColor;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
- (void)_setPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3 shouldAnimateLabels:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_prepareForInteraction;
- (void)_cleanUpAfterAnimating;
- (void)setSendAction:(_Bool)arg1;
- (void)_setPressed:(_Bool)arg1;
- (void)_setPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setOn:(_Bool)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;
- (void)_setProgress:(double)arg1;
- (void)_setProgress:(double)arg1 animated:(_Bool)arg2 withDuration:(double)arg3 force:(_Bool)arg4 sendAction:(_Bool)arg5;
- (void)_accessibilitySettingChanged;
@property(nonatomic) _Bool isAlwaysAccessible;
- (_Bool)_shouldDrawAccessibly;
- (id)_effectiveOffImageTintColor;
- (id)_effectiveOnImageTintColor;
- (_Bool)_shouldUseLightTintOverColor:(id)arg1;
- (id)_accessibleOffImage;
- (id)_accessibleOnImage;
- (id)_effectiveOffImage;
- (id)_effectiveOnImage;
- (id)_effectiveThumbImage;
- (id)_effectiveOffTextColor;
- (id)_effectiveTintColor;
- (id)_defaultOnTintColor;
- (id)_effectiveOnTintColor;
- (id)_labelOpacityAnimation;
- (id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(_Bool)arg4;
- (id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2;
- (id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;
- (struct CGPoint)_onImagePosition;
- (struct CGPoint)_offImagePosition;
- (struct CGColor *)_wellColorOn:(_Bool)arg1;
- (double)_wellBorderWidthPressed:(_Bool)arg1 on:(_Bool)arg2;
- (struct CGPoint)_leftSwitchWellContainerPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (struct CGRect)_leftSwitchWellContainerBoundsOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (struct CGPoint)_switchWellPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (struct CGPoint)_switchWellContainerPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (struct CGRect)_switchWellContainerBoundsOn:(_Bool)arg1 pressed:(_Bool)arg2;
- (struct CGPoint)_knobPositionOn:(_Bool)arg1 pressed:(_Bool)arg2 forBounds:(struct CGRect)arg3;
- (struct CGRect)_knobBoundsPressed:(_Bool)arg1;
- (void)_transitionImagesToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_transitionWellViewToOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_transitionWellViewToPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_transitionKnobToOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_transitionKnobToPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_transitionKnobToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;
- (struct CGRect)_frameForLeftAlignmentOfView:(id)arg1;
- (id)_maskLayerForImageViews;
- (void)_orderSubviews;
- (void)_invalidateOnOffImages;
- (void)_invalidateKnob;
- (void)_invalidateWell;
- (void)_invalidateControl;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

