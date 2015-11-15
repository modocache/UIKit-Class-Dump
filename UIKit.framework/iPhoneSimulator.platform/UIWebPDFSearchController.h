//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebPDFSearchOperationDelegate.h"

@class NSArray, NSMutableArray, NSObject<UIWebPDFSearchControllerDelegate>, NSOperationQueue, NSString, UIPDFDocument;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate>
{
    unsigned int _resultIndexWhenLimitHit;
    BOOL _notifiedThatSearchBegin;
    unsigned int _pageIndexWhenLimitHit;
    NSOperationQueue *_searchQueue;
    NSMutableArray *_results;
    NSString *_searchString;
    UIPDFDocument *_documentToSearch;
    NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;
    unsigned int startingPageIndex;
    float documentScale;
    unsigned int resultLimit;
}

@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) unsigned int resultLimit; // @synthesize resultLimit;
@property(nonatomic) float documentScale; // @synthesize documentScale;
@property(nonatomic) unsigned int startingPageIndex; // @synthesize startingPageIndex;
@property(nonatomic) NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate; // @synthesize searchDelegate;
@property(retain, nonatomic) UIPDFDocument *documentToSearch; // @synthesize documentToSearch=_documentToSearch;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (void)searchDidFinish:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (void)searchWasCancelled:(id)arg1;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchDidBegin:(id)arg1;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)_clearSearchQueue;
- (void)search:(id)arg1;
- (unsigned int)_actualStartingPageIndex;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) BOOL paused;
@property(readonly, nonatomic) BOOL searching;

@end

