//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARTVCForwardMsgInfo, ARTVCIncomingCallInfo, ARTVCInviteInfo, ARTVCReplyToInviteInfo, ARTVCRoomInfo, ARTVCStatisticsData, NSError, NSString, UIView;

@protocol ARTVCCallDelegate <NSObject>
- (void)didNetworkChangedTo:(long long)arg1;
- (void)didAudioPlayModeChangedTo:(unsigned long long)arg1;
- (void)participant:(NSString *)arg1 didEncounterError:(NSError *)arg2;
- (void)didVideoViewRenderStopped:(UIView *)arg1 participantId:(NSString *)arg2;
- (void)didFirstVideoFrameRendered:(UIView *)arg1 participantId:(NSString *)arg2;
- (void)didVideoRenderViewInitialized:(UIView *)arg1 participantId:(NSString *)arg2;
- (void)didCameraPermissionNotAllowed;
- (void)didMicrophonePermissionNotAllowed;

@optional
- (void)participant:(NSString *)arg1 didPeerLeaveRoom:(NSString *)arg2 leaveReason:(long long)arg3;
- (void)participant:(NSString *)arg1 didPeerReplyToInvite:(ARTVCReplyToInviteInfo *)arg2;
- (void)participant:(NSString *)arg1 didReceiveInvite:(ARTVCInviteInfo *)arg2;
- (void)participant:(NSString *)arg1 didReceiveForwardMsg:(ARTVCForwardMsgInfo *)arg2;
- (void)participant:(NSString *)arg1 didGetPeerUid:(NSString *)arg2;
- (void)participant:(NSString *)arg1 didPeerReply:(int)arg2 callId:(NSString *)arg3;
- (void)participant:(NSString *)arg1 didStateChangedTo:(long long)arg2 callId:(NSString *)arg3;
- (void)participant:(NSString *)arg1 didStateChangedTo:(long long)arg2;
- (void)participant:(NSString *)arg1 didReceiveIncomingCall:(ARTVCIncomingCallInfo *)arg2;
- (void)participant:(NSString *)arg1 didReceiveRoomInfo:(ARTVCRoomInfo *)arg2;
- (void)participant:(NSString *)arg1 didAvailabeSendBandwidthBecomeLow:(_Bool)arg2 currentBandwidth:(double)arg3;
- (void)participant:(NSString *)arg1 didGenerateCallStatisticsData:(ARTVCStatisticsData *)arg2;
- (void)participant:(NSString *)arg1 didRemoteCallModeChangedTo:(long long)arg2;
@end

