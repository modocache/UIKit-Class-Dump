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

+ (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned int)arg2;
+ (struct CGSize)_shadowOffset;
+ (float)_shadowRadius;
+ (float)_shadowOpacity;
+ (struct UIEdgeInsets)_shadowInsets;
+ (struct UIEdgeInsets)contentViewInsets;
+ (float)cornerRadius;
+ (float)arrowBase;
+ (float)arrowHeight;
- (void)layoutSubviews;
- (void)setArrowDirection:(unsigned int)arg1;
- (unsigned int)arrowDirection;
- (void)setArrowOffset:(float)arg1;
- (float)arrowOffset;

@end

