//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface UISectionRowData : NSObject <NSCopying>
{
    BOOL _valid;
    float _headerHeight;
    float _maxHeaderTitleWidth;
    float _footerHeight;
    float _maxFooterTitleWidth;
    float _headerOffset;
    float _footerOffset;
    int _numRows;
    int _arrayLength;
    float *_rowHeights;
    float *_rowOffsets;
    float _sectionHeight;
    int _headerAlignment;
    int _footerAlignment;
    BOOL _sectionOffsetValid;
    float _sectionOffset;
    int _sectionRowOffset;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)rowForPoint:(struct CGPoint)arg1;
- (int)_rowForPoint:(struct CGPoint)arg1 beginningWithRow:(int)arg2 numberOfRows:(int)arg3;
- (int)sectionLocationForReorderedRow:(int)arg1;
- (int)sectionLocationForRow:(int)arg1;
- (void)deleteRowAtIndex:(int)arg1;
- (void)insertRowAtIndex:(int)arg1 inSection:(int)arg2 rowHeight:(float)arg3 tableViewRowData:(id)arg4;
- (void)refreshWithSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (float)_defaultSectionFooterHeightForSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (float)_defaultSectionHeaderHeightForSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (void)setHeight:(float)arg1 forRow:(int)arg2;
- (void)addOffset:(float)arg1 fromRow:(int)arg2;
- (float)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 detailText:(id)arg3 isHeader:(BOOL)arg4;
- (void)invalidateSectionOffset;
- (void)invalidate;
- (void)dealloc;

@end

