//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl
{
    UITableViewCell *_cell;
    unsigned int _style:2;
    unsigned int _rotated:1;
    unsigned int _rotating:1;
    unsigned int _hiding:1;
    unsigned int _reserved:27;
}

+ (struct CGSize)defaultSize;
- (void)_multiselectColorChanged;
@property(nonatomic, getter=isHiding) BOOL hiding;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isRotating;
@property(nonatomic, getter=isRotated) BOOL rotated;
- (void)setRotated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2;

@end

