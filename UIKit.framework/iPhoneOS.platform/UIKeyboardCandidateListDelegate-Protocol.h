//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol UIKeyboardCandidateListDelegate <NSObject>

@optional
- (void)candidateListShouldBeDismissed:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListSelectionDidChange:(id <UIKeyboardCandidateList>)arg1;
- (void)candidateListAcceptCandidate:(id <UIKeyboardCandidateList>)arg1;
- (void)setCandidateList:(id <UIKeyboardCandidateList>)arg1 updateCandidateView:(_Bool)arg2;
@end

