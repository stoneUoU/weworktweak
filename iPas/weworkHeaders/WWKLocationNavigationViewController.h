//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QMSSearchDelegate-Protocol.h"
#import "QMapViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WWKForwardingControllerDelegate-Protocol.h"

@class NSString, QMapView, UIButton, UILabel, WWFavoritesItem, WWKMessage, WWKMessageLocation;
@protocol WWKLocationNavigationViewControllerDelegate;

@interface WWKLocationNavigationViewController : UIViewController <QMapViewDelegate, WWKForwardingControllerDelegate, QMSSearchDelegate, UIGestureRecognizerDelegate>
{
    QMapView *mapView_;
    WWKMessage *message_;
    WWKMessageLocation *location_;
    UIButton *backButton_;
    UIButton *moreButton_;
    UIButton *naviButton_;
    UIButton *findMyPostionButton_;
    UILabel *nameAddreeLabel_;
    UILabel *detailAddressLabel_;
    UIViewController *backViewController_;
    id interactivePopDelegate_;
    WWFavoritesItem *mFavItem;
    id <WWKLocationNavigationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKLocationNavigationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchWithDrivingRouteSearchOption:(id)arg1 didRecevieResult:(id)arg2;
- (void)searchWithSearchOption:(id)arg1 didFailWithError:(id)arg2;
- (void)searchWithWalkingRouteSearchOption:(id)arg1 didRecevieResult:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)forwardingMessage:(scoped_refptr_c1fa851d)arg1 ToConversation:(scoped_refptr_fd92d7bf)arg2 isSuccess:(_Bool)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)p_onNavigationButtonClicked:(id)arg1;
- (void)p_zoomMapView:(struct CLLocationCoordinate2D)arg1 andAnother:(struct CLLocationCoordinate2D)arg2;
- (void)p_zoomMapView:(struct CLLocationCoordinate2D)arg1;
- (void)p_zoomMapViewFirstTime:(id)arg1;
- (double)p_getDistanceBetween:(struct CLLocationCoordinate2D)arg1 AndTarget:(struct CLLocationCoordinate2D)arg2;
- (void)p_onFindMyPostionClicked:(id)arg1;
- (void)p_onMoreButtonClicked:(id)arg1;
- (void)p_addAnnotation:(struct CLLocationCoordinate2D)arg1 andTitle:(id)arg2;
- (void)p_onBackButtonClicked:(id)arg1;
- (void)p_showRoute;
- (void)p_navigationByAppleMap;
- (void)p_streetView;
- (void)didReceiveMemoryWarning;
- (id)backViewController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithFavItem:(id)arg1 message:(id)arg2;
- (id)initWithLocation:(id)arg1;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
