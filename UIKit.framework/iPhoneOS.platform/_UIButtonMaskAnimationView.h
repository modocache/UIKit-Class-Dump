//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface _UIButtonMaskAnimationView : UIView
{
    UIButton *_delegate;
}

@property(nonatomic) UIButton *delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end

