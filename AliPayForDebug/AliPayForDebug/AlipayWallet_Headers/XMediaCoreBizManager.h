//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMediaCoreBaseProcessorDelegate-Protocol.h"

@class NSDictionary, NSString, XMBARClassifyProcessor, XMBCarDamageProcessor, XMBClassifyProcessor, XMBDetectProcessor, XMBFacialExpressionProcessor, XMBGestureProcessor, XMBHandKeyPointProcessor, XMBImageSecuProcessor, XMBOCRProcessor, XMBPoseDetectProcessor, XMBPredictProcessor, XMBTrafficVoiceProcessor, XMBVoiceRecProcessor, XMBZFaceDetectProcessor, XMediaCoreBizConfig;
@protocol OS_dispatch_queue, XMediaCoreBizManagerDelegate;

@interface XMediaCoreBizManager : NSObject <XMediaCoreBaseProcessorDelegate>
{
    NSObject<OS_dispatch_queue> *_algorithmQueue;
    _Bool _running;
    _Bool _notificationAdded;
    id <XMediaCoreBizManagerDelegate> _delegate;
    XMediaCoreBizConfig *_bizConfig;
    XMBOCRProcessor *_commonOCRProcessor;
    XMBClassifyProcessor *_commonClassifyProcessor;
    XMBDetectProcessor *_commonDetectProcessor;
    XMBPredictProcessor *_commonPredictProcessor;
    XMBImageSecuProcessor *_imageSecuProcessor;
    XMBVoiceRecProcessor *_voiceRecProcessor;
    XMBCarDamageProcessor *_carDmgProcessor;
    XMBPoseDetectProcessor *_poseProcessor;
    XMBGestureProcessor *_gestureProcessor;
    XMBHandKeyPointProcessor *_handGestureProcessor;
    XMBFacialExpressionProcessor *_smileProcessor;
    XMBFacialExpressionProcessor *_blinkProcessor;
    XMBFacialExpressionProcessor *_mouthProcessor;
    XMBZFaceDetectProcessor *_zFaceProcessor;
    XMBTrafficVoiceProcessor *_trafficVoiceProcessor;
    XMBARClassifyProcessor *_arClassifyProcessor;
    CDUnknownBlockType _cameraProcessResultBlock;
    NSDictionary *_cameraProcessOptions;
}

+ (void)releaseInstanceWithConfig:(id)arg1;
+ (id)shareInstanceWithConfig:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)remoteUnSupportLogWithConfig:(id)arg1;
+ (_Bool)isSupportWithConfig:(id)arg1;
@property(copy, nonatomic) NSDictionary *cameraProcessOptions; // @synthesize cameraProcessOptions=_cameraProcessOptions;
@property(copy, nonatomic) CDUnknownBlockType cameraProcessResultBlock; // @synthesize cameraProcessResultBlock=_cameraProcessResultBlock;
@property(nonatomic) _Bool notificationAdded; // @synthesize notificationAdded=_notificationAdded;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) XMBARClassifyProcessor *arClassifyProcessor; // @synthesize arClassifyProcessor=_arClassifyProcessor;
@property(retain, nonatomic) XMBTrafficVoiceProcessor *trafficVoiceProcessor; // @synthesize trafficVoiceProcessor=_trafficVoiceProcessor;
@property(retain, nonatomic) XMBZFaceDetectProcessor *zFaceProcessor; // @synthesize zFaceProcessor=_zFaceProcessor;
@property(retain, nonatomic) XMBFacialExpressionProcessor *mouthProcessor; // @synthesize mouthProcessor=_mouthProcessor;
@property(retain, nonatomic) XMBFacialExpressionProcessor *blinkProcessor; // @synthesize blinkProcessor=_blinkProcessor;
@property(retain, nonatomic) XMBFacialExpressionProcessor *smileProcessor; // @synthesize smileProcessor=_smileProcessor;
@property(retain, nonatomic) XMBHandKeyPointProcessor *handGestureProcessor; // @synthesize handGestureProcessor=_handGestureProcessor;
@property(retain, nonatomic) XMBGestureProcessor *gestureProcessor; // @synthesize gestureProcessor=_gestureProcessor;
@property(retain, nonatomic) XMBPoseDetectProcessor *poseProcessor; // @synthesize poseProcessor=_poseProcessor;
@property(retain, nonatomic) XMBCarDamageProcessor *carDmgProcessor; // @synthesize carDmgProcessor=_carDmgProcessor;
@property(retain, nonatomic) XMBVoiceRecProcessor *voiceRecProcessor; // @synthesize voiceRecProcessor=_voiceRecProcessor;
@property(retain, nonatomic) XMBImageSecuProcessor *imageSecuProcessor; // @synthesize imageSecuProcessor=_imageSecuProcessor;
@property(retain, nonatomic) XMBPredictProcessor *commonPredictProcessor; // @synthesize commonPredictProcessor=_commonPredictProcessor;
@property(retain, nonatomic) XMBDetectProcessor *commonDetectProcessor; // @synthesize commonDetectProcessor=_commonDetectProcessor;
@property(retain, nonatomic) XMBClassifyProcessor *commonClassifyProcessor; // @synthesize commonClassifyProcessor=_commonClassifyProcessor;
@property(retain, nonatomic) XMBOCRProcessor *commonOCRProcessor; // @synthesize commonOCRProcessor=_commonOCRProcessor;
@property(retain, nonatomic) XMediaCoreBizConfig *bizConfig; // @synthesize bizConfig=_bizConfig;
@property(nonatomic) __weak id <XMediaCoreBizManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receiveCameraFrame:(id)arg1;
- (id)pointFromImageToView:(id)arg1;
- (id)roiFromImageToView:(id)arg1;
- (void)receiveAndProcessCameraFrameWithOptions:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)synProcessWithSource:(id)arg1 options:(id)arg2;
- (void)asynProcessWithSource:(id)arg1 options:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)processWithCameraFrame:(struct __CVBuffer *)arg1 options:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)processWithBizType:(unsigned long long)arg1 frame:(struct __CVBuffer *)arg2 options:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)initWithConfig:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
