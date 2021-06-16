//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString, UIScrollView, UIView, UIWebView, WKWebView;

@interface WWKWebViewController : UIViewController <UIWebViewDelegate, WKUIDelegate, WKNavigationDelegate>
{
    unsigned long long _adjustingScrollView;
    _Bool _cacheModeSet;
    _Bool _hasValidContentSize;
    _Bool _forceUsingUIWebView;
    UIView *_headerView;
    UIView *_footerView;
    NSString *_navigationTitle;
    unsigned long long _cacheMode;
    UIWebView *_uiWebView;
    WKWebView *_wkWebView;
}

+ (_Bool)changeNavigatorUserAgent:(id)arg1;
+ (id)makeUserAgentString:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(retain, nonatomic) UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
@property(nonatomic) unsigned long long cacheMode; // @synthesize cacheMode=_cacheMode;
@property(nonatomic) _Bool forceUsingUIWebView; // @synthesize forceUsingUIWebView=_forceUsingUIWebView;
@property(readonly, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)patch_pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)getHtmlContentHeight;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutHeaderAndFooterAnimated;
- (void)layoutHeaderAndFooter;
- (void)positionHeaderAndFooter;
- (void)dismissWebViewController;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (id)customUserAgent;
- (id)internalWebView;
- (id)navigatorUserAgent;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) UIView *webView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)hackScrollView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

