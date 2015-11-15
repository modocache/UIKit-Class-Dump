//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIPeripheralHostLayer;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostView : UIView
{
    int _explicitLayoutCount;
}

+ (Class)layerClass;
- (void)removeFromSuperview;
- (void)resizeForKeyplaneSize:(struct CGSize)arg1;
- (BOOL)_shouldUseKeyWindowStack;
@property(readonly, nonatomic) UIPeripheralHostLayer *layer;
- (void)layoutSubviews;
- (void)endExplicitLayout;
- (void)beginExplicitLayout;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

