//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCountView : UILabel
{
    NSString *_countString;
    int _count;
}

- (long long)count;
- (void)setCount:(long long)arg1;
- (void)setCountString:(id)arg1 withCount:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withCountString:(id)arg2 withCount:(long long)arg3;

@end

