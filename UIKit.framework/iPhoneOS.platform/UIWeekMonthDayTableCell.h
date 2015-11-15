//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIDateTableCell.h>

@class NSDate, UILabel;

__attribute__((visibility("hidden")))
@interface UIWeekMonthDayTableCell : UIDateTableCell
{
    UILabel *_weekdayLabel;
    NSDate *_date;
    float _weekdayWidth;
    BOOL _weekdayLast;
}

- (void)layoutSubviews;
- (void)updateHighlightColors;
- (void)setWeekdayString:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)_weekdayLabelColor;
- (void)setWeekdayWidth:(float)arg1;
- (void)setWeekdayLast:(BOOL)arg1;
- (void)setDate:(id)arg1;
- (id)date;
- (void)dealloc;

@end

