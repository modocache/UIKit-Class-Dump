//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface UISectionHeaderCell : UIView
{
    NSString *_title;
    struct {
        unsigned int style:1;
        unsigned int reserved:31;
    } _sectionHeaderCellFlags;
}

+ (id)defaultTitleFont;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (BOOL)isEqualToView:(id)arg1;
- (id)title;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTitle:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(struct CGRect)arg4;
- (void)setTitle:(id)arg1;
- (struct CGRect)_rectForTitle:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

