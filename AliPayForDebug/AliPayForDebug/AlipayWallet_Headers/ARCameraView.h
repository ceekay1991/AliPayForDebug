//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ARCNavigationBarDateSource-Protocol.h"
#import "ARCNavigationBarDelegate-Protocol.h"
#import "ARScanBusinessBarViewProtocol-Protocol.h"
#import "Ant3DCameraViewDelegate-Protocol.h"

@class ARAntCameraModel, ARCNavigationBar, ARScanAnimationView, ARScanBusinessBarView, ARScanFeatureRenderView, Ant3DCameraView, NSString;
@protocol ARCameraViewDataSource, ARCameraViewDelegate;

@interface ARCameraView : UIView <ARCNavigationBarDelegate, ARCNavigationBarDateSource, ARScanBusinessBarViewProtocol, Ant3DCameraViewDelegate>
{
    double _cameraToViewCoordinateRatio;
    double _cameraWidth;
    double _cameraHeight;
    _Bool _isNeedRefresh;
    int _fpscount;
    ARAntCameraModel *_exceptionModel;
    unsigned long long _mode;
    double _cameraWidthPercent;
    ARCNavigationBar *_topBar;
    UIView *_cameraRenderView;
    ARScanFeatureRenderView *_featureRenderView;
    ARScanAnimationView *_scanAnimationView;
    ARScanBusinessBarView *_barView;
    Ant3DCameraView *_ant3dCameraView;
    UIView *_maskView;
    id <ARCameraViewDelegate> _delegate;
    id <ARCameraViewDataSource> _dataSource;
    unsigned long long _viewSkin;
    struct CGRect _analyzeRect;
}

@property(nonatomic) unsigned long long viewSkin; // @synthesize viewSkin=_viewSkin;
@property(nonatomic) __weak id <ARCameraViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ARCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect analyzeRect; // @synthesize analyzeRect=_analyzeRect;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) Ant3DCameraView *ant3dCameraView; // @synthesize ant3dCameraView=_ant3dCameraView;
@property(retain, nonatomic) ARScanBusinessBarView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) ARScanAnimationView *scanAnimationView; // @synthesize scanAnimationView=_scanAnimationView;
@property(retain, nonatomic) ARScanFeatureRenderView *featureRenderView; // @synthesize featureRenderView=_featureRenderView;
@property(retain, nonatomic) UIView *cameraRenderView; // @synthesize cameraRenderView=_cameraRenderView;
@property(retain, nonatomic) ARCNavigationBar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) double cameraWidthPercent; // @synthesize cameraWidthPercent=_cameraWidthPercent;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)cameraViewDidChange:(id)arg1;
- (void)continueRunAntCamera;
- (void)dealloc;
- (void)didClickBusinessAvatarView;
- (void)actiontaped:(int)arg1;
- (_Bool)isShowbanner;
- (_Bool)isFaceBack;
- (_Bool)isLight;
- (double)CamBeautyLevel;
- (_Bool)CamEnableBeauty;
- (void)switchCamera:(CDUnknownBlockType)arg1;
- (void)wakeup3DCameraView:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateFeatureWithImagePoints:(id)arg1;
- (void)drawImageBuffer:(struct __CVBuffer *)arg1;
- (void)scanViewsHidden:(_Bool)arg1 animation:(_Bool)arg2;
- (_Bool)isAnt3dCamera;
- (void)bottomBarHidden:(_Bool)arg1 animation:(_Bool)arg2;
- (void)topBarHidden:(_Bool)arg1 animation:(_Bool)arg2;
- (void)setupUI;
- (void)cleanAnt3dCameraView;
- (void)resumeData;
- (id)initWithFrame:(struct CGRect)arg1 viewSkin:(unsigned long long)arg2 mode:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

