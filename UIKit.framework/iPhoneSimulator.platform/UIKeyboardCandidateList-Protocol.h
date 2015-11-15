//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TIKeyboardBehaviors, TIKeyboardCandidate, TIKeyboardCandidateResultSet;

@protocol UIKeyboardCandidateList <NSObject>
- (unsigned long long)selectedSortIndex;
- (NSString *)statisticsIdentifier;
- (TIKeyboardBehaviors *)keyboardBehaviors;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (TIKeyboardCandidate *)currentCandidate;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidate:(TIKeyboardCandidate *)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id <UIKeyboardCandidateListDelegate>)arg1;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 inlineText:(NSString *)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (_Bool)isHiddenCandidatesList;
- (_Bool)isExtendedList;

@optional
- (NSString *)inlineText;
- (TIKeyboardCandidateResultSet *)candidates;
- (void)revealHiddenCandidates;
- (void)jumpToCompositions;
- (void)candidatesDidChange;
- (_Bool)hasPreviousPage;
- (_Bool)hasNextPage;
- (_Bool)handleTabKeyWithShift:(_Bool)arg1;
- (_Bool)handleNumberKey:(unsigned long long)arg1;
- (void)setCompletionContext:(NSString *)arg1;
- (void)showCaret:(_Bool)arg1 gradually:(_Bool)arg2;
- (void)setInlineText:(NSString *)arg1;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 type:(int)arg2 inlineText:(NSString *)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(_Bool)arg6;
@end

