//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPopoverBackgroundView.h>

__attribute__((visibility("hidden")))
@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView
{
}

+ (struct UIEdgeInsets)contentViewInsets;
+ (double)cornerRadius;
+ (double)arrowBase;
+ (double)arrowHeight;
- (void)layoutSubviews;
- (void)setArrowDirection:(unsigned long long)arg1;
- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)arg1;
- (double)arrowOffset;
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;
- (struct CGSize)_shadowOffset;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (struct UIEdgeInsets)_shadowInsets;

@end

