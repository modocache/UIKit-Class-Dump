//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardInputManager.h>

@interface UIKeyboardInputManager (ResultSpecializations)
- (BOOL)supportsNumberKeySelection;
- (id)accessibilityLabelForCandidate:(id)arg1;
- (unsigned int)maximumNumberOfColumnsForSortingMethod:(id)arg1 interfaceOrientation:(int)arg2 isInline:(BOOL)arg3 reducedWidth:(BOOL)arg4;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (id)titleForSortingMethod:(id)arg1;
- (id)sortingMethods;
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (BOOL)shouldSkipCandidateSelectionForPopupVariantString:(id)arg1;
- (BOOL)shouldShiftAfterChar:(unsigned short)arg1 withSpaces:(int)arg2 currentShift:(BOOL)arg3;
- (BOOL)isSentenceDelimiter:(unsigned short)arg1;
- (id)stringForDoubleKey:(id)arg1;
- (BOOL)suppressCompletionsForFieldEditor;
- (BOOL)suppliesCompletions;
- (id)searchStringForMarkedText;
- (unsigned int)defaultCandidateIndex;
- (id)defaultCandidate;
- (BOOL)suppressesCandidateDisplay;
- (BOOL)usesAutoDeleteWord;
- (void)setUsesCandidateSelection:(BOOL)arg1;
- (BOOL)usesCandidateSelection;
- (BOOL)supportsSetPhraseBoundary;
- (unsigned int)phraseBoundary;
- (void)setPhraseBoundary:(unsigned int)arg1;
- (id)remainingInput;
- (id)candidates;
- (id)autocorrection;
@end

