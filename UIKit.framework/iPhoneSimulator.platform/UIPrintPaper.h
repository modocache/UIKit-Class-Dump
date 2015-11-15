//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIPrintPaper : NSObject
{
    int _paperOrientation;
    id _internal;
}

+ (id)_defaultPaperForOutputType:(long long)arg1;
+ (id)_defaultPaperListForOutputType:(long long)arg1;
+ (id)_defaultPKPaperForOuptutType:(long long)arg1;
+ (id)_paperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2;
+ (id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 forContentType:(long long)arg3 contentSize:(struct CGSize)arg4;
+ (id)bestPaperForPageSize:(struct CGSize)arg1 withPapersFromArray:(id)arg2;
- (int)_paperOrientation;
- (void)_setPaperOrientation:(int)arg1;
- (id)_localizedMediaTypeName;
- (id)_localizedName;
- (id)description;
- (id)_pkPaper;
- (struct CGRect)_printableRectForDuplex:(_Bool)arg1;
@property(readonly) struct CGRect printableRect;
@property(readonly) struct CGSize paperSize;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)_updatePKPaper:(id)arg1;
- (id)_initWithPrintKitPaper:(id)arg1;
- (struct CGRect)printRect;

@end

