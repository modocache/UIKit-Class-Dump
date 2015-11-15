//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPrintFormatter.h>

@class NSString, UIColor, UIFont, UITextView, UIWebPaginationInfo;

@interface UISimpleTextPrintFormatter : UIPrintFormatter
{
    UITextView *_textView;
    UIWebPaginationInfo *_paginationInfo;
}

- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(int)arg2;
- (struct CGRect)rectForPageAtIndex:(int)arg1;
- (int)_recalcPageCount;
- (void)removeFromPrintPageRenderer;
@property(nonatomic) int textAlignment; // @dynamic textAlignment;
@property(retain, nonatomic) UIColor *color; // @dynamic color;
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1;

@end

