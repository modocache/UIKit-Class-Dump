//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSInvocation, UIButton;

__attribute__((visibility("hidden")))
@interface _UIStaticScrollBar : UIView
{
    UIButton *_upButton;
    UIButton *_downButton;
    NSInvocation *_invocation;
}

- (void)buttonTapped:(id)arg1;
- (void)setTarget:(id)arg1 forAction:(SEL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

