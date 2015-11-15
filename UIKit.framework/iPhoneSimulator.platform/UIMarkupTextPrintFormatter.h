//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPrintFormatter.h>

@class NSString, UIWebDocumentView, UIWebPaginationInfo;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter
{
    UIWebDocumentView *_webDocumentView;
    UIWebPaginationInfo *_paginationInfo;
    NSString *_markupText;
}

@property(copy, nonatomic) NSString *markupText; // @synthesize markupText=_markupText;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (long long)_recalcPageCount;
- (void)removeFromPrintPageRenderer;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMarkupText:(id)arg1;

@end

