//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURL, NSURLRequest, WebDataSource, WebFrame, WebScriptObject, WebUIBrowserLoadingController, WebView;

@protocol WebUIBrowserLoadingControllerDelegate <NSObject>

@optional
- (void)webThreadWebView:(WebView *)arg1 didLayout:(unsigned long long)arg2;
- (void)webView:(WebView *)arg1 didHandleOnloadEventsForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didClearWindowObject:(WebScriptObject *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didChangeLocationWithinPageForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didFailLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didFinishLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didCommitLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didFailProvisionalLoadWithError:(NSError *)arg2 forFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(WebFrame *)arg2;
- (void)webView:(WebView *)arg1 didStartProvisionalLoadForFrame:(WebFrame *)arg2;
- (void)browserLoadingController:(WebUIBrowserLoadingController *)arg1 reportNetworkDataUsage:(struct _WBUNetworkDataUsage)arg2;
- (_Bool)browserLoadingControllerShouldEvaluateUserEnteredJavaScript:(WebUIBrowserLoadingController *)arg1;
- (NSString *)browserLoadingController:(WebUIBrowserLoadingController *)arg1 userVisibleStringForURL:(NSURL *)arg2;
- (void)browserLoadingControllerDidUpdateLoadingState:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingController:(WebUIBrowserLoadingController *)arg1 didFinishLoadingWithError:(NSError *)arg2 dataSource:(WebDataSource *)arg3;
- (void)browserLoadingControllerDidStartLoading:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerWillStartUserDrivenLoad:(WebUIBrowserLoadingController *)arg1;
- (_Bool)browserLoadingControllerShouldShowProvisionalURLs:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingController:(WebUIBrowserLoadingController *)arg1 failedToStartLoadingRequest:(NSURLRequest *)arg2 error:(NSError *)arg3;
- (void)browserLoadingController:(WebUIBrowserLoadingController *)arg1 willLoadRequest:(NSURLRequest *)arg2 userDriven:(_Bool)arg3;
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateSecurity:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateBackForward:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateTitle:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateURLString:(WebUIBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateURL:(WebUIBrowserLoadingController *)arg1;
@end

