//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "APMCameraViewDelegate-Protocol.h"
#import "BCMaskViewPrivateDelegate-Protocol.h"
#import "BCMediaRecordBtnViewDelegate-Protocol.h"

@class BCMediaRecordBtnView, NSDictionary, NSMutableArray, NSString, TEXCameraView, TEXEdgeDetectFunctor, UIButton, UILabel, UIView;
@protocol BCMaskView, BCMaskViewDelegate;

@interface BeeCapImagePickerViewController : DTViewController <BCMediaRecordBtnViewDelegate, APMCameraViewDelegate, BCMaskViewPrivateDelegate>
{
    _Bool _isLandscape;
    _Bool _needCrop;
    _Bool _needPreview;
    _Bool _silence;
    _Bool _firstLoad;
    _Bool _originStatuBarHidden;
    _Bool _originNavigationBarHidden;
    _Bool _readyEventFired;
    _Bool _goToPreview;
    _Bool _quitAfterAction;
    NSString *_business;
    id <BCMaskViewDelegate> _maskDelegate;
    TEXCameraView *_recordView;
    BCMediaRecordBtnView *_recordBtn;
    UIView<BCMaskView> *_maskView;
    UIButton *_cancelBtn;
    UIButton *_tipView;
    UILabel *_centerTip;
    long long _maskMode;
    NSString *_exifInfo;
    long long _captureQuality;
    NSMutableArray *_result;
    long long _cameraWidth;
    long long _cameraHeight;
    TEXEdgeDetectFunctor *_edgeDetectFunctor;
    NSDictionary *_options;
    CDUnknownBlockType _imagesBlock;
    CDUnknownBlockType _imagesWithInfoBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _readyBlock;
    struct CGRect _originRectangleFrame;
}

@property(nonatomic) __weak CDUnknownBlockType readyBlock; // @synthesize readyBlock=_readyBlock;
@property(nonatomic) __weak CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) __weak CDUnknownBlockType imagesWithInfoBlock; // @synthesize imagesWithInfoBlock=_imagesWithInfoBlock;
@property(nonatomic) __weak CDUnknownBlockType imagesBlock; // @synthesize imagesBlock=_imagesBlock;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) TEXEdgeDetectFunctor *edgeDetectFunctor; // @synthesize edgeDetectFunctor=_edgeDetectFunctor;
@property(nonatomic) _Bool quitAfterAction; // @synthesize quitAfterAction=_quitAfterAction;
@property(nonatomic) _Bool goToPreview; // @synthesize goToPreview=_goToPreview;
@property(nonatomic) long long cameraHeight; // @synthesize cameraHeight=_cameraHeight;
@property(nonatomic) long long cameraWidth; // @synthesize cameraWidth=_cameraWidth;
@property(nonatomic) _Bool readyEventFired; // @synthesize readyEventFired=_readyEventFired;
@property(retain, nonatomic) NSMutableArray *result; // @synthesize result=_result;
@property(nonatomic) struct CGRect originRectangleFrame; // @synthesize originRectangleFrame=_originRectangleFrame;
@property(nonatomic) _Bool originNavigationBarHidden; // @synthesize originNavigationBarHidden=_originNavigationBarHidden;
@property(nonatomic) _Bool originStatuBarHidden; // @synthesize originStatuBarHidden=_originStatuBarHidden;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(nonatomic) _Bool silence; // @synthesize silence=_silence;
@property(nonatomic) long long captureQuality; // @synthesize captureQuality=_captureQuality;
@property(copy, nonatomic) NSString *exifInfo; // @synthesize exifInfo=_exifInfo;
@property(nonatomic) long long maskMode; // @synthesize maskMode=_maskMode;
@property(nonatomic) _Bool needPreview; // @synthesize needPreview=_needPreview;
@property(nonatomic) _Bool needCrop; // @synthesize needCrop=_needCrop;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) UILabel *centerTip; // @synthesize centerTip=_centerTip;
@property(retain, nonatomic) UIButton *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView<BCMaskView> *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) BCMediaRecordBtnView *recordBtn; // @synthesize recordBtn=_recordBtn;
@property(retain, nonatomic) TEXCameraView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) __weak id <BCMaskViewDelegate> maskDelegate; // @synthesize maskDelegate=_maskDelegate;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
- (void).cxx_destruct;
- (void)resetRectangleFrame;
- (void)enterForeground:(id)arg1;
- (void)onReadyWithError:(id)arg1;
- (_Bool)canHandle:(unsigned long long)arg1;
- (_Bool)isFailed:(unsigned long long)arg1 error:(id)arg2;
- (void)endPointWithStartTime:(long long)arg1;
- (void)startPoint;
- (void)startMovieRunning:(CDUnknownBlockType)arg1;
- (void)startMovieRunning;
- (_Bool)isShouldShowAlert;
- (void)setCenterTipWithString:(id)arg1 position:(long long)arg2 andColor:(id)arg3;
- (void)hideTipView;
- (void)showTipWithText:(id)arg1 andDuration:(double)arg2;
- (void)flashBtnClicked:(_Bool)arg1;
- (id)getLocalIdByImage:(id)arg1;
- (struct CGRect)getRectOfCropFrame;
- (void)takePhoto:(id)arg1 error:(id)arg2 andCallback:(CDUnknownBlockType)arg3;
- (void)didPhotoBtnPressed:(id)arg1;
- (void)cameraView:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)onCancelClicked:(id)arg1;
- (void)takePhotoWithCallback:(CDUnknownBlockType)arg1;
- (void)quit;
- (void)updateUIWithOptions:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)configUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)rotateDevice;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
