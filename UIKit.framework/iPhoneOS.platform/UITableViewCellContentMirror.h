//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface UITableViewCellContentMirror : UIView
{
    unsigned int _selected:1;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)cell;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isSelected) _Bool selected;

@end

