//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface UIDateLabel : UILabel
{
    BOOL _forceTimeOnly;
    double _date;
    struct __CFDate *_dateKey;
    BOOL _boldForAllLocales;
}

+ (id)defaultFont;
@property(nonatomic) BOOL boldForAllLocales; // @synthesize boldForAllLocales=_boldForAllLocales;
@property(nonatomic) BOOL forceTimeOnly; // @synthesize forceTimeOnly=_forceTimeOnly;
- (id)_dateLabelCache;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)timeDesignatorFont;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (void)setDate:(id)arg1;
- (void)sizeToFit;
- (id)timeDesignator;
- (id)font;
- (id)text;
- (void)_updateDateStrings;
- (void)setFontWithoutInvalidation:(id)arg1;
- (void)setFont:(id)arg1;
- (void)_didUpdateDate;
- (void)_invalidateDateKey;
- (struct __CFDate *)_dateKey;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

